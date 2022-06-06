# CIS-7_Final

Author: Keoni Packard
Date Published: 6/6/2022

General Description:
	This project is designed to provide medical students with a country that matches their spoken language and what medical field they are specialized in.

Approaches:
	A 2D array holds 7 countries for 5 different languages, and the first parameter of the array is tied to the language (1 = English : 1 = United Kingdom, Canada, United States, etc.) the second parameter is a random number using srand which allows the program to have a random aspect for probability. I planned this so that the user can enter the same numbers but the country will always match the user's chosen language while giving a different country each time. 
	I used if/else statements to assign the users language and medical fields, the statements use the user's inputs as arguments.
	The srand function is used to provide a random number for the second parameter of the array of countries, the value is a number 1-7 and is assigned to an int variable. This variable is used so I could cout the same country using the same number given by srand.
  
Program Instructions: (Program does not account for user error so only enter valid numbers)
	User will be prompted to enter a number 1-5 for a language preference.	
	Then a prompt will ask user to enter a number 1-6 for a medical field.
  The program then displays the results and probability statistics
