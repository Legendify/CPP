/*Resistor Calculator
By Artin Moghadasi
@Artin.Projects*/

#include <iostream>
#include <string.h>

using namespace std;

void resistorValue(void);

int main()
{

    resistorValue();

    return 0;    
}

void resistorValue(void)
{
    string userChoice;
    string firstColor, secondColor, thirdColor, fourthColor; 
    string num,multiplier,tolerance;
    int round=1;

    while(1)
    {
 
    cout<<"Round: "<<round<<endl;
    if(round==1)
    cout<<"Welcome to Resistor Calculator! "<<endl;
    else
    cout<<"Welcome back to Resistor Calculator!"<<endl;

    cout<<"First Color(Left to Right): ";
    cin>>firstColor;
    cout<<"Second Color(Left to Right): ";
    cin>>secondColor;
    cout<<"Third Color(Left to Right): ";
    cin>>thirdColor;
    cout<<"Fourth Color(Left to Right): ";
    cin>>fourthColor;

    //First Digit
    if(firstColor=="Black" || firstColor=="black")
    num[0]='0';
    else if(firstColor=="Brown" || firstColor=="brown")
    num[0]='1';
    else if(firstColor=="Red" || firstColor=="red")
    num[0]='2';
    else if(firstColor=="Orange" || firstColor=="orange")
    num[0]='3';
    else if(firstColor=="Yellow" || firstColor=="yellow")
    num[0]='4';
    else if(firstColor=="Green" || firstColor=="green")
    num[0]='5';
    else if(firstColor=="Blue" || firstColor=="blue")
    num[0]='6';
    else if(firstColor=="Purple" || firstColor=="purple")
    num[0]='7';
    else if(firstColor=="Gray" || firstColor=="gray")
    num[0]='8';
    else if(firstColor=="White" || firstColor=="white")
    num[0]='9';
    else 
    {
    cout<<"Your choice(s) was/were incorrect \n Please select valid choice!  \n";
    continue;
    }

    //Second Digit
    if(secondColor=="Black" || secondColor=="black")
    num[1]='0';
    else if(secondColor=="Brown" || secondColor=="brown")
    num[1]='1';
    else if(secondColor=="Red" || secondColor=="red")
    num[1]='2';
    else if(secondColor=="Orange" || secondColor=="orange")
    num[1]='3';
    else if(secondColor=="Yellow" || secondColor=="yellow")
    num[1]='4';
    else if(secondColor=="Green" || secondColor=="green")
    num[1]='5';
    else if(secondColor=="Blue" || secondColor=="blue")
    num[1]='6';
    else if(secondColor=="Purple" || secondColor=="purple")
    num[1]='7';
    else if(secondColor=="Gray" || secondColor=="gray")
    num[1]='8';
    else if(secondColor=="White" || secondColor=="white")
    num[1]='9';
    else 
    {
    cout<<"Your choice(s) was/were incorrect \n Please select valid choice!  \n";
    continue;
    }

    //Third Digit(Multiplier)
    if(thirdColor=="Black" || thirdColor=="black")
    multiplier=" "; 
    else if(thirdColor=="Brown" || thirdColor=="brown")
    multiplier="0";
    else if(thirdColor=="Red" || thirdColor=="red")
    multiplier="00";
    else if(thirdColor=="Orange" || thirdColor=="orange")
    multiplier="k";
    else if(thirdColor=="Yellow" || thirdColor=="yellow")
    multiplier="0k";
    else if(thirdColor=="Green" || thirdColor=="green")
    multiplier="00k";
    else if(thirdColor=="Blue" || thirdColor=="blue")
    multiplier="m";
    else if(thirdColor=="Purple" || thirdColor=="purple")
    multiplier="0m";
    else if(thirdColor=="Gray" || thirdColor=="gray")
    multiplier="00m";
    else if(thirdColor=="White" || thirdColor=="white")
    multiplier="000m";
    else 
    {
    cout<<"Your choice(s) was/were incorrect \n Please select valid choice!  \n";
    continue;
    }

    //Tolerance(Fourth Color)
    if(fourthColor=="Silver" || fourthColor=="silver")
    tolerance="10%";
    else if(fourthColor=="Gold" || fourthColor=="gold")
    tolerance="5%";
    else if(fourthColor=="Brown" || fourthColor=="brown")
    tolerance="1%";
    else if(fourthColor=="Red" || fourthColor=="red")
    tolerance="2%";
    else if(fourthColor=="Green" || fourthColor=="green")
    tolerance="0.5%";
    else if(fourthColor=="Blue" || fourthColor=="blue")
    tolerance="0.25%";
    else if(fourthColor=="Purple" || fourthColor=="purple")
    tolerance="0.1%";
    else if(fourthColor=="Gray" || fourthColor=="gray")
    tolerance="0.05%";
    else 
    {
    cout<<"Your choice(s) was/were incorrect \n Please select valid choice!  \n";
    continue;
    }
    //Resistor Value
    cout<<"Resistor Value= ";
    for(int i=0; i<2; i++)
    {
        cout<<num[i];
    }
    cout<<multiplier;
    cout<<"\nTolerance= "<<tolerance <<endl;

    cout<<"Do you want to use this Resistor Calculator again?(y/n): ";
    cin>>userChoice;

    //Use Again
    if(userChoice=="y" || userChoice=="Y" || userChoice=="yes" || userChoice=="Yes")
    round++;
    else
    {
        cout<<"Thnaks! \n The program is finished. ";
        exit(0);
    }

    }
    

}
//The Program is finished





















