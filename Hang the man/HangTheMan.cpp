#include<iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<ctime>
using namespace std;
const int max_try=7;                                                        // maximum guesses 7 for easy mode
void easy(){                                                                // Function for Easy mode
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);                                    // Change color to Sky color
	int wrong=0;
	cout<<"                \t\t Easy";
	cout<<"           \n\t\t\t  |---------------|\n\n\n";
	string words[]={"egypt ","spain ","syria","sudan","japan",};            // Taken names in String
	string word;
	int n;
	n=rand() % 5+1;                                                        // Randomly pick the names
	word=words[n];
	string guess="-----";                                                  // If guess correct then fill it on appopriate place    
	cout<<"Guess a Country Name of 5 letters (- - - - -)"<<endl;
	cout<<"Note! You have Maximum 7 lives\n\n\n"<<endl;
	cout<<"|------------------------------------------------------------------------------|";
		cout<<"\n\n";
		
	char letter;
	do{
		cout<<"Guess a letter \n\n";

		cin>>letter;                                                    // Take input from user
	
		for(int i=0;i<5;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			
				wrong++;                                              

	             cout<<guess<<endl;
				cout << "\t\t\t\tYou have " << max_try -wrong<<" lives left\n";         // Tell user that how much you have guesses left ?
				if(letter==wrong){
					cout<<"letter was : "<<letter;
				}
		
	if (word==guess)                                                                    // If user guess the right congrats him 
		{
			cout <<"The right word is "<<word << endl;
			cout << " Oh Yeah! You found it!"<<endl;
		
			break;
		}
		
	if(wrong==max_try)                                                                // If user have no guesses left then clear the screen 
	{ system("cls");                                                                  // and dislpay him hanged the man
		
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);                                             // change the color to blue
    cout<<" \t\t\tYou have been Hanged "<<endl;
    cout<<"\n\t\t\t  |---------------|\n\n\n";
cout<<" ----------      "<<endl;Sleep(100);
cout<<" |        |       "<< "\t\t\t\t Guesses left : "<<max_try - wrong<<endl;
cout<<" |        O     "<<endl;Sleep(100);
cout<<" |       /|\\   "<<endl;Sleep(100);
cout<<" |        |     "<<endl;Sleep(100);
cout<<" |       / \\   "<<endl;Sleep(100);
cout<<" -----------";Sleep(100);

    cout<<"\n\n\n";
    	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
    
     cout<<"Your right inputs : " <<guess <<endl<<endl;                          // display user the correct inputs
				
    
cout<<"The right word was : "<<word<<endl;
cout<<"\n\t\t\t\t\t\t  GAME OVER \n";
}
			
	
	
	}while(wrong < max_try);
}
/////////////////////////////////////////////////////////////////////

const int maxi_try=8;
void medium(){                           // Function for Medium
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);       // change color to blue
	int wrong=0;
	cout<<"                \t\t Medium";
	cout<<"           \n\t\t\t  |---------------|\n\n\n";
	string words[]={"canada","ukrine","isreal","greece","russia",};       // store the countries name in array
	string word;
	int n;
	n=rand() % 5+1;                                                      // select the random name 
	word=words[n];
	string guess="------";
	cout<<"Guess a Country Name of 6 letters (- - - - - -)"<<endl;
	cout<<"Note! You have Maximum 8 lives\n\n\n"<<endl;                         // Tell user that he has 8 maximum lives
	cout<<"|------------------------------------------------------------------------------|";
		cout<<"\n\n";
		
	char letter;
	do{
		cout<<"Guess a letter \n\n";

		cin>>letter;                                                                   // Take input from user
	
		for(int i=0;i<6;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			
				wrong++;       

	             cout<<guess<<endl;
				cout << "\t\t\t\tYou have " << maxi_try -wrong<<" lives left\n";               // Tell user that he has that " ?" lives left
				if(letter==wrong){
					cout<<"letter was : "<<letter;                                      
				}
		
	if (word==guess)                                                                           // If user guessed the right word 
		{                                                                                      // show him the word and congrats him
			cout <<"The right word is "<<word << endl;
			cout << " Oh Yeah! You found it!"<<endl;
		
			break;
		}
		
	if(wrong==maxi_try)                                                       // if his guesses over then clear screen,change color and display hang the man
	{ system("cls");
		
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<" \t\t\tYou have been Hanged "<<endl;
    cout<<"\n\t\t\t  |---------------|\n\n\n";
cout<<" ----------      "<<endl;Sleep(100);
cout<<" |        |       "<< "\t\t\t\t Guesses left : "<<maxi_try - wrong<<endl;
cout<<" |        O     "<<endl;Sleep(100);
cout<<" |       /|\\   "<<endl;Sleep(100);
cout<<" |        |     "<<endl;Sleep(100);
cout<<" |       / \\   "<<endl;Sleep(100);
cout<<" -----------";Sleep(100);

    cout<<"\n\n\n";
    	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
    
     cout<<"Your right inputs : " <<guess <<endl<<endl;
				
    
cout<<"The right word was : "<<word<<endl;
cout<<"\n\t\t\t\t\t\t  GAME OVER \n";
}
			
	
	
	}while(wrong < max_try);
}

