/**
 * Declarations for all species classes.
 *
 * Copyright (c) 2020, Jiayue Sun.
 */

#ifndef SPECIES_H_
#define SPECIES_H_

class Eevak {
 private:
  bool _running = false;

 public:
  bool isRunning();
  void run();
  void stop();
};

class Gelatin {
 private:
  double _weight;
  const char* _shape;
  const char* _defaultShape = "sphere";
  bool _hasMorphed = false;

 public:
  Gelatin(double);
  double weight();
  const char* shape();
  void morph(const char*);
  void morph();
  Gelatin split();
  bool operator==(const Gelatin&) const;
  bool operator!=(const Gelatin&) const;
};

class Humanoid {
 private:
  double _height, _weight;

 public:
  Humanoid(double, double);
  double height();
  double weight();
};

class Human : public Humanoid {
 private:
  bool _male;

 public:
  Human(bool, double, double);
  bool isMale();
};

class Kaylon : public Humanoid {
 private:
  bool _firing = false;

 public:
  Kaylon(double, double);
  bool isFiring();
  void startFiring();
  void stopFiring();
};

class Moclan : public Humanoid {
 private:
  bool _egg = false;

 public:
  Moclan();
  Moclan(double, double);
  bool isEgg();
  Moclan layEgg();
  void hatch();
};

#endif  // SPECIES_H_
