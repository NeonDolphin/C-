#include <iostream>

using namespace std;

int main()
{
    int steps;
    int dmg;
    int hp1 = 250;
   
    std::cout << "Welcome to Horror House!\n";
    std::cout << "Step into the dark...how many steps will you dare take?\n";
    std::cin >> steps;
    
    if(steps <= 10) {
      std::cout << "You encoutered a Troll!!!\n" << "click some damage: \n";
      std::cin >> dmg;
      if(dmg >= hp1) {
          std::cout << "You killed the Troll!!!\n"; 
      }
      else {
          std::cout << "You have been killed\n" << "GAME OVER!!!\n";  
      } 
    }
     if(steps > 10) {
      std::cout << "You fell into the pit\n" << "GAME OVER!!!\n";
    }
    return 0;
}

