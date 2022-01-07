#include "../include/Array_of_PPoint.h"

Array_of_PPoint::Array_of_PPoint(unsigned int len)
{
  arr = new PPoint[len];
  length = len;
  for(int i = 0; i < length; i++)
  {
    arr[i].set_coordinates(rand() % 6, rand() % 6);
  }
}

Array_of_PPoint::Array_of_PPoint(const Array_of_PPoint &obj)
{
  length = obj.length;
  arr = new PPoint[length];
  for(int i = 0; i < length; i++)
  {
    arr[i] = obj.arr[i];
  }
  cout << "Calling Array copy constructor" << endl;
}

Array_of_PPoint::~Array_of_PPoint()
{
  delete[] arr;
  cout << "Calling Array destructor" << endl;
}

void Array_of_PPoint::print()
{
  for(int i = 0; i < length; i++)
  {
    arr[i].print_PPoint();
  }
}

void Array_of_PPoint::add(PPoint &p)
{
  for(int i = 0; i < length; i++)
  {
    arr[i].add(p);
  }

}

void Array_of_PPoint::print_tabs()
{
  for(int i = 0; i < length; i++)
  {
    arr[i].print_PPoint();
    cout << "\t";
  }
}
