#include <iostream>

using namespace std;

int make_computation(int x) {
  int i;
  for (i=1; i<=4; i++)
    x = x * i;
  return x;
}

int main() { 
  int k;
  printf("Give an integer for the computation  ");
  cin >> k;
  cout << "Function make_computation returns " << make_computation(k)
       << " and the value of k is " << k << endl;
  return 0;
}
