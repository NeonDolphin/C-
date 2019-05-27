#include <iostream>

int main(){


  int steps;
  int hp = 250;
  int dmg;
  char str[] = "You Died!";

   std::cout << "you walked into the forrest,how many Steps are you willing to make?\n";
   std::cout << "Enter Steps: \n";
   std::cin >> steps;

  if(steps >= 10){
   std::cout << str;
}

  else if(steps < 10){
   std::cout << "you encounterd an dwarf that wants to fight you!\n";
   std::cout << "Click some damage: \n";
   std::cin >> dmg;
  if(dmg < hp){
   std::cout << str;}
  else{
   std::cout << "you killed a dwarf\n";
   std::cout << "you can move on now!\n";
   std::cout << "enter steps: \n";
   std::cin >> steps;}
  if(steps > 10){
   std::cout << str;}
  else if(steps <= 10){
   std::cout << "you encauntered a Troll\n";
   std::cout << "Click some damage: \n";
   std::cin >> dmg;
  if(dmg > hp)
   std::cout << "you killed a Troll\n";
  else
   std::cout << str;}
}
  return 0;
}

