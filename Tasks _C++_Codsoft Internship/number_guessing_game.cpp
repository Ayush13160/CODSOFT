#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int guessnum, usernum;

    cout<<"\nWelcome to the Number Guessing Game- "<<endl;

    srand(time(0)); //Seeding the random number

    guessnum = rand() % 100 + 1; //generating random number between 1 and 100

    while(usernum!=guessnum){

        cout<<"\nEnter a number between 1 and 100: "<<endl;
        cin>>usernum;

        if(usernum>guessnum){
            cout<<"Too High. Try Again! "<<endl;
        }
        else if(usernum<guessnum){
            cout<<"Too Low. Try Again! "<<endl;
        }
        else{
            cout<<" Congratulations! You guessed it correct!"<<endl;
        }
    }

    return 0;
}