const int maxim_try=9;                                     // tell user that he has maximum 9 guesses
void hard(){
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);                    // change color to blue
	int wrong=0;
	cout<<"                \t\t Hard";
	cout<<"           \n\t\t\t  |---------------|\n\n\n";
	string words[]={"malaysia ","srilanka ","maldives","colombia","pakistan",};
	string word;
	int n;
	n=rand() % 5+1;                                             // select randomly name from above 
	word=words[n];
	string guess="--------";
	cout<<"Guess a Country Name of 8 letters (- - - - - - - -)"<<endl;           // tell user that country name has 8 letters that you have to guess
	cout<<"Note! You have Maximum 9 lives\n\n\n"<<endl;
	cout<<"|------------------------------------------------------------------------------|";
		cout<<"\n\n";
		
	char letter;
	do{
		cout<<"Guess a letter \n\n";

		cin>>letter;                                              // take input from user
	
		for(int i=0;i<7;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			
				wrong++;       

	             cout<<guess<<endl;
				cout << "\t\t\t\tYou have " << maxim_try -wrong<<" lives left\n";          // tell user that he has "" lives left
				if(letter==wrong){                                                         // if user input wrong letter
					cout<<"letter was : "<<letter;                                          // show him the the right one
				}
		
	if (word==guess)                                                                      // if user guessed the right letter then tell him and display the word to them
		{
			cout <<"The right word is "<<word << endl;
			cout << " Oh Yeah! You found it!"<<endl;
		
			break;
		}
		
	if(wrong==maxim_try)                                        // if his guesses lives over then clear the screen , change the color and hang the man on screen
	{ system("cls");
		
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<" \t\t\tYou have been Hanged "<<endl;
    cout<<"\n\t\t\t  |---------------|\n\n\n";
cout<<" ----------      "<<endl;Sleep(100);
cout<<" |        |       "<< "\t\t\t\t Guesses left : "<<maxim_try - wrong<<endl;
cout<<" |        O     "<<endl;Sleep(100);
cout<<" |       /|\\   "<<endl;Sleep(100);
cout<<" |        |     "<<endl;Sleep(100);
cout<<" |       / \\   "<<endl;Sleep(100);
cout<<" -----------";Sleep(100);

    cout<<"\n\n\n";
    	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
    
     cout<<"Your right inputs : " <<guess <<endl<<endl;
				
    
cout<<"The right word was : "<<word<<endl;
cout<<"\n\t\t\t\t\t\t  GAME OVER \n";
}
			
	
	
	}while(wrong < maxim_try);
}


void instruction(){                                               // Function for instruction  
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),10);
//	int wrong=0;
	cout<<"            \t\tInstruction for Game";Sleep(200);
	cout<<"           \n\t\t\t--------------------\n\n\n";Sleep(200);
   
   cout<<"Note!  "<<endl<<endl;Sleep(300);
    cout<<" 1: Guess a Country Name of 5 letters."<<endl;Sleep(300);
    cout<<" 2: You have Maximum 8 Guesses."<<endl;Sleep(300);
    cout<<" 3: Enter your Guess ."<<endl;Sleep(300);
    cout<<" 4: If your guessing letter is true then it will be saved in the dashes "<<endl;Sleep(300);
	cout<<"    with appopriate place ."<<endl;Sleep(300);
    cout<<" 5: If your guessing letter is wrong then it will be count on the right"<<endl;Sleep(300);
	cout<<"    side of the corner ."<<endl;Sleep(300);
    cout<<" 6: If you guessed the hidden word then you win and you saved the man ."<<endl;Sleep(300);
    cout<<" 7: If your guesses lives over but you failed to find the true word "<<endl;Sleep(300);
	cout<<"    then you lose and the man will be Hanged."<<endl;Sleep(300);
}


void credits(){                                       // Function for credits

    cout<<endl;Sleep(200);
    cout<<"                Institute of Management Sciences "<<endl;Sleep(200);
    cout<<"              ----------------------------------- "<<endl;Sleep(200);
    cout<<endl;
    cout<<"                A Project of Programming Fundamental "<<endl;Sleep(200);
	cout<<"                Bachelor of Computer Science "<<endl;Sleep(200);
    cout<<"                First Semester "<<endl;Sleep(200);
    cout<<"                Section A "<<endl;Sleep(200);
    cout<<"                By three Programmers "<<endl;Sleep(200);
    cout<<"                Fahad, Zahid & Rafiullah "<<endl;Sleep(200);
    cout<<"                ALL RIGHTS RESERVED (C) 2018 "<<endl;Sleep(200);
}



