#include<iostream>
#include<cstdlib>
#define MAX 100

using namespace std;
int main(){
    int n=101;
    int random;
    int guess,chances=0;
    char playername[MAX];
    cout<<"enter the player name"<<endl;

    cin>>playername;
    cout<<"hello "<<playername<<" welcome to the random number guessing game"<<endl;
    cout<<"lets begin the game "<<endl;
    while(1){
        cout<<"enter the number "<<endl;
        cin>>guess;
        random = rand()% n;
        chances++;
        if(guess==random){
            cout<<"good job! you have guessed the number correct"<<endl;
            cout<<"the random number " << random <<"was guessed in "<< chances <<"chances"<<endl;
            break ;
        }else if (guess<random)
        {
        cout<<"very low , try again "<< endl ;
        }else
        {
            cout << "very high , try again "<< endl;
        }

    }
 return 0;
}
