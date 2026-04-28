/*
 * structs.h
 * The Highway Pursuit - Data Structures
 *
 * Defines all custom data types (structs) used across the game.
 * Variable instances (topScores, bullets) are declared in globals.h
 * and defined in iMain.cpp.
 */

#ifndef STRUCTS_H
#define STRUCTS_H

// ─── High Score Record ─────────────────────────────────────────────────────
// Stores one leaderboard entry: the player's name and their score.
struct HighScore {
    char name[50];
    int  score;
};

// ─── Bullet / Missile Entity ───────────────────────────────────────────────
// Represents a single projectile in the bullets[] pool.
#define MAX_BULLETS 10

struct Bullet {
    float x;
    float y;
    int   active;
    int   type;  // 0 = normal bullet, 1 = missile
};

// ─── Explosion Effect Entity ───────────────────────────────────────────────
// Represents a short-lived explosion drawn at a car's last position.
#define MAX_EXPLOSIONS   3
#define EXPLOSION_DURATION 4    // frames (~40 ms at 10 ms timer)

struct Explosion {
    float x;
    float y;
    int   active;
    int   timer;   // counts down from EXPLOSION_DURATION to 0
};

// ─── UI Button Entity ──────────────────────────────────────────────────────
// Stores coordinates, size, hover state, and backlight color for UI buttons.
struct MenuButton {
    float x, y;
    float w, h;
    char  imagePath[250];
    unsigned int texture;
    int   isHovered;
    int   red, green, blue; // Backlight color
};

#endif // STRUCTS_H
