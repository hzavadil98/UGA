#ifndef UTILS
#define UTILS
/**
*\file utils.h
*\brief Header with independent functions
*/

#include "../include/MyCollection.h"
#include <cstdlib>
#include <ctime>
//#include <cmath>

/**
*\fn void init(MyCollection<int> &c, int k)
*\brief If there is enough space, initializes k more places in the array by random integers
*\param MyCollection<int> &c - changed array, int k - number of places to be filled
*/
void init(MyCollection<int> &c, int k);

/**
*\fn void apply_fact(const MyCollection<int> &c, MyCollection<int> &res)
*\brief If dimensions fit empties array res and fills it with factorials of integers stored in c
*/
void apply_fact(const MyCollection<int> &c, MyCollection<int> &res);

#include<iostream>
#include<stdio.h>
#include<string.h>
#include "../include/utils.h"
#include<vector>
using namespace std;
void init(MyCollection<int> &c, int k)
{
  srand (time(NULL));
  if (k <= (c.get_maxel() - c.get_fill()))
  {
    for(int i = 0; i < k; i++)
    {
      c.insert_elem(rand() %13 + 1);
    }
  }
  else
  {
    cout << "Not enough space left in the array. No integers written. Remaining spaces: " << c.get_maxel() - c.get_fill() << endl;
  }
}

void init2(std::vector<int> &c, int k)
{
  srand (time(NULL));
  if (k <= (c.max_size() - c.size()))
  {
    for(int i = 0; i < k; i++)
    {
      c.push_back(rand() %13 + 1);
    }
  }
  else
  {
    cout << "Not enough space left in the array. No integers written. Remaining spaces: " << c.max_size() - c.size() << endl;
  }
}


template <class T>
T factorial(int N) {
	T total = 1;
	for (;N>0;N--) total *= N;
	return total;
}

void swap(char *i, char *j) {
	char tmp = *j;
	*j = *i;
	*i = tmp;
}
void reverse(char* s) {
	int len = strlen(s)+1;
	for (int i=0;i<len/2;i++)
		swap(s+len-2-i, s+i);
}

template <class T>
void print() {
	char str[100];
	for (int i=2;i<16;i++) {
		T out = factorial<T>(i);
		cout<<"N: "<<i<<"\t";
		int j=0;
		while (out>0) {
			str[j]='0'+out%10;
			out /= 10;
			j++;
		}
		str[j]=out;
		j++;
		str[j]='\0';
		reverse(str);
		cout<<"factorial: "<<str<<"\n";
	}
}

template <class T1, class T2>
void apply_fact(const MyCollection<int> &c, MyCollection<T2> &res)
{
  res.empty();
  if(res.get_maxel() >= c.get_fill())
  {
    for(int i = 0; i < c.get_fill(); i++)
    {
      res.insert_elem(factorial<T1>(c.get_elem(i)+1));
    }
  }
  else
  {
    cout << "Array in res is not long enough to accomodate all factorials of integers in c." << endl;
  }
}


template <class T1, class T2>
void apply_fact2(const std::vector<int> &c, std::vector<T2> &res)
{
  res.empty();
  if(res.max_size() >= c.size())
  {
    for(int i = 0; i < c.size(); i++)
    {
      res.push_back(factorial<T1>(c[i]));
    }
  }
  else
  {
    cout << "Array in res is not long enough to accomodate all factorials of integers in c." << endl;
  }
}


#
#endif //UTILS
