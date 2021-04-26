// A Football Scoreboard program.
// Teacher: Dr. Tyson McMillian
// Student: Ronald Angora
// Date: 04/26/2021

#include <iostream>
#include <string> 
#include <unistd.h>
#include "Input_Validation_Extended.h"
using namespace std; 

class Team
{
  private:
    string name;
    string coachName;
    string homeCity;
    bool homeStatus;
    int score;
    int timeoutCount;

  public:
    Team() //Default constructor
    {
      name = "DefaultTeamName";
      coachName = "DefaultCoachName";
      homeCity = "DefaultHomeCity";
      homeStatus = false; // Home = True, Visitor = false
      score = 0;
      timeoutCount = 3;
    }
    // Setters
    void setName(string n) { name = n; }
    void setCoachName(string sCN) { coachName = sCN; }
    void setHomecity(string sHC) { homeCity = sHC; }
    void setHomeStatus(bool hs) { homeStatus = hs; }
    void setScore(int s) { score = s; }
    void setTimeoutCount(int tc) { timeoutCount = tc; }
    // Getters
    string getName() const { return name; }
    string getCoachName() const { return coachName; }
    string getHomeCity() const { return homeCity; }
    bool getHomeStatus() const { return homeStatus; }
    int getScore() const { return score; }
    int getTimeoutCount() const { return timeoutCount; }
};


int main() 
{
  
}