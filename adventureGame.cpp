#include <iostream>
     
     
     int health = 250;
	 int damage;
	 int steps;
	 
int main(){
	
	 
	
	std::cout << "Welcome to the dungeon stranger!\n" << "It`s creepy as Hell!!!...\n" << "How many footsteps are you willing to make in the dark?\n";
	std::cin >> steps;
	
	if(steps > 10){
	std::cout << "You made: " << steps << "\nYou fell off the cliff!!\n";
}
    if(steps <= 10){
	std::cout << "You stumbled upon a Troll\n" << "Take your sword out and click some Damage: \n";
	std::cin >> damage;
	std::cout  << health - damage << "\n" << "Troll HP Left\n" << std::endl;
}
	if(damage > health){
	std::cout << "Congratulations, you killed the Troll!!!\n" << "Now,get the Hell out!!!\n";
} 
    else{
	std::cout << "GAME OVER!!!\n" << "He is still standing\n" << "Start Again!\n";
}
	
	return 0;
	
	
	
	
	
	
	
	
	}
