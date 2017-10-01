#include <iostream>
#include "AlaskaAir.h"


AlaskaAir::AlaskaAir()
{
  fare = 0.0;
  dist = 0.0;
}

AlaskaAir::~AlaskaAir()
{
  
}


double AlaskaAir:: getDist(string Origin, string Dest)
{
  if(Origin == "San Diego")
    {
      if(Dest == "Los Angeles")
	{
	  dist = 120;
	  return dist;
	}
      if(Dest == "Portland")
	{
	  dist = 1083.4;
	  return dist;
	}
      if(Dest == "Seattle")
	{
	  dist = 1255.1;
	  return dist;
	}
      if(Dest == "Maui")
	{
	  dist = 2540;
	  return dist;
	}
      else
	{ 
	  throw OutOfRange();
	}
    }
}

double AlaskaAir:: getFair(double dist)
{
  double time = dist/MPH;
  double fare = BASERATE * time;
  return fare;
}
