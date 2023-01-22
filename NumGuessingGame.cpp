/*By Artin Moghadasi
@Artin.Projects
*/

#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

int main()
{
    
    cout<<"WELCOME TO NUMBER GUESSING GAME!"<<endl;
    
    while (true)
    {
        
        int guess,num,tries;
        string choice;
        srand(time(0));
        num = (rand()%100)+1;
        
        do
        {
            cout<< "Guess:";
            cin>>guess;
            if(guess>num)
            {
                cout<<"NUMBER IS LESS"<<endl;
                continue;
            }
            else if(guess<num)
            {
                cout<<"NUMBER IS BIGGER" << endl;
                continue;
            }
            else
            {
                cout<<"CORRECT!"<<endl;
                break;
            }
        }
        while(num != guess);
        cout<<"WANT TO PLAY AGAIN?(yes/no)"<<endl;
        cin>>choice;
        if(choice=="YES" || "yes")
            continue;
        else
        {
            cout<<"BYE!";
            break;
        }
    }
}
