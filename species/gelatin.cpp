/**
 * Implementation for Gelatin class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

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

// This Gelatin morphs into another shape if hasn't done so
// All other attemps will be ignored
void Gelatin::morph(const char* newShape) {
  if (!_hasMorphed) {
    _shape = newShape;
  }
  _hasMorphed = true;
}

// This Gelatin goes back to default shape
void Gelatin::morph() { _shape = _defaultShape; }

// This Gelatin splits into two with evenly divided weight
// Each remains the shape before split
// Return an instance after split
Gelatin Gelatin::split() {
  _weight /= 2;
  Gelatin newGelatin = Gelatin(_weight);
  newGelatin._shape = this->_shape;
  return newGelatin;
}

// Overloading operator ==
// Two Gelatins are equal if of same shape, weight
// and status of weather have morphed
bool Gelatin::operator==(const Gelatin& g) const {
  return (this->_shape == g._shape) && (this->_weight == g._weight) &&
         (this->_hasMorphed == g._hasMorphed);
}

// Overloading operator !=
// Two Gelatins are unequal if == operator returns false
bool Gelatin::operator!=(const Gelatin& g) const { return !(*this == g); }