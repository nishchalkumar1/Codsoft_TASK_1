#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    

    cout<<"************************WELCOME TO NUMBER GUESSING GAME!************************"<<endl;
    cout<<"\n You have to guess a number between 1 and 101. You will have 10 choices to guess the secret number, Good Luck!"<<endl;

    while(true){
        cout << "\nEnter the choice: \n";
        cout << "Press 1 to Start the game!\t";
        cout<<"Press 0 to exit the game!\n"<<endl;

        int Choice ;
        cout<<"Enter the number: ";
        cin>>Choice;


        srand(time(0));
        int secretNumber = 1 + (rand()% 101);
        int player_number;
        
        if(Choice==1){
            cout << "\nYou have 10 choices for finding the secret number between 1 and 101.";
            int choicesLeft=10;

            for(int i=1;i<=10;i++){
                cout << "\n\nGuess the number: ";
                cin>>player_number;
                if(player_number==secretNumber){
                    cout << "Well played! You won, " << player_number << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "Nope, " << player_number << " is not the right number\n";
                    if(player_number>secretNumber){
                        cout << "The secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "The secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
       
        else if(Choice==0){
            exit(0);
        }
        else{
            cout << "Wrong choice, Enter valid choice(0,1)."<<endl;
        }

    }
    return 0;
}
