#include<iostream>
#include <string>
#include<windows.h>
#include<conio.h>
using namespace std;
const int max_try=7;
void easy(){
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),2);
    int wrong=0;
	cout<<"                 EAsy  \n\n\n";
	string words[]={"japan","china","italy","india","nepal","libya",};
	string word;
	int n;
	n=rand() % 5+1;
	word=words[n];
	string guess="_____";
	char letter;
	do{
		cout<<"\n guess a letter \n\n";
		cin>>letter;
		for(int i=0;i<5;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			wrong++;
			cout<<guess;
	}while(wrong < max_try);
}

void medium(){
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),3);
	int wrong=0;
	cout<<"                 Medium  \n\n\n";
	string words[]={"cananda","austria","america","maldeep","somalia",};
	string word;
	int n;
	n=rand() % 4+1;
	word=words[n];
	string guess="_______";
	char letter;
	do{
		cout<<"\n guess a letter \n\n";
		cin>>letter;
		for(int i=0;i<7;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			wrong++;
			cout<<guess;
	}while(wrong < max_try);
}

void hard(){
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),4);
	int wrong=0;
	cout<<"                 Hard  \n\n\n";
	string words[]={"Pakistan","srilanka","bulgaria","combodia","hongkong"};
	string word;
	int n;
	n=rand() % 4+1;
	word=words[n];
	string guess="________";
	char letter;
	do{
		cout<<"\n guess a letter \n\n";
		cin>>letter;
		for(int i=0;i<8;i++){
			if(word[i]==letter){
				guess[i]=letter;
			}}
			wrong++;
			cout<<guess;
	}while(wrong < max_try);
}


void loading(){
	
	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),3);
    cout<<"                                                                   ____ \n";Sleep(200);
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
    cout<<"Press S:start the game\n      Q:quit\n\n";
    cin>>cnt;
    if(cnt=='s' || cnt=='S'){
    	SetConsoleTextAttribute(
    GetStdHandle(STD_OUTPUT_HANDLE),11);
    //char ch[5]={'.','.','.','.','.'};
    for(int i=0; i<50; i++){
Sleep(200);
cout<<"\xDB";
}
    cout<<"               Loading";
  /*  for(int i=0;i<5;i++){
    	cout<<ch[i];
    	Sleep(1000);
	}  */
	system("cls");
	}
    else if(cnt=='q' || cnt=='Q'){
    	exit (EXIT_FAILURE);
	}
	else{
		cout<<"\ninvalid character\n";
	}
}

void smenu(){
	int x;
	char a;
	do{
		cout<<"select Game Mode\n";
	cout<<"1 : easy\n";
	cout<<"2 : Medium\n";
	cout<<"3 : hard\n";
	cin>>x;
	switch(x){
		case 1:{
			easy();
			break;
		}
		case 2:{
			medium();
			break;
		}
		case 3:{
			hard();
			break;
		}
	}
	cout<<"\n\n                     do u want to play again?? Y/N\n\n";
	cin>>a;
	if(a=='y' || a=='Y'){
		continue;
	}
	else if(a=='n' || a=='N'){
		exit (EXIT_FAILURE);
	}
	else{
	cout<<"\ninvalid character";}
	}while(a=='y' || a=='Y');
	
}


int main(){
	
	loading();
	smenu();
	
}
