#include "MathCustom.h"
#include "Timer.h"
#include "Settings.h"
#include "Sprites.h"
#include "Objects.h"

#define SCENE_LENGHTS_ARRAY 9


class Main {
    public:
    Objects::GameObject wall_1 = { 
        "Wall_1",
        Physic2D::Tags::Default,
        Physic2D::Layers::Default,
        Physic2D::Rect(30, 30, 16, 48),
        Physic2D::RigidBody2D(0, true),
        true,
        Sprites::Walls::Wall
    };

    Objects::GameObject player = { 
        "Player",
        Physic2D::Tags::Player,
        Physic2D::Layers::Default,
        Physic2D::Rect(Settings::PLAYER_START_X, Settings::PLAYER_START_Y, 12, 7),
        Physic2D::RigidBody2D(Settings::PLAYER_GRAVITY, false),
        true,
        Sprites::Character::Helicopter
    };
    
    bool b_isGame = false;
    int counter = 0;

    Timer timer = Timer(Settings::DEFAULT_TIMER_PAUSE);

    Main() {
        RestoreWallPosition(&wall_1);
    };

    void RestoreWallPosition(Objects::GameObject* wall) {
        wall->SetPostion(Settings::WALL_START_X, random(Settings::WALL_MIN_Y, Settings::WALL_MAX_Y));
    }

    void Start() {
        if (!b_isGame) b_isGame = true;
        RestartGame();
    }

    void RestartGame() {
        player.SetPostion(Settings::PLAYER_START_X, Settings::PLAYER_START_Y);
        RestoreWallPosition(&wall_1);
        counter = 0;
    }

    void Update() {
        if (b_isGame) {
            timer.Update();

            wall_1.Translate(Settings::WALL_SPEED, 0);
            player.Update();

            if (Physic2D::IntersectionRect(player.rect, wall_1.rect) || player.rect.y <= 0 || player.rect.y + player.rect.height >= Settings::DEFAULT_SCREEN_HEIGHT)
                b_isGame = false;

            if (player.rect.x == wall_1.rect.x + wall_1.rect.width - Settings::WALL_SPEED_EQUALS)
                counter++;

            if (wall_1.rect.x <= 0 - wall_1.rect.width)
                RestoreWallPosition(&wall_1);

            if (timer.time <= 0) {
                timer.Reset();
            }
        }
    }
};

