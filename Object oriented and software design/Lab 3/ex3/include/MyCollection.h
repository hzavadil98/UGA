#ifndef MYCOLLECTION
#define MYCOLLECTION

/**
*\file MyCollection.h
*\brief MyCollection class header
*/

#include <iostream>

using namespace std;

/**
*\class MyCollection
*\brief Template class implementing a C-style array
*/
template <class T> class MyCollection;

/**
*\fn template<class Type> ostream& operator<<(ostream &o,const MyCollection<Type> &obj);
*\brief Overloading of << operator
*/
template<class Type> ostream& operator<<(ostream &o,const MyCollection<Type> &obj);

template <class T>
class MyCollection{
  friend ostream& operator<< <>(ostream &o,const MyCollection<T> &obj);
private:
  T *array;
  int maxel;
  int fill;
public:
  /**
  *\fn MyCollection(int m)
  *\brief Constructor of class MyCollection
  *\param int m - maximum length of array
  */
  MyCollection(int m);
  /**
  *\fn ~MyCollection()
  *\brief Destructor of class MyCollection
  */
  ~MyCollection();
  /**
  *\fn MyCollection(const MyCollection &obj)
  *\brief Copy constructor of class MyCollection
  *\param const MyCollection &obj - copied instance of MyCollection
  */
  MyCollection(const MyCollection &obj);

  /**
  *\fn int get_maxel() const
  *\brief Getter for maxel
  */
  int get_maxel() const;
  /**
  *\fn int get_filll() const
  *\brief Getter for fill
  */
  int get_fill() const;

  /**
  *\fn void insert_elem(T data)
  *\brief If there is space inserts data into the array
  *\param T data - what we insert into array
  */
  void insert_elem(T data);
  /**
  *\fn T get_elem(int i)
  *\brief Returns the data stored at i-th place in Array
  *\param int i - index of the data we want to extract
  */
  T get_elem(int i) const;
  /**
  *\fn void empty()
  *\brief Empties the array - doesn't delete stored values
  */
  void empty();


};



template <class T>
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
MyCollection<T>::MyCollection(const MyCollection &obj)
{
  array = new T[obj.maxel];
  maxel = obj.maxel;
  fill = 0;
  for(int i = 0; i < obj.fill; i++)
  {
    insert_elem(obj.get_elem(i));
  }
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
    return T(0);
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
  o << "This instance of MyCollection is of type " << typeid(T).name() << ". Its maximum length is " << obj.get_maxel() << " and " << obj.get_fill() << " elements are currently stored in the array." << endl;
  for (int i=0;i<obj.get_fill();i++) o<<(unsigned long long)obj.get_elem(i)<<" ";
  o<<'\n';
  return o;
}

#endif //MYCOLLECTION

