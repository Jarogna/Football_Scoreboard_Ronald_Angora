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
  string newName = "";  
  string newCoachName = "";
  string newCityName = "";
  Team tOne;
  Team tTwo; 
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  int newTimeoutCount = 0;
  int min = 15; // Amount of Minutes
  int sec;

  //Set the home team 
  tOne.setHomeStatus(true); //tOne is the Home Team now   

  //add some initial data to s
  s.setHome(tOne); 
  s.setVisitor(tTwo); 

  //Loop this to make it an interactive menu

  do 
  {
    system("clear"); //clear the screen of previous content 
    s.showScoreboard(); //show the current scoreboard data
    //menu choices 
    cout << "1 = Update Home Team Info" << endl; 
    cout << "2 = Update Away Team Info" << endl; 
    cout << "3 = Set Home Team Status" << endl;
    cout << "4 = Game Time!!! LESSSSS GO!!!" << endl; 
    cout << "5 = Exit" << endl;
    cout << ">"; 
    cin >> userChoice; 

    if(userChoice == "1")
    {
      do
      {
        cout << "A = Update Home Team Name" << endl; 
        cout << "B = Update Home Team Coach" << endl; 
        cout << "C = Update Home Team City" << endl; 
        cout << "D = Update Home Status" << endl; 
        cout << "E = Exit" << endl;
        cout << ">"; 
        cin >> userChoice;

        if(userChoice == "A" || userChoice == "a")
        {
          cout << "****Update Home Team Name****" << endl; 
          cout << "\nPlease enter a new name for the home team: ";
          cin >> newName; 
          //change that home team's default name
          tOne.setName(newName); //set tOne's data to the new desired name
        }
          
        else if(userChoice == "B" || userChoice == "b")
        {
          cout << "****Update Home Team Coach****" << endl; 
          cout << "\nPlease enter a new name for the Coach: ";
          cin >> newCoachName; 
          //change that home team's default name
          tOne.setCoachName(newCoachName); //set tOne's data to the new desired name
        }
          
        else if(userChoice == "C" || userChoice == "c")
        {
          cout << "****Update Home Team City****" << endl; 
          cout << "\nPlease enter a new name for the City: ";
          cin >> newCityName; 
          //change that home team's default name
          tOne.setHomeCity(newCityName); //set tOne's data to the new desired name
        }
          
        else if(userChoice == "D" || userChoice == "d")
        {
          cout << "\nUpdate Home Status Module****" << endl; 
          cout << "\nWho is the home team: 1 = T1, 2=T2: "; 
          homeTeamQuestion = validateInt(homeTeamQuestion); 
          // cin >> homeTeamQuestion; 
          if(homeTeamQuestion == 1)
          {
            tOne.setHomeStatus(true); 
            tTwo.setHomeStatus(false); 
          }
            else if(homeTeamQuestion == 2)
          {
            tOne.setHomeStatus(false); 
            tTwo.setHomeStatus(true);
          }
          else
          {
            cout << "\nInvalid Input!" << endl;
            sleep(2); 
          }
        }
        s.setHome(tOne);
      }while(userChoice != "E" && userChoice != "e");
    }

    if(userChoice == "2")
    {
      do
      {
        cout << "A = Update Away Team Name" << endl; 
        cout << "B = Update Away Team Coach" << endl; 
        cout << "C = Update Away Team City" << endl; 
        cout << "D = Update Away Status" << endl; 
        cout << "E = Exit" << endl;
        cout << ">"; 
        cin >> userChoice;

        if(userChoice == "A" || userChoice == "a")
        {
          cout << "****Update Away Team Name****" << endl; 
          cout << "\nPlease enter a new name for the Away team: ";
          cin >> newName; 
          //change that home team's default name
          tTwo.setName(newName); //set tOne's data to the new desired name
        }
          
        else if(userChoice == "B" || userChoice == "b")
        {
          cout << "****Update Away Team Coach****" << endl; 
          cout << "\nPlease enter a new name for the Coach: ";
          cin >> newCoachName; //change that home team's default name
          tTwo.setCoachName(newCoachName); //set tOne's data to the new desired name
        }
          
        else if(userChoice == "C" || userChoice == "c")
        {
          cout << "****Update Away Team City****" << endl; 
          cout << "\nPlease enter a new name for the City: ";
          cin >> newCityName; 
          //change that home team's default name
          tTwo.setHomeCity(newCityName); //set tOne's data to the new desired name
        }
           
      }while(userChoice != "E" && userChoice != "e");
    }

    else if(userChoice == "3")
    {
      cout << "\nUpdate Home Status Module****" << endl; 
      cout << "\nWho is the home team: 1 = T1, 2=T2: "; 
      homeTeamQuestion = validateInt(homeTeamQuestion); 
      // cin >> homeTeamQuestion; 
        if(homeTeamQuestion == 1)
        {
          tOne.setHomeStatus(true); 
          tTwo.setHomeStatus(false); 
        }
        else if(homeTeamQuestion == 2)
        {
          tOne.setHomeStatus(false); 
          tTwo.setHomeStatus(true);
        }
        else
        {
          cout << "\nInvalid Input!" << endl;
          sleep(2); 
        }
    }  
    
    else if(userChoice == "4")
    {
      do
      {
        system("clear"); //clear the screen of previous content 
        s.showScoreboard();
        cout << "*** GAME TIME ***" << endl;
        cout << "A = Home Team Scored" << endl; 
        cout << "B = Home Team Timeout" << endl; 
        cout << "C = Away Team Scored" << endl; 
        cout << "D = Away Team Timeout" << endl; 
        cout << "E = Exit" << endl;
        cin >> userChoice;
        if(userChoice == "1")
        {
          Clock();
        }
        if(userChoice == "A" || userChoice == "a")
        {
          cout << "\nPlease enter a new score for the home team: "; 
          cin >> newScore; 
          tOne.setScore(newScore);  //set the new score for tOne 
        }

        else if(userChoice == "B" || userChoice == "b")
        {
          cout << "\nPlease enter remaining timeouts for the home team: ";
          cin >> newTimeoutCount;
          tOne.setTimeoutCount(newTimeoutCount);
        }

        else if(userChoice == "C" || userChoice == "c")
        {
          cout << "\nPlease enter a new score for the away team: "; 
          cin >> newScore; 
          tTwo.setScore(newScore);  //set the new score for tTwo
        }
        else if(userChoice == "D" || userChoice == "d")
        {
          cout << "\nPlease enter remaining timeouts for the away team: ";
          cin >> newTimeoutCount;
          tTwo.setTimeoutCount(newTimeoutCount);

        }

        s.setHome(tOne); //refresh the data in s to the new updates
        s.setVisitor(tTwo); //refresh the data

      }while(userChoice != "E" && userChoice != "e");
    }
    
    s.setHome(tOne); //refresh the data in s to the new updates
    s.setVisitor(tTwo); //refresh the data
  
  }while(userChoice != "5");
  
  return 0; 
}