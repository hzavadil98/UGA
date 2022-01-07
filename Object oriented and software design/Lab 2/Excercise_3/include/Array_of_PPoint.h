#ifndef ARRAY_OF_PPOINT
#define ARRAY_OF_PPOINT

/**
*\file Array_of_PPoint.h
*\brief Array_of_PPoint class header
*/

#include <cstdlib>
#include "../include/PPoint.h"

/**
*\class Array_of_PPoint
*\brief Class containing an array of PPoints
*/
class Array_of_PPoint
{
private:
  PPoint *arr;
  unsigned int length;
public:
  /**
  *\fn Array_of_PPoint(unsigned int len)
  *\brief Constructor of class Array_of_PPoint
  *\param unsigned int len - length of created array
  */
  Array_of_PPoint(unsigned int len);
  /**
  *\fn Array_of_PPoint(const Array_of_PPoint &obj)
  *\brief Copy constructor of class Array_of_PPoint
  *\param const Array_of_PPoint &obj - copied instance of Array_of_PPoint
  */
  Array_of_PPoint(const Array_of_PPoint &obj);
  /**
  *\fn ~Array_of_PPoint()
  *\brief Destructor of class Array_of_PPoint
  */
  ~Array_of_PPoint();
  /**
  *\fn void print()
  *\brief Prints the content of array
  */
  void print();
  /**
  *\fn void add(PPoint &p)
  *\brief Adds PPoint p to every PPoint in Array
  *\param PPoint p passed as reference
  */
  void add(PPoint &p);
  /**
  *\fn void print_tabs()
  *\brief Prints the content of the array
  */
  void print_tabs();
};




#endif // ARRAY_OF_PPOINT
