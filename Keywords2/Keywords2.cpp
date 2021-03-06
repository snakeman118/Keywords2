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
using namespace std;
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

	
	vector<string> words;
		// words and hints for the jumbled game
		words.push_back("agent");
		words.push_back("mole");
		words.push_back("operative");
		words.push_back("lookout");
		words.push_back("patrol");
		words.push_back("sleeper");
		words.push_back("sleuth");
		words.push_back("espionage");
		words.push_back("scout");
		words.push_back("informant");
		// setup the index for the words and hints
		srand(static_cast<unsigned int>(time(0)));
		random_shuffle(words.begin(), words.end());


		//the word player will guess
		const string THE_WORD = words[0];
		//incorrect guesses
		int wrong = 0;
		//word as they have guessed
		string soFar(THE_WORD.size(), '-');
		// letters that they have guessed
		string used = "";
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n You have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left. \n";
		cout << "You have used the following letters already:\n" << used << endl;
		cout << "\n So far, the word is: \n" << soFar << endl;
	}
	char guess;
	cout << "\nEnter your guess: ";
	cin >> guess;
	//turn caps
	guess = toupper(guess);
	
	
	while (used.find(guess) != string::npos)
	{
		cout << "\n You have already guessed " << guess << endl;
		cout << "Enter your guess: ";
		cin >> guess;
		guess = toupper(guess);
	}

	used += guess;

	if (THE_WORD.find(guess) != string::npos)
	{
		cout << "\n You are correct " << guess << " is in the word.\n";
		// update and show
		for (int i = 0; i < THE_WORD.length(); ++i)
		{
			if (THE_WORD[i] == guess)
			{
				soFar[i] = guess;
			}
		}
	}
	else
	{
		cout << "That is incorrect, " << guess << " is not in the word.\n";
		++wrong;
	}
// Create an int var to count the number of simulations being run starting at 1
	if (wrong == MAX_WRONG)
	{
		cout << "\nYou have failed";
	}
	else
	{
		cout << "\nYou have it correct";
	}
// Display the simulation # is staring to the recruit.
		
// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 

	}

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
	



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
