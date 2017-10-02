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
	  dist = 109;
	  return dist;
	}
      if(Dest == "Portland")
	{
	  dist = 983;
	  return dist;
	}
      if(Dest == "Seattle")
	{
	  dist = 1053;
	  return dist;
	}
      if(Dest == "Kahului")
	{
	  dist = 2540;
	  return dist;
	}
      if(Dest == "Salt Lake City")
	{
	  dist = 627;
	  return dist;
	}
      else
	{ 
	  throw OutOfRange();
	}
    }

  if(Origin == "Los Angeles")
    {
      if(Dest == "San Diego")
        {
          dist = 109;
          return dist;
        }
      if(Dest == "Portland")
        {
          dist = 835;
          return dist;
        }
      if(Dest == "Seattle")
        {
          dist = 956;
          return dist;
        }
      if(Dest == "Kahului")
        {
          dist = 2485;
          return dist;
        }
      if(Dest == "Salt Lake City")
        {
	  dist = 590;
	  return dist;
	}
      else
	{
	  throw OutOfRange();
	}
    }

      if(Origin == "Portland")
	{
	  if(Dest == "Los Angeles")
	    {
	      dist = 835;
	      return dist;
	    }
	  if(Dest == "San Diego")
	    {
	      dist = 983;
	      return dist;
	    }
	  if(Dest == "Seattle")
	    {
	      dist = 130;
	      return dist;
	    }
	  if(Dest == "Kahului")
	    {
	      dist = 2565;
	      return dist;
	    }
	  if(Dest == "Salt Lake City")
	    {
	      dist = 629;
	      return dist;
	    }
	  if(Dest == "Anchorage")
	    {
	      dist = 1541;
	      return dist;
	    }
	  else
	    {
	      throw OutOfRange();
	    }
	}

      if(Origin == "Seattle")
	{
	  if(Dest == "Los Angeles")
	    {
	      dist = 956;
	      return dist;
	    }
	  if(Dest == "Portland")
	    {
	      dist = 130;
	      return dist;
	    }
	  if(Dest == "San Diego")
	    {
	      dist = 1053;
	      return dist;
	    }
	  if(Dest == "Anchorage")
	    {
	      dist = 1447;
	      return dist;
	    }
	  if(Dest == "Salt Lake City")
	    {
	      dist = 688;
	      return dist;
	    }
	  else
	    {
	      throw OutOfRange();
	    }
	}
 
      if(Origin == "Anchorage")
	{
	  if(Dest == "Portland")
	    {
	      dist = 1541;
	      return dist;
	    }
	  if(Dest == "Seattle")
	    {
	      dist = 1447;
	      return dist;
	    }
	  else
	    {
	      throw OutOfRange();
	    }
	}
      if(Origin == "Kahului")
	{
	  if(Dest == "San Diego")
	    {
	      dist = 2540;
	      return dist;
	    }
	  if(Dest == "Los Angeles")
	    {
	      dist = 2485;
	      return dist;
	    }
	  if(Dest == "Portland")
	    {
	      dist = 2565;
	      return dist;
	    }
	  else
	    {
	      throw OutOfRange();
	    }
	}
      else
	{
	  throw OutOfRange();
	}
}

double AlaskaAir:: getFair(double dist)
{
  double time = dist/MPH;
  double fare = BASERATE * time;
  return fare;
}
