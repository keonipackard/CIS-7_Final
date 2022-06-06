/*
Keoni Packard
CIS-7 Final Project
Case 2: UCR Medical Center Volunteers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //initializing variables & array
    int input1, input2;
    string language, field;
    string countryList[5][7] = { {"United Kingdom","Canada","United States","Australia","New Zealand", "Ireland","Scotland"},
                               {"China","Taiwan","Singapore","Malaysia","Tibet","Macau","Indonesia"},
                               {"India","Pakistan","Yemen","Uganda","Nepal","South Africa","Mauritius"},
                               {"Mexico","El Savlador","Argentina","Cuba","Venezuela","Peru","Colombia"},
                               {"France","Congo","Belgium","Madagascar","Haiti","Cameroon","Monaco"} };

    //prompting user to choose a language
    cout << "------------------------------------\n";
    cout << "What is your preferred language?\n";
    cout << "------------------------------------\n";
    cout << "1. English\n";
    cout << "2. Chinese\n";
    cout << "3. Hindi\n";
    cout << "4. Spanish\n";
    cout << "5. French\n";
    cin >> input1;

    //assigning language fluency based on user input
    if(input1 == 1) {
        language = "English";
    }
    else if(input1 == 2) {
        language = "Chinese";
    }
    else if (input1 == 3) {
        language = "Hindi";
    }
    else if (input1 == 4) {
        language = "Spanish";
    }
    else if (input1 == 5) {
        language = "French";
    }
    cout << endl << endl;
    
    //prompting user to choose a medical field
    cout << "---------------------------------\n";
    cout << "What is your medical specialization?\n";
    cout << "---------------------------------\n";
    cout << "1. General Surgery\n";
    cout << "2. Dermatology\n";
    cout << "3. Family Medicine\n";
    cout << "4. Anesthesiology\n";
    cout << "5. Internal Medicine\n";
    cout << "6. Orthopedic Surgery\n";
    cin >> input2;

    //assigning medical field based on user input
    if (input2 == 1) {
        field = "General Surgery";
    }
    else if (input2 == 2) {
        field = "Dermatology";
    }
    else if (input2 == 3) {
        field = "Family Medicine";
    }
    else if (input2 == 4) {
        field = "Anesthesiology";
    }
    else if (input2 == 5) {
        field = "Internal Medicine";
    }
    else if (input2 == 6) {
        field = "Orthopedic Surgery";
    }
    cout << endl << endl;

    //generating random number & assigning it to variable
    srand(time(NULL));
    int random = (rand() % 7);

    //clears screen
    system("CLS");

    //output results & using random variable as 2nd parameter in array to find country
    cout << "You are fluent in " << language << ", and your specialization is " << field << "." << endl;
    cout << "Based on this information, the country that was randomly generated for you is: " << countryList[input1 - 1][random] << "." << endl;
    cout << "In " << countryList[input1 - 1][random] << " you will aid on-site physicians for 60 days with\n"
            <<" the Doctors without Borders program." << endl << endl;

    //display probabilities
    cout << "Each of the 5 languages given contains 7 different countries who speak that language\n"
            << "which gives a total of 35 countries. ";
    cout << "The probability of getting " << countryList[input1 - 1][random] << " is approximately\n"
            << "a 1 in 7 chance for the " << language << " language, or a 1 in 35 chance considering all the countries in the list." << endl << endl;


    return 0;
}