//Assignment 1
//Asmaa Ismael Heikal
//ID: 20210067
//Game 7 : Subtract a square
//c++ version


#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int coins,x;
    float y;
    cout << "enter the number of coins you have to play : " ;
    cin >> coins;
    while(coins!=0)
    {
        cout << "Player 1 enter a \"squared\" non-zero number less than or equal "<<coins <<": ";
        cin >>x;
        y=sqrt(x);
        //check if there is invalid input
        if(x>coins || x==0 || y!=(int)y )
        {
            cout << "Invalid input"<<endl;
            continue;
        }
        coins -= x;
        //check if the winner is player 1
        if(coins==0)
        {
            cout << "Player 1 is the winner" << endl;
            break;
        }
        else
        {
            int i=0;
            while (true)
            {
                if(i%2!=0)
                {
                    break;
                }
                cout << "Player 2 enter a \"squared\" non-zero number less than or equal "<<coins <<": ";
                cin >>x;
                y=sqrt(x);
                if(x>coins || x==0 || y!=(int)y )
                {
                    cout << "Invalid input"<<endl;
                    continue;
                }
                coins -= x;
                i++;
                //check if the winner is player 2
                if(coins==0)
                {
                    cout << "Player 2 is the winner"<<endl;
                    break;
                }
            }
            //to break the biggest loop
            if(coins==0)
            {
                break;
            }
        }
    }
    cout << "*Congratulations*" <<endl;
}
