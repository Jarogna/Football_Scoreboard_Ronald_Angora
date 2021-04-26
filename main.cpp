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

class Scoreboard
{
  private:
    int half = 0;
    Team home;
    Team visitor;
  public:
    Scoreboard()
    {
      half = 0;
    }
    // Setters
    void setHalf(int h) { half = h; }
    void setHome(Team hSet) { home = hSet; }
    void setVisitor(Team vSet) { visitor = vSet; }
    // Getters
    int getHalf() const { return half; }
    Team getHome() const { return home; }
    Team getVisitor() const { return visitor; }

    void showScoreboard()
    {
      string color = "";
      string reset = "\x1b[0m";
      color = "\x1b[40;4m"; // White Bold
      string score = "\x1b[31;1m"; // Red
      cout << color << "*************Scoreboard*************" << reset << endl;
      cout << home.getName() << "\t\t" << visitor.getName() << endl;
      cout << "\t" << score << home.getScore() << reset << "\t\t\t\t\t\t" << visitor.getScore() << endl;
      cout << color << home.getCoachName() << reset << "\t" << visitor.getCoachName() << endl;
      cout << color << home.getHomeCity() << reset << "\t\t" << visitor.getHomeCity() << endl;
      cout << "\t" << color << home.getTimeoutCount() << reset << "\t\t\t\t\t\t" << visitor.getTimeoutCount() << endl;
      for(int i = 0; i < 47; i++) { cout << "*"; } cout << endl;
    }

};


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