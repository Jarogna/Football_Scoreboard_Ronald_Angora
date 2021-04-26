// Class 'Team' and 'Scoreboard' for the Football Scoreboard program
// Teacher: Dr. Tyson McMillian
// Student: Ronald Angora
// Date: 04/26/2021

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
    Team() // Default constructor
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
    Scoreboard() // Default Constructor
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
      color = "\x1b[37;4m"; // Grey
      string color2 = "\x1b[39;4m"; // White
      string score = "\x1b[93;1m"; // Gold
      cout << color << "*************Scoreboard*************\n" << reset << endl;
      // Team Names
      cout << color2 << home.getName() << reset << "\t\t" << color2 << visitor.getName() << reset << endl;
      // Scores & Timeout Count
      cout << "\t  " << score << home.getScore() << reset << "\t\t  " << score << home.getTimeoutCount() << reset << "\t\t" << score << visitor.getTimeoutCount() << reset << "\t\t" << score << visitor.getScore() << reset << endl;
      // Coach Names
      cout << color2 << home.getCoachName() << reset << "\t" << color2 << visitor.getCoachName() << reset << endl;
      // City Names
      cout << color2 << home.getHomeCity() << reset << "\t\t" << color2 << visitor.getHomeCity() << reset << endl;
      cout << "\n";
      for(int i = 0; i < 36; i++) { cout << color << "*" << reset; } cout << endl;
      // Show Home Team getHomeStatus
      cout << "Home> \t";
      if(home.getHomeStatus() == true)
      {
        cout << "Team 1: " << home.getName() << "*";
      }
      else if(visitor.getHomeStatus() == true)
      {
        cout << "Team 2: " << visitor.getName() << "*";
      }
      else
      {
        cout << "Error: ";
      }
      cout << endl;
    }
};