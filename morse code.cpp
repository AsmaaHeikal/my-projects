#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    map<char,string>m{{'A',".-"},{'B',"-..."},{'C',"-.-."},{'D',"-.."},{'E',"."},{'F',"..-."},{'G',"--."},{'H',"...."},{'I',".."},{'J',".---"},{'K',"-.-"},{'L',".-.."},{'M',"--"},{'N',"-."},
    {'O',"---"},{'P',".--."},{'Q',"--.-"},{'R',".-."},{'S',"..."},{'T',"-"},{'U',"..-"},{'V',"...-"},{'W',".--"},{'X',"-..-"},{'Y',"-.--"},{'Z',"--.."},{'1',".----"},{'2',"..---"},{'3',"...--"},
    {'4',"....-"},{'5',"....."},{'6',"-...."},{'7',"--..."},{'8',"---.."},{'9',"----."},{'0',"-----"}};

    istringstream morse("");

    cout << "Hello!\n";
    while(true)
    {
        cout << "What do you like to do now?\n 1- Cipher a message\n 2- Decipher a message\n 3- End \n" << "Enter a number : ";
        int n;
        cin >> n;
        if (n==1)
        {
            system("CLS");
            string s;
            cout << "English text : ";
            cin.ignore();
            getline(cin,s);
            cout << "Morse text : \n";
            for(int i=0;i< s.length();i++)
            {
                if(s[i]==' ')
                {
                    cout << "   ";
                }
                else
                {
                    s[i]=(char)toupper(s[i]);
                    cout << m[s[i]] << ' ';
                }
            }
            cout << "\n\n\n";
        }
        else if (n==2)
        {
            system("CLS");
            cin.ignore();
            cout << "Morse text : "<<endl;
            string mo;
            getline(cin,mo);
            morse.str(mo);
            string l;
            cout << "English text : ";
            while(morse>>l)
            {
                for(int i=65; i<91;i++)
                {
                    if(m[char(i)]==l)
                    {
                        cout << char(tolower(char(i)));
                        break;
                    }
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
