 #include<iostream>
 #include<cstdlib>
 #include<ctime>
using namespace std;

int main()
{   
     cout<<"                 "<<"WELCOME TO \n \t GUESS THE NUMBER GAME!!\n"<<endl;

     cout<<"                 "<<"INSTRUCTIONS \n \t You have to guess a number between 1 and 100.\n \t You'll have limited chances based on difficulty level \n "<<endl;

     cout<<"Difficulty Levels\n";
     cout<<"1 for easy level!\n";
     cout<<"2 for medium level!\n";
     cout<<"3 for hard level!\n";
     cout<<"0 for ending the game! \n \n";

     cout<<"Enter the difficulty level number:"; // difficulty level choosen by user.
     int level;
     cin>>level;

     srand(time(0));
     int random=(rand()%(100-1))+1; //rand function used to generate a random number of standard cstdlib library.
     int guess;

     if(level==1){
       cout<<"\nYou will get 5 choices to guess the correct number between 1 and 100!";
       int leftchances=5;
       for(int i=1;i<=5;i++){
        cout<<"Enter the number"; //input from user for guessing the number.
        cin>>guess;
        if(guess==random)
        {
            cout<<"HURRAY!You guessed it Right.Take a bow!";
            break;
        }
        else if(guess>random){
            cout<<guess<<"is greater than the random number\n";
        }
        else{
            cout<<guess<<"is less than the random number\n";
        }
        leftchances--;
        if(leftchances==0){
            cout<<"\n You have no chances left.Better luck next time\n";
            cout<<random<<"is the magical number";
        }
       }
     }
        
       


       else if(level==2){
              cout<<"\nYou will get 3 choices to guess the correct number between 1 and 100!";
       int leftchances=3;
       for(int i=1;i<=3;i++){
        cout<<"Enter the number";
        cin>>guess;
        if(guess==random)
        {
            cout<<"HURRAY!You guessed it Right.Take a bow!";
            break;
        }
        else if(guess>random){
            cout<<guess<< "is greater than the random number\n";
        }
        else{
            cout<<guess<<" is less than the random number\n";
        }
        leftchances--;
        if(leftchances==0){
            cout<<"\n You have no chances left.Better luck next time\n";
            cout<<random<<"is the magical number";
        }
       }
       }


       else if(level==3){
              cout<<"\nYou will get 1 choice to guess the correct number between 1 and 100!";
       int leftchances=1;
       for(int i=1;i<=1;i++){
        cout<<"Enter the number :";
        cin>>guess;
        if(guess==random)
        {
            cout<<"HURRAY!You guessed it Right.Take a bow!";
            break;
        }
        else if(guess>random){
            cout<<guess<<" is greater than the random number\n";
        }
        else{
            cout<<guess<<" is less than the random number\n";
        }
        leftchances--;
        if(leftchances==0){
            cout<<"\nYou have no chances left.Better luck next time!\n";
            cout<<random<<" is the magical number";
        }
       }
       }
       
       else if(level==0){
        exit(0);
       }
       else{
        cout<<"Kindly select between (0,1,2,3)"<<endl;
       }
       

     

   
}
   
