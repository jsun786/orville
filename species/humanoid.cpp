/**
 * Implementation for Humanoid class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include "species.h"

// Initialize a humanoid with height and weight
Humanoid::Humanoid(double height, double weight)
    : _height(height), _weight(weight) {}

// Return height of this humanoid
double Humanoid::height() { return _height; }

// Return weight of this humanoid
double Humanoid::weight() { return _weight; }