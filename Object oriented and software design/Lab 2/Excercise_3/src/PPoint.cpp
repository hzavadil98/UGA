#include "../include/PPoint.h"

PPoint::PPoint(int a, int b)
{
  x = new int;
  y = new int;
  *x = a;
  *y = b;
  const type_info& t = typeid(*this);
  cout << t.name() << endl;
}

PPoint::PPoint(const PPoint &p)
{
  x = new int;
  y = new int;
  *x = *p.x;
  *y = *p.y;
  cout << "Calling PPoint copy constructor" << endl;
}

PPoint::PPoint()
{
  x = new int;
  y = new int;
  *x = 0;
  *y = 0;
}

PPoint::~PPoint()
{
  if (x != nullptr)
  {delete x;}
  if (y != nullptr)
  {delete y;}
  cout << "Calling PPoint destructor" << endl;
}

void PPoint::add(const PPoint &p)
{
  *this->x+=*p.x;
  *this->y+=*p.y;
}

void PPoint::print_PPoint()
{
  cout << "[" << *this->x << "," << *this->y << "]";
}

void PPoint::set_coordinates(int a, int b)
{
  *x = a;
  *y = b;
}
