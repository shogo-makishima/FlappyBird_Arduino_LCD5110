namespace Settings {
    // Walls
    const float WALL_SPEED = -1;
    const unsigned int WALL_START_X = 100;
    const unsigned int WALL_MIN_Y = 15;
    const unsigned int WALL_MAX_Y = 35;

    // Player
    const unsigned int PLAYER_START_X = 5, PLAYER_START_Y = 24;
    const float PLAYER_GRAVITY = 1;

    // Other
    const unsigned int DEFAULT_TIMER_PAUSE = 100;
    const unsigned int DEFAULT_SCREEN_WIDTH = 84;
    const unsigned int DEFAULT_SCREEN_HEIGHT = 48;

    namespace UI {
        // Cursor
        const unsigned int CURSOR_COUNTER_MENU_X = 0, CURSOR_COUNTER_MENU_Y = 24, FONT_SIZE_COUNTER_MENU = 1;
        const unsigned int CURSOR_COUNTER_GAME_X = 0, CURSOR_COUNTER_GAME_Y = 0, FONT_SIZE_COUNTER_GAME = 1;
        
        const unsigned int CURSOR_PRESS_MENU_X = 0, CURSOR_PRESS_MENU_Y = 40, FONT_SIZE_PRESS_MENU = 1;

        // Sprites
        const unsigned int DEFAULT_CHARACTER_X = 6, DEFAULT_CHARACTER_Y = 1;
        const unsigned int DEFAULT_ITEM_X = 0, DEFAULT_ITEM_Y = 32;
    };
};