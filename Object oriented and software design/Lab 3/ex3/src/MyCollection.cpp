#include "../include/MyCollection.h"

/*template <class T>
MyCollection<T>::MyCollection(int m)
{
  array = new T[m];
  maxel = m;
  fill = 0;
}

template <class T>
MyCollection<T>::~MyCollection()
{
  delete[] array;
}

template <class T>
int MyCollection<T>::get_maxel() const
{
  return maxel;
}

template <class T>
int MyCollection<T>::get_fill() const
{
  return fill;
}

template <class T>
void MyCollection<T>::insert_elem(T data)
{
  if (fill <= maxel-1)
  {
    array[fill++] = data;
    cout << "Element added. Remaining space in array: " << maxel-fill << endl;
  }
  else
  {
    cout << "Maximum number of elements reached, element not added." << endl;
  }
}

template <class T>
T MyCollection<T>::get_elem(int i) const
{
  if(i < maxel && i >= 0)
  {
    return array[i];
  }
  else
  {
    cout << "Index out of range, must be between 0 and " << maxel - 1 << endl;
  }
}

template <class T>
void MyCollection<T>::empty()
{
  fill = 0;
}

template <class T>
ostream& operator<<(ostream &o,const MyCollection<T> &obj)
{
  o << "This instance of MyCollection is of type " << typeid(*obj.array[0]).name() << ". Its maximum length is " << obj.get_maxel() << " and " << obj.get_fill() << " elements are currently stored in the array." << endl;
  return o;
}*/
