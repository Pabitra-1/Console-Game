  if(mychoice==("stone")){
                if(change(random)==("paper")){
                     cout<<("You loose computer is win !")<<endl;
                     compscore++;
                }
                else if(change(random)==("scissor")){
                         cout<<("You  win !")<<endl;
                         myscore++;
                }
                else {
                     cout<<("Match Tie")<<endl;
                }
            }
             if(mychoice==("paper")){
                if(change(random)==("scissor")){
                     cout<<("You loose computer is win !")<<endl;
                     compscore++;
                }
                else if(change(random)==("stone")){
                         cout<<("You  win !")<<endl;
                         myscore++;
                }
                else {
                         cout<<("Match Tie")<<endl;
                }
            }
            if(mychoice==("scissor")){
                if(change(random)==("stone")){
                     cout<<("You loose computer is win !")<<endl;
                     compscore++;
                }
                else if(change(random)==("paper")){
                         cout<<("You  win !")<<endl;
                         myscore++;
                }
                else {
                     cout<<("Match Tie")<<endl;
                }
            }
            else if(mychoice==("end")){
                cout<<("Game is over !")<<endl;
                break;
            }
            else if(mychoice==("stone") && mychoice==("paper") && mychoice==("scissor")){
                cout<<("Invalid Input");
            }
            cout<<"My score is : "<<myscore<<" Computer's score is : "<<compscore<<endl;