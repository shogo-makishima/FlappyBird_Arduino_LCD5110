#include "Arduino.h"
#include "Adafruit_GFX.h"
#include "Adafruit_PCD8544.h"

#include "Main.h"

Main GAME = Main();
Adafruit_PCD8544 Display = Adafruit_PCD8544(3, 4, 5, 6, 7);

void setup() {
    Serial.begin(9600);

    Display.begin();

    Display.setContrast(60);
    Display.clearDisplay();
    Display.display();
}

void loop() {
    Display.clearDisplay();

    Display.fillScreen(BLACK);

    Display.setTextSize(1);
    Display.setTextColor(WHITE);

    if (!GAME.b_isGame) {
        Display.setTextSize(Settings::UI::FONT_SIZE_COUNTER_MENU);
        Display.setCursor(Settings::UI::CURSOR_COUNTER_MENU_X, Settings::UI::CURSOR_COUNTER_MENU_Y);
        Display.print("Result: " + String(GAME.counter));

        Display.setTextSize(Settings::UI::FONT_SIZE_PRESS_MENU);
        Display.setCursor(Settings::UI::CURSOR_PRESS_MENU_X, Settings::UI::CURSOR_PRESS_MENU_Y);
        Display.print("Press to start");

        if (Serial.available() > 0 && Serial.read() == 'w')
            GAME.Start();

    } else {
        Display.setTextSize(Settings::UI::FONT_SIZE_COUNTER_GAME);
        Display.setCursor(Settings::UI::CURSOR_COUNTER_GAME_X, Settings::UI::CURSOR_COUNTER_GAME_Y);
        Display.print(String(GAME.counter));

        Display.drawBitmap(GAME.wall_1.rect.x, GAME.wall_1.rect.y, GAME.wall_1.Sprite, GAME.wall_1.rect.width, GAME.wall_1.rect.height, WHITE);
        Display.drawBitmap(GAME.player.rect.x, GAME.player.rect.y, GAME.player.Sprite, GAME.player.rect.width, GAME.player.rect.height, WHITE);
        GAME.Update();

        if (Serial.available() > 0){
            char t_char = Serial.read();

            switch (t_char) {
            case 'w':
                GAME.player.Translate(0, -2, true);
                break;
            default:
                break;
            }
        }
    }

    Display.display();
}