#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include "calculate.hpp"

namespace bullpgia{

  string calculateBullAndPgia(string choice, string guess){

	//if any of the strings are empty, the game cannot be played
	if( choice == "" || guess == "" ) throw std::invalid_argument( "The string is empty" );
		
	int bulls = 0;
	int cows = 0;
		
	//for the string selected by chooser
	for( int i = 0; i < choice.length(); i++ ){
		char runnerInt = choice[i];
		cout<<"runnerInt "<<runnerInt<<endl;
			
		
		for( int j = 0; j < guess.length(); j++ ){
			char guessInt = guess[j];
			cout<<"guessInt "<<guessInt<<endl;	
				
			if( runnerInt == guessInt){
				if( i == j ){ //position match
					bulls++;
				}
				else{ //contains relation
					cows++;
				}
			}
		}
	}
		cout<<"bulls before: "<<bulls<<endl;
	    cout<<"cows before: "<<cows<<endl;
	string b = to_string(bulls);
	  cout<<"BULLS ARE "<<b<<endl;
        string c = to_string(cows);
	  cout<<"COWS ARE "<<c<<endl;
        string s = b + "," + c;
	  cout<<"String is "<<s<<endl;
        return s;

	}


}
