#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
string name,start;
int guess,ans;
int tries=5;
int moves =0;

srand(time(NULL));
ans=rand()%15+1;
cout<<"\n\n                        ********************************\n\n                            Welcome To Guessing Game";
cout<<"\n\n                        ********************************"<<endl;
cout<<"\nMay I have your name?"<<endl;
cin>>name;
cout<<"Welcome "<<name<<". Have a Good day."<<endl;
cout<<"Shall we start the game?"<<endl;
cin>>start;
if(start=="yes")

{
	
	cout<<"I am looking for a number between 0 to 15."<<endl;
	cout<<"Guess it in "<<tries<<" tries"<<endl;
	
	for(int i=0;i<tries;i++)
	{
	moves++;

	cin>>guess;
	
		if(guess!=ans)
		{
			if(guess<ans)
			{
			cout<<"Plz Guess higher"<<endl;	
			}else
			{
			cout<<"Plz Guess lower"<<endl;
			}
		}else
		{
			cout<<"Congrats! You Guess Right in "<<moves<<" tries."<<endl;
			cout<<"The Correct Answer is "<<ans<<endl;
			system("pause");
			return 0;
		}
	}
cout<<"Game Over! You lose"<<endl;
cout<<"The Correct Answer was "<<ans<<endl;
system("pause");
return 0;
}else
{
	cout<<"Ok! Thank you so much sir for having with us."<<endl;
	system("pause");
	return 0;
}
}
