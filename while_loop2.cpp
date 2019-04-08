#include <iostream>
int main()
{
	int pin = 0;
	int tries = 0;
	
	std::cout << "Welcome to the NeonDolphinBank!\n";
	
	
	std::cout << "Enter your PIN:\n";
	std::cin >> pin;
	
	while(pin != 1234 && tries <= 3){
		
	std::cout << "Enter your PIN:\n";
	std::cin >> pin;
	tries++;
}
     
	if(pin == 1234){
		
	std::cout << "Pin accepted\n";
	std::cout << "You can now take the damn money!\n";
}
    if(pin != 1234){
		
    std::cout << "We will call the cops!\n";
}
return 0;
	
	}
