#include <iostream>
using namespace std;
int main()
{
	 int x = 36;
	 int y = 4;
	 int z = 100;
	 int sum = x / y;
	 
	 cout << sum << endl;
	 
	 if(sum == z){
		 cout << "Whassuup!\n";
		 cout << "Hello!";
	 }
	 while(sum != z && sum < 100){
		 cout << sum << endl;
		 sum++;
	 }
	 
	 return 0;
	 
	
	
	
	
	}
