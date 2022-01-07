#include "../include/MyCollection.h"
#include "../include/utils.h"
#include <vector>

int main()
{
	MyCollection<int> A(10);
	MyCollection<unsigned long long> B(10);

	A.insert_elem(5);
	A.insert_elem(3);

	cout << A.get_elem(0) << " , " << A.get_elem(1) << endl;
	cout << A;
	cout << B;

	init(A, 9);
	init(A, 8);

	cout << A;

	apply_fact<unsigned __int128>(A, B);
	cout<<"B:"<< B;

	cout<<"Now with vectors\n";
	vector<int> C(10);
	vector<unsigned long long> D(10);

	C[0]=5;
	C[1]=3;
	//C.insert(0,5);
	//C.insert(1,3);

	cout << C[0] << " , " << C[1] << endl;
	for(int i=0;i<C.size();i++) cout << C[i]<<' ';
	cout<<'\n';
	for(int i=0;i<D.size();i++) cout << D[i]<<' ';
	cout<<'\n';

	init2(C, 9);
	init2(C, 8);

	for(int i=0;i<C.size();i++) cout << C[i]<<' ';
	cout<<'\n';

	apply_fact2<unsigned long long>(C, D);
	for(int i=0;i<D.size();i++) cout << D[i]<<' ';
	cout<<'\n';

}