void loading(){             // Function for loading
		SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<endl<<endl;
	cout<<"        ##       ## ####### ##      ####### ####### ###     ### #######"<<endl;Sleep(200);
	cout<<"        ##       ## ##      ##      ##   ## ##   ## ## #   # ## ##     "<<endl;Sleep(200);
	cout<<"        ##       ## ##      ##      ##      ##   ## ##  # #  ## ##     "<<endl;Sleep(200);
	cout<<"        ##   #   ## ####### ##      ##      ##   ## ##   #   ## #######"<<endl;Sleep(200);
	cout<<"        ##  # #  ## ##      ##      ##      ##   ## ##       ## ##     "<<endl;Sleep(200);
	cout<<"        ## #   # ## ##      ##      ##   ## ##   ## ##       ## ##     "<<endl;Sleep(200);	
	cout<<"        ###     ### ####### ####### ####### ####### ##       ## #######"<<endl;Sleep(200);	



cout<<"___________________________________________________________";

cout<<endl;                                           // show straight graphic line of blue color 
	cout<<"Loading";
        for(int i=0; i<60; i++){
Sleep(40);

cout<<"\xDB";
 
 

}
	system("cls");Sleep(1000);                      // clear the screen and wait for 1 sec
	
	
	
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout<<"                                                                   ____ \n";Sleep(200);            //display hang the man slowly 
	cout<<" ______________________________            |    |    /\\    |\\   | | \n";Sleep(200);
	cout<<"||               /                         |____|   /  \\   | \\  | | \n";Sleep(200);
    cout<<"||           ( )/                          |    |  /----\\  |  \\ | |  ___\n";Sleep(200);
    cout<<"||            |                            |    | /      \\ |   \\| |____|\n";Sleep(200);
    cout<<"||           /|\\                             _______        ___	\n";Sleep(200);
    cout<<"||            |                                 |    |   | |	 \n";Sleep(200);
    cout<<"||           / \\                                |    |---| |---	\n";Sleep(200);
    cout<<"||                                              |    |   | |___	\n";Sleep(200);
    cout<<"||   \n";Sleep(200);
    cout<<"                                              |\\    /|   /\\   |\\   | \n";Sleep(200);
    cout<<"                                              | \\  / |  /  \\  | \\  | \n";Sleep(200);
    cout<<"                                              |  \\/  | /----\\ |  \\ | \n";Sleep(200);
    cout<<"                                              |      |/      \\|   \\| \n";Sleep(200);
    cout<<"\n\n\n";
    
    char cnt;
	do{
cout<<"Press S:Start the game\n";                                
    cout<<"Press I:Instruction"<<endl;
    cout<<"Press C:Credits"<<endl;
	cout<<"Press Q:Quit\n";
	cin>>cnt;                                         // take input from user for selecting any option
	system("cls");
	switch(cnt){
		case 's':{
			cout<<"Loading";   
             system("cls");
			continue;
		}
		case 'S':{
			
			cout<<"Loading";   
             system("cls");
			continue;
		}
		case 'i':{
		       instruction();                      // if user input i Instruction function called here
		       
			break;
		}
		case 'I':{
			instruction();                        // if user input I Instruction function called here
			
			break;
		}
		case 'c':{
		credits();                                // if user input c credits function called here
			break;
		}
		case'C':{
			credits();                           // if user input C credits function called here
			break;
		}
		case 'q':{
			exit (EXIT_FAILURE);
			break;                                   // if user input q or Q then quit the game
		}
		case'Q':{
		exit (EXIT_FAILURE);                  
			break;
		}
		default:{
			cout<<"\n Invalid Character\n";
		
		}
	}
cout<<"\n\n                     Wanna Go Back ?? Y/N\n\n";                // if user wanna go back then ask him
	cin>>cnt;
	system("cls");
	if(cnt=='y' || cnt=='Y'){                      // if yes then get him back to the game
	//	loading();                                  
		continue;
		
	}
	else if(cnt=='n' || cnt=='N'){             // if not then end the game
		exit (EXIT_FAILURE);
	}
	else{
	cout<<"\ninvalid character";}
	}while(cnt=='y' || cnt=='Y');
	
}
void smenu(){                                         // function for menu
	cout<<"\n\n\n\n\n";               
cout<<"Loading  ";                                   // display graphic line with slow loading
for(int i=0; i<60; i++){
Sleep(40);
cout<<"\xDB";
}
	system("cls");Sleep(1000);                          // clear screen for 1 second
	int x;
	char a;
	do{
		cout<<"Select Game Mode\n";
	cout<<"1 : Easy\n";
	cout<<"2 : Medium\n";
	cout<<"3 : Hard\n";
	cin>>x;
	switch(x){
		case 1:{
			system("cls");
			easy();                             // easy function called here
			break;
		}
		case 2:{
			system("cls");
			medium();                          // medium function called here
			break;
		}
		case 3:{
			system("cls");
			hard();                           // hard function called here
			break;
		}
	}
	cout<<"\n\n                     do u want to play again?? Y/N\n\n";              // ask user if wanna play again then press y if not then press n
	cin>>a;
	if(a=='y' || a=='Y'){                 // if user put y then again play the game 
		system("cls");
		continue;
	}
	else if(a=='n' || a=='N'){
		exit (EXIT_FAILURE);                      // if not then end the game
	}
	else{                                             // else tell him that he entered invalid character
	cout<<"\ninvalid character";}
	}while(a=='y' || a=='Y');
	
}


int main(){
	loading();                   // loading function called here 
	smenu();                     // smenu function called here
	
}
