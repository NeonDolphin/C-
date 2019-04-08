#include <iostream>
int main()
{
	
	char str [] = "fuck off";
	int a, b, sum;
	int c = 100;
 
	std::cin >> a;
	std::cin >> b;
	sum = a * b;
	sum++;
	if(sum < c){
		std::cout << str << std::endl << sum << std::endl;
	}
	while(sum >= c){
		std::cout <<  str << std::endl;
	}
	
	 
	
	return 0;
	
	
	
	
	}
	
	
 
