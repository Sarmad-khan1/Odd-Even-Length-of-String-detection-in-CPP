#include <iostream>
using namespace std;
int main()
{
	string len;
	cout<<"Enter a string: ";
	cin>>len;
	cin.ignore();
	int size = 0;
	for ( int i=0; i<len[i] != '\0'; i++ )
	{
		size = size + 1;
	}
	
	if( size % 2 == 0)
	{
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}