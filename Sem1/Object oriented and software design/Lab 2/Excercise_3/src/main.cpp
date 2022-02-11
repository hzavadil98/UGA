#include "../include/PPoint.h"
#include "../include/Array_of_PPoint.h"

int main()
{
  PPoint p = PPoint(1, 2);
  p.print_PPoint();
  PPoint q = p;
  q.print_PPoint();
  p.add(q);
  p.print_PPoint();
  q.set_coordinates(0,0);
  q.print_PPoint();

  Array_of_PPoint arr = Array_of_PPoint(3);
  arr.print();
  arr.add(p);
  arr.print_tabs();
  cout << endl;
  cout << endl;

  Array_of_PPoint a(4);
  PPoint f(2,6);
  a.add(f);
  a.print_tabs();
  return 0;





  return 0;
}
