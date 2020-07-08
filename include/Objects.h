#include "Physic2D.h"

namespace Objects {
    struct GameObject {
        const char *name, *tag, *layer;
        Physic2D::Rect rect;
        Physic2D::RigidBody2D rigidbody2D;
        bool isActive;
        const unsigned char* PROGMEM Sprite;
        
        void SetPostion(float g_x, float g_y) {
            rect.x = g_x;
            rect.y = g_y;
        }

        void Translate(float g_velocityX, float g_velocityY, bool useRigidBody = false) {
            if (useRigidBody) {
                rigidbody2D.velocity.x = g_velocityX;
                rigidbody2D.velocity.y = g_velocityY;
            } else {
                rect.x += g_velocityX;
                rect.y += g_velocityY;
            }
        }

        void Update() {
            if (!rigidbody2D.isKinematic) {
                if (rigidbody2D.velocity.y < 0)
                    rigidbody2D.velocity.y += rigidbody2D.drag.y;
                else if (rigidbody2D.velocity.y > 0) {
                    rigidbody2D.velocity.y += rigidbody2D.gavityScale / 10;
                    if (rigidbody2D.velocity.y > rigidbody2D.maxVelocity.y) rigidbody2D.velocity.y = rigidbody2D.maxVelocity.y;
                }

                rect.y += rigidbody2D.velocity.y;
            }
        }

        void ResetVelocity() {
            rigidbody2D.velocity.y = 0;
        }
    };
};