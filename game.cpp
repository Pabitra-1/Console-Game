#include <iostream>
#include <ctime>
using namespace std;
void boil()
{

    cout << "1. stone" << endl;
    cout << "2. paper" << endl;
    cout << "3. scissor" << endl;
    cout << "Enter end for quit the game";
};
int change(string ch)
{
    int num2 = 0;

    if (ch == "stone")
    {
        num2 = 1;
    }
    else if (ch == "paper")
    {
        num2 = 2;
    }
    else if (ch == "scissor")
    {
        num2 = 3;
    }
    else if (ch == "end")
    {

        num2 = 5;
    }

    else
    {
        // cout<<"invalid";
        num2 = 4;
    }
    // cout<<num2;
    return num2;
};
string comp(int com)
{
    string a;

    if (com == 1)
    {
        a = "computer's choice is : stone";
    }
    else if (com == 2)
    {
        a = "computer's choice is : paper";
    }
    else if (com == 3)
    {
        a = "computer's choice is : scissor";
    }

    return a;
};
void win(int count, int my)
{
    cout << "your score is : " << my << " and " << "computer's score is : " << count << endl;
};

int main()
{
    int random, num, count = 0, my = 0;
    string ch;
    srand(time(0));
    boil();
    for (int i = 0;; i++)
    {

        random = rand() % 3 + 1;

        cout << endl
             << "Enter your choice : ";
        getline(cin, ch);
        num = change(ch);
        if (num == 5)
        {
            cout << "Game Ended" << endl;
            break;
        }

        // cin>>num;
        if (num == 1)
        {
            if (random == 1)
            {
                cout << "MATCH TIE" << endl;
                cout << comp(random);
            }
            else if (random == 2)
            {
                cout << "COMPUTER IS WIN " << endl;
                cout << comp(random);
                count++;
            }
            else if (random == 3)
            {
                cout << "YOU WIN  " << endl;
                cout << comp(random) << endl;
                my++;
                win(count, my);

                // break;
            }
        }
        else if (num == 2)
        {
            if (random == 1)
            {
                cout << "YOU WIN  " << endl;
                cout << comp(random) << endl;
                my++;
                win(count, my);

                // break;
            }
            else if (random == 2)
            {
                cout << "MATCH TIE" << endl;
                cout << comp(random);
            }
            else if (random == 3)
            {
                cout << "COMPUTER IS WIN" << endl;
                cout << comp(random);
                count++;
            }
        }
        else if (num == 3)
        {
            if (random == 1)
            {
                cout << "COMPUTER IS WIN" << endl;
                cout << comp(random) << endl;
                count++;
            }
            else if (random == 2)
            {
                cout << "YOU WIN  " << endl;
                cout << comp(random) << endl;
                my++;
                win(count, my);

                // break;
            }
            else if (random == 3)
            {
                cout << "MATCH TIE" << endl;
                cout << comp(random);
            }
        }
        else
        {
            cout << "Invalid";
        }
    }
    return 0;
}
