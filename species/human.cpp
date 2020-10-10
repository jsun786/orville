/**
 * Implementation of Human class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include "species.h"

// Initialize a human with their sex, height and weight
Human::Human(bool male, double height, double weight)
    : Humanoid(height, weight), _male(male) {}

// Return if this human is male
bool Human::isMale() { return _male; }