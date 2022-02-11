/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include "../include/utils.h"
using namespace std;

void init(MyCollection<int> &c, int k)
{
  srand (time(NULL));
  if (k <= (c.get_maxel() - c.get_fill()))
  {
    for(int i = 0; i < k; i++)
    {
      c.insert_elem(rand() %100 + 1);
    }
  }
  else
  {
    cout << "Not enough space left in the array. No integers written. Remaining spaces: " << c.get_maxel() - c.get_fill() << endl;
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

template <class T>
void apply_fact(const MyCollection<int> &c, MyCollection<int> &res)
{
  res.empty();
  if(res.get_maxel() >= c.get_fill())
  {
    for(int i = 0; i < c.get_fill(); i++)
    {
      res.insert_elem(factorial<T>(c.get_elem(i)+1));
    }
  }
  else
  {
    cout << "Array in res is not long enough to accomodate all factorials of integers in c." << endl;
  }
}
*/
