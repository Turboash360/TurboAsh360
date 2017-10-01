#ifndef ALASKAAIR_H
#define ALASKAAIR_H

#include "airline.h"

using namespace std;

const int MPH = 550;
const double BASERATE = 150;
//int Depart = ["San Diego", "Los Angles", "Portland", "Seattle", "Ancourage", "Maui", "Salt Lake City"];

class AlaskaAir
{
 protected:
  double fare;
  double dist;

 public:

  class OutOfRange{};

  AlaskaAir();
  ~AlaskaAir();

  double getDist(string, string);
  double getFair(double);

};


#endif
