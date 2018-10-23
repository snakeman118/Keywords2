// Keywords2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//insert libraries

#include "pch.h"
#include <iostream>
#include <string>
#include "pch.h"
#include <stdlib.h>
#include <stdio.h>   
#include <time.h>       
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>


//shortcut commands
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	// max number of incorrect guesses
	const int MAX_WRONG = 8;
	string name;
// Display Title of program to user
	cout << "Hello user.\n Welcome to Code Breaker Training Simulation Program, or CBTSP.\n";
// Ask the recruit to login using their name
	cout << "Please enter your login name.\n";
	cin >> name;
// Hold the recruit's name in a var, and address them by it throughout the simulation.

// Display an overview of what Keywords II is to the recruit 
	cout << "Welcome " << name << " the CBTSP is designed to have you use your knowledge to find a word.\n";
// Display an directions to the recruit on how to use Keywords
	cout << "I will be giving you 3 different words and you must find what the words are by guessing letters.\n\n";
	string first = 0;
	string second = 0;
	string third = 0;
	for (int i = 0; i < 3; i++) {
		// setup fot the variables of words and location within the fields
		enum fields { WORD, HINT, NUM_FIELDS };
		const int NUM_WORDS = 10;
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
			// words and hints for the jumbled game
				{ "agent", "a person or business authorized to act on another persons behalf."},
				{ "mole", "a spy who works within the ranks of an enemy." },
				{ "operative", "a spy that works in the field." },
				{ "lookout", "a person whose job is to watch for any changes in the area." },
				{ "patrol", "a set path to move, in which you watch for any changes in the area" },
				{ "sleeper", "a agent that goes about their daily lives until they are needed." },
				{ "sleuth", "a detective that is used to find clues on the operation" },
				{ "espionage", "the act or practice of spying." },
				{ "scout", "a person sent out to obtain information." },
				{ "informant", "a person who supplies information." }
		};
		// setup the index for the words and hints
		int number = 0;
		srand(static_cast<unsigned int>(time(0)));
		int choice = (rand() % NUM_WORDS);
		string theWord = WORDS[choice][WORD];
		string theHint = WORDS[choice][HINT];
		// jumble the word
		string jumble = theWord;
		int length = jumble.size();
		for (int i = 0; i < length; ++i)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}


// Create an int var to count the number of simulations being run starting at 1
			int ran = 1;
// Display the simulation # is staring to the recruit. 
// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 

			if (i = 1)
			{
				first = theWord;
			}
			if (i = 2)
			{
				second = theWord;
			}
			if (i = 3)
			{
				third = theWord;
			}
	}
	// Create an int var to count the number of simulations being run starting at 1
	cout << first, second, third;
	// Display the simulation # is staring to the recruit. 
	system("pause");
// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word

//     Tell recruit how many incorrect guesses he or she has left

//     Show recruit the letters he or she has guessed

//     Show player how much of the secret word he or she has guessed

//     Get recruit's next guess

//     While recruit has entered a letter that he or she has already guessed

//          Get recruit ’s guess

//     Add the new guess to the group of used letters

//     If the guess is in the secret word

//          Tell the recruit the guess is correct

//          Update the word guessed so far with the new letter

//     Otherwise

//          Tell the recruit the guess is incorrect

//          Increment the number of incorrect guesses the recruit has made

// If the recruit has made too many incorrect guesses

//     Tell the recruit that he or she has failed the Keywords II course.

// Otherwise

//     Congratulate the recruit on guessing the secret words

// Ask the recruit if they would like to run the simulation again

// If the recruit wants to run the simulation again

//     Increment the number of simiulations ran counter

//     Move program execution back up to // Display the simulation # is staring to the recruit. 

// Otherwise 

//     Display End of Simulations to the recruit

//     Pause the Simulation with press any key to continue
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
	
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
