#include "Physic2D.h"

namespace Objects {
    struct GameObject {
        char* name, tag, layer;
        Physic2D::Rect rect;
        Physic2D::RigidBody2D rigidbody2D;
        bool isActive;
        const unsigned char* PROGMEM Sprite;
        
        void SetPostion(float g_x, float g_y) {
            rect.x = g_x;
            rect.y = g_y;
        }

        void Translate(float g_velocityX, float g_velocityY) {
            rect.x += g_velocityX;
            rect.y += g_velocityY;
        }

        void Update() {
            if (!rigidbody2D.isKinematic)
                rect.y += rigidbody2D.gavityScale;
        }
    };
};