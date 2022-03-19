#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char , int >m {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    cout << "Hello!\n";
    while(true)
    {
        cout << "What do you like to do now?\n 1- Convert from Roman numbers to Arabic numbers. \n 2- Convert from Arabic numbers to Roman numbers.\n 3- End. \n" << "Enter a number : ";
        int n;
        cin >> n;
        if (n==1)
        {
            system("cls");
            string s;
            cout << "Roman Number : ";
            cin >> s;
            int sum;
            cout << "Arabic Number : ";
            if(s.length()==2)
            {
                if(m[s[0]]<m[s[1]])
                {
                    sum=m[s[1]]-m[s[0]];
                }
                else
                {
                    sum=m[s[1]]+m[s[0]];
                }
                cout << sum;
            }
            else
            {
                for(int i=0;i<s.length();i++)
                {
                    if (i==0 || i==s.length())
                    {
                        sum=sum+m[s[i]];
                        continue;
                    }
                    if(m[s[i]]<m[s[i+1]])
                    {
                        sum=sum-m[s[i]];
                    }
                    else
                    {
                        sum=sum+m[s[i]];
                    }
                }
                cout << sum;
            }
            cout << "\n\n\n";
        }
        else if(n==2)
        {
            system("cls");
            cout << "Arabic number less than 3999 : ";
            int a;
            cin >> a;
            cout << "Roman number : ";
            while(a>0)
            {
                if(a>=1000)
                {
                    a-=1000;
                    cout << 'M';
                }
                else if(a==999)
                {
                    a-=999;
                    cout << "IM";
                }
                else if(a>=995 && a <999)
                {
                    a-=995;
                    cout << "VM";
                }
                else if(a>=990 && a<995)
                {
                    a-=990;
                    cout << "XM";
                }
                else if(a>=950 && a<990)
                {
                    a-=950;
                    cout << "LM";
                }
                else if(a>=900 && a<950)
                {
                    a-=900;
                    cout << "CM";
                }
                else if(a>=500 && a<900)
                {
                    a-=500;
                    cout << 'D';
                }
                else if (a==499)
                {
                    a-=499;
                    cout << "ID";
                }
                else if(a>=495 && a<499)
                {
                    a-=495;
                    cout << "VD";
                }
                else if(a>=490 && a<495)
                {
                    a-=490;
                    cout << "XD";
                }
                else if(a>=450 && a<490)
                {
                    a-=450;
                    cout << "LD";
                }
                else if(a>=400 && a<450)
                {
                    a-=400;
                    cout << "CD";
                }
                else if(a>=100 && a<400)
                {
                    a-=100;
                    cout<< 'C';
                }
                else if(a==99)
                {
                    a-=99;
                    cout << "IC";
                }
                else if(a>=95 && a<99)
                {
                    a-=95;
                    cout << "VC";
                }
                else if(a>=90 && a<95)
                {
                    a-=90;
                    cout << "XC";
                }
                else if(a>=50 && a<90)
                {
                    a-=50;
                    cout << 'L';
                }
                else if(a==49)
                {
                    a-=49;
                    cout << "IL";
                }
                else if(a>=45 && a<49)
                {
                    a-=45;
                    cout << "VL";
                }
                else if(a>=40 && a<45)
                {
                    a-=40;
                    cout << "XL";
                }
                else if(a>=10 && a<40)
                {
                    a-=10;
                    cout << "X";
                }
                else if(a==9)
                {
                    a-=9;
                    cout << "IX";
                }
                else if(a>=5 && a<9)
                {
                    a-=5;
                    cout << 'V';
                }
                else if(a==4)
                {
                    a-=4;
                    cout << "IV";
                }
                else if(a>=1 && a<4)
                {
                    a-=1;
                    cout << 'I';
                }
            }
            cout << "\n\n\n";
        }
        else if (n==3)
        {
            break;
        }
        else
        {
            cout << "\n\nInvalid input . Please, try again\n\n"<< endl;
        }
    }
}

