namespace Physic2D {
    namespace Tags {
        static const char Default[] = "Default";
        static const char Player[] = "Player";
        static const char Coin[] = "Coin";
        static const char Wall[] = "Wall";
    };

    namespace Layers {
        static const char Default[] = "Default";
    };

    struct Vector2 {
        float x;
        float y;

        Vector2(float g_x, float g_y) {
            x = g_x, y = g_y;
        }
    };
    
    

    struct Rect {
        float x, y, width, height;
        Rect(float g_x, float g_y, float g_width, float g_height) {
            x = g_x; y = g_y; width = g_width; height = g_height;
        }
    };

    struct RigidBody2D {
        float gavityScale;
        bool isKinematic;
        Physic2D::Vector2 velocity = Vector2(0, 0);
        Physic2D::Vector2 drag = Vector2(0, 0.2);
        Physic2D::Vector2 maxVelocity = Vector2(0, 1);

        RigidBody2D(float g_gravityScale, bool g_isKinematic) {
            gavityScale = g_gravityScale;
            isKinematic = g_isKinematic;
        }
    };

    static const bool IntersectionRect(Rect rect1, Rect rect2) {
        return rect1.x < rect2.x + rect2.width &&
               rect1.x + rect1.width > rect2.x &&
               rect1.y < rect2.y + rect2.height &&
               rect1.y + rect1.height > rect2.y;
    }
};