/**
 * Implementation for Gelatin class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include <cstring>

#include "species.h"

// Initialize a Gelatin with given weight
Gelatin::Gelatin(double weight) {
  _weight = weight;
  _shape = _defaultShape;
}

// Return the weight of this Gelatin
double Gelatin::weight() { return _weight; }

// Return the shape of this Gelatin
const char* Gelatin::shape() { return _shape; }

// This Gelatin morphs into another shape
// Only "flat" and "sphere" are allowed
void Gelatin::morph(const char* newShape) {
  if (std::strcmp(newShape, "flat") == 0 ||
      std::strcmp(newShape, _defaultShape) == 0) {
    _shape = newShape;
  }
}

// This Gelatin goes back to default shape
void Gelatin::morph() { _shape = _defaultShape; }

// This Gelatin splits into two with evenly divided weight
// Each remains the shape as before split
// Return an instance after split
Gelatin Gelatin::split() {
  _weight /= 2;
  Gelatin newGelatin = Gelatin(_weight);
  newGelatin._shape = this->_shape;
  return newGelatin;
}

// Overloading operator ==
// Two Gelatins are equal if they have the same memory address
bool Gelatin::operator==(const Gelatin& g) const { return this == &g; }

// Overloading operator !=
// Two Gelatins are unequal if their memory addresses differ
bool Gelatin::operator!=(const Gelatin& g) const { return !(*this == g); }