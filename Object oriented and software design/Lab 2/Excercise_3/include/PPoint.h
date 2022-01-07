#ifndef PPOINT_H
#define PPOINT_H

/**
*\file PPoint.h
*\brief PPoint class header
*/

#include <iostream>
#include <typeinfo>

using namespace std;
/**
*\class PPoint
*\brief Class representing a 2D point
*/
class PPoint
{
private:
  int *x;
  int *y;
public:
  /**
  *\fn PPoint(int a, int b)
  *\brief Constructor of PPoint
  *\param int a, int b - integer coordinates of created point
  */
  PPoint(int a, int b);
  /**
  *\fn PPoint(const PPoint &p)
  *\brief Copy constructor of PPoint
  *\param PPoint &p - copied instance of class PPoint
  */
  PPoint(const PPoint &p);
  /**
  *\fn PPoint()
  *\brief Empty constructor of PPoint
  creates PPoint with coordinates [0,0]
  */
  PPoint();
  /**
  *\fn ~PPoint()
  *\brief Destructor of PPoint
  Frees allocated memory
  */
  ~PPoint();
  /**
  *\fn void add(const PPoint &p)
  *\brief Adds a PPoint p to current instance of PPoint
  *\param PPoint p - Instance of class PPoint
  */
  void add(const PPoint &p);
  /**
  *\fn void print_PPoint()
  *\brief Prints coordinates of PPoint
  */
  void print_PPoint();
  /**
  *\fn void set_coordinates(int a, int b)
  *\brief Sets neww coordinates of cuurent PPoint
  *\params int a, int b - new integer coordinate
  */
  void set_coordinates(int a, int b);





};

#endif // PPOINT_H
