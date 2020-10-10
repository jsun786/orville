/**
 * Implementation for Eevak class.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#include "species.h"

// Return if this Eevak is running
bool Eevak::isRunning() { return _running; }

// Set this Eevak running
void Eevak::run() { _running = true; }

// Stop this Eevak from running
void Eevak::stop() { _running = false; }
