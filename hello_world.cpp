#include <iostream>

using namespace std;


void passby_ref(int& a, int& b) 
{
	a = 10;
	b = 11;
}

int main()
{
	cout << "Hello World" << endl;
	
	
	// Examples of all pointer and pass by reference
	int andy = 25;
	int fred = andy;
	int *ted = &andy;	//&andy: get the address of the variable andy
	int beth = *ted;   //*ted: get value pointed at by ted, where ted is a pointer
	cout << "Andy = " << andy << " Fred = " << fred << endl;
	cout << "Ted = " << ted << " *Ted = " << *ted << endl;
	cout << "Beth = " << beth << endl;
	passby_ref(andy, fred); // andy will now be 10 and fred will be 11
	cout << "New Andy = " << andy << " New Fred = " << fred << endl;
	return 0;
}
