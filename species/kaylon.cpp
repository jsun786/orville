/**
 * Implementation for Kaylon class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include "species.h"

// Intialize a Kaylon with height and weight
Kaylon::Kaylon(double height, double weight) : Humanoid(height, weight) {}

// Return true if Kaylong is firing
bool Kaylon::isFiring() { return _firing; }

// This Kaylon starts to fire
void Kaylon::startFiring() { _firing = true; }

// This Kaylon stops fire
void Kaylon::stopFiring() { _firing = false; }