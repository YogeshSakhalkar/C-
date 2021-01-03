#include<iostream>
using namespace std;

class player
{
	char name[20];
	int match_played;

public:
	player()
	{
		cout << "\nplayer default constructor";
		strcpy(this->name, "not given");
		this->match_played = 0;
	}

	player(char* n,int m)
	{
		cout << "\nplayer para constructor called";
		strcpy(this->name, n);
		this->match_played = m;
	}

	void setName(char* n)
	{
		strcpy(this->name, n);
	}

	void setMatch(int m)
	{
		this->match_played = m;
	}

	char* getName()
	{
		return this->name;
	}
	int getMatch()
	{
		return this->match_played;
	}

	void display()
	{
		cout << "\nName is:" << this->name;
		cout << "\nNo of matches played:" << this->match_played;
	}
};

class footballer :public player
{
	char club[20];
	int no_of_goals;

public:

	void setClub(char* c)
	{
		strcpy(this->club, c);
	}

	void setNo_of_goals(int g)
	{
		this->no_of_goals = g;
	}

	char* getClub()
	{
		return this->club;
	}
	int getNo_of_goals()
	{
		return this->no_of_goals;
	}
	
	footballer() : player()
	{
		cout << "\nfootball default constructor called";
		strcpy(this->club, "abc");
		this->no_of_goals = 0;
	}

	footballer(char* n, int m, char*c, int g) : player(n,m)
	{
		cout<<"\nfootball parameterized constructor called ";
		strcpy(this->club, c);
		this->no_of_goals = g;
	}
	void display()
	{
		player::display();
		cout << "\nClub Name is :" << this->club;
		cout << "\nNo. of goals scored are : " << this->no_of_goals;
	}
};

class cricketer :public player
{
	char team[20];
	int run;
	int wickets;

public:

	void setTeam(char* t)
	{
		strcpy(this->team, t);
	}

	void setRun(int r)
	{
		this->run = r;
	}
	void setWickets(int w)
	{
		this->wickets = w;
	}

	char* getTeam()
	{
		return this->team;
	}
	int getRun()
	{
		return this->run;
	}
	int getWickets()
	{
		return this->wickets;
	}

		cricketer() :player()
	{
		cout << "\ncricket default constructor called";
		strcpy(this->team, "not given");
		this->run = 0;
		this->wickets = 0;
	}

	cricketer(char* n, int m,char* tm,int r,int w) :player(n, m)
	{
		cout << "\ncricket parametrized constructor called";
		strcpy(this->team, tm);
		this->run = r;
		this->wickets= w;
	}
	
	void display()
	{
		player::display();
		cout << "\nTeam Name is:" << this->team;
		cout << "\nRuns are: " << this->run;
		cout << "\nWickets are: " << this->wickets;
	}
};

class Tennis :public player
{
	char type[20];

public:

	void setType(char* t)
	{
		strcpy(this->type, t);
	}
	char* getType()
	{
		return this->type;
	}
	
	Tennis() :player()
	{
		cout << "\ntennis default constructor called";
		strcpy(this->type, "not given");
	}

	Tennis(char* n, int m, char* t) :player(n, m)
	{
		cout << "\ntennis parametrized constructor called";
		strcpy(this->type, t);
	}

	void display()
	{
		player::display();
		cout << "\nGame Type is:" << this->type;
	}
};

void main()
	{

	Tennis t1;
	t1.display();
	cout << "\n\n";

	footballer f1;
	f1.display();
	cout << "\n\n";
		
	cricketer c1;
	c1.display();
	cout << "\n\n";

	footballer f2("messi",89, "fc goa", 178);
	f2.display();
	cout << "\n\n";

	cricketer c2("virat kholi", 18, "India", 7890, 3);
	c2.display();
	cout << "\n\n";



	Tennis t2("mahesh", 22, "single");
	t2.display();
	cout << "\n\n";
	}