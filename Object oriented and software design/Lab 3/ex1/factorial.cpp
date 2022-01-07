#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

// calc factorial
template <class T>
T factorial(int N) {
	T total = 1;
	for (;N>0;N--) total *= N;
	return total;
}
// swap 2 chars
void swap(char *i, char *j) {
	char tmp = *j;
	*j = *i;
	*i = tmp;
}
// reverse a char array
void reverse(char* s) {
	int len = strlen(s)+1;
	for (int i=0;i<len/2;i++)
		swap(s+len-2-i, s+i);
}
// calc factorial for 2 to 15, print out by converting num to char array
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
// do either output prof asked for or output a table of results
int main(int argc, char** argv) {
	if (argc==2) {
		int N = atoi(argv[1]);
		printf("The value of factorial(%d) is %d\n",N,factorial<int>(N));
		return 1;
	}
	printf("byte:\n");
	print<char>();	
	printf("unsigned byte:\n");
	print<unsigned char>();	
	printf("short:\n");
	print<short>();	
	printf("unsigned short:\n");
	print<unsigned short>();	
	printf("int:\n");
	print<int>();	
	printf("unsigned int:\n");
	print<unsigned int>();	
	printf("long:\n");
	print<long>();	
	printf("unsigned long:\n");
	print<unsigned long>();	
	printf("long long:\n");
	print<long long>();	
	printf("unsigned long long:\n");
	print<unsigned long long>();	
	printf("int128:\n");
	print<__int128>();	
	printf("unsigned int128:\n");
	print<unsigned __int128>();	






	return 1;
}
