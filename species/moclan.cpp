/**
 * Implementation for Moclan class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include "species.h"

// Initialize a Moclan egg with 0 height and weight
Moclan::Moclan() : Humanoid(0, 0), _egg(true) {}

// Initialize a Moclan with height and weight
Moclan::Moclan(double height, double weight) : Humanoid(height, weight) {}

// Return if this Moclan is an egg
bool Moclan::isEgg() { return _egg; }

// Return a Moclan that is an egg
Moclan Moclan::layEgg() { return Moclan(); }

// A Moclan egg hatches
void Moclan::hatch() {
  if (_egg) {
    _egg = false;
  }
}