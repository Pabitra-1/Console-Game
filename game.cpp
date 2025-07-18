#include <iostream>
#include <ctime>
using namespace std;
void boil()
{

    cout << "1. stone" << endl;
    cout << "2. paper" << endl;
    cout << "3. scissor" << endl;
    cout << "4. end for quit the game";
};

string change(int random)
{

    if (random == 1)
    {
        return "stone";
    }
    else if (random == 2)
    {
        return "paper";
    }
    else
        return "scissor";
};

int main()
{
    int myscore = 0, compscore = 0;
    boil();
    cout << endl
         << endl;
    for (int i = 0;; i++)
    {

        int random = rand() % 3 + 1;
        string mychoice;
        cout << "Enter your choice : ";
        cin >> mychoice;
        if (mychoice == ("stone"))
        {
            if (change(random) == ("paper"))
            {
                cout << ("You loose computer is win !") << endl;
                compscore++;
            }
            else if (change(random) == ("scissor"))
            {
                cout << ("You  win !") << endl;
                myscore++;
            }
            else
            {
                cout << ("Match Tie") << endl;
            }
        }
        if (mychoice == ("paper"))
        {
            if (change(random) == ("scissor"))
            {
                cout << ("You loose computer is win !") << endl;
                compscore++;
            }
            else if (change(random) == ("stone"))
            {
                cout << ("You  win !") << endl;
                myscore++;
            }
            else
            {
                cout << ("Match Tie") << endl;
            }
        }
        if (mychoice == ("scissor"))
        {
            if (change(random) == ("stone"))
            {
                cout << ("You loose computer is win !") << endl;
                compscore++;
            }
            else if (change(random) == ("paper"))
            {
                cout << ("You  win !") << endl;
                myscore++;
            }
            else
            {
                cout << ("Match Tie") << endl;
            }
        }
        else if (mychoice == ("end"))
        {
            cout << ("Game is over !") << endl;
            break;
        }
        else if (mychoice != ("stone") && mychoice != ("paper") && mychoice != ("scissor"))
        {
            cout << ("Invalid Input\n");
        }
        cout << "My score is : " << myscore << " Computer's score is : " << compscore << endl;
    }
    return 0;
}
