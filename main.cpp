// A Football Scoreboard program.
// Teacher: Dr. Tyson McMillian
// Student: Ronald Angora
// Date: 04/26/2021

#include <iostream>
#include <string> 
#include <unistd.h>
#include "Input_Validation_Extended.h"
#include "Football_Scoreboard_Classes.h"
using namespace std; 

int main() 
{
  Scoreboard s;
  string userChoice = "";

  do
  {
    s.showScoreboard();
    cin >> userChoice;

  } while (userChoice != "E" && userChoice != "e");

  return 0;
}