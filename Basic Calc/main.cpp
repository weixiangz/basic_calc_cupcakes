/**
 * cupcakes.cpp
 *
 * Weixiang Zhang
 * github: weixiangz
 *
 *
 * Cupcake Calculator
 */

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

/**
 * Pluralizes a word if needed.
 *
 * Requires: singular is the form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 1.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           cout << pluralize("bag", "bags", 1);
 *           // prints "bag"
 *
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 *           // prints "pounds"
 */
string strPlural(string singular, string plural, int number);

int main() {
    
    
    // Number of people for the cupcakes
    double numOfPeople = 0.0;
    //Number of batches calculated after the amount of ingredients are imported.
    double numOfBatches = 0.0;
    double numOfPeopleBatch = 12.0;
    //varible naming of the ingredients used.
    double amtOfFlour       = 0;
    double amtOfGrSugar     = 0;
    double amtOfButter      = 0;
    double amtOfSourCream   = 0;
    double amtOfEggs        = 0;
    double amtOfPowSugar    = 0;
    double amtOfVanilla     = 0;
    
    //Variable cost of each ingredients
    
    double costOfFlour      = 3.09;
    double costOfSugar      = 2.98;
    double costofButter     = 2.50;
    double costOfSourCr     = 1.29;
    double costOfEgg        = 2.68;
    double costOfPowSugar   = 1.18;
    double costOfVanilla    = 4.12;
    
    //Variables of converted ingredients used in the final cost.
    double numConvertFlours;
    double numConvertSug;
    double numConvertButter;
    double numConvertSour;
    double numConvertEggs;
    double numConvertPowsug;
    double numConvertVanilla;
    
    // Variables for decimal numbers
    
    double numTen           = 10;
    double numOnePointFive  = 1.5;
    double numHalf          = .5;
    double numTwo           = 2;
    double numTwenty        = 20;
    double numThree         = 3;
    double numTwelve        = 12;
    double numTwoFive       =2.5;
    double numFourFive      = 4.5;
    double numFiveFive      = 5.5;
    
    
    //Final cost of the ingredient.
    double finalCost        = 0.0;
    
    //test cases for set number of ingredients when set to 1
    /*
     amtOfFlour = 1;
     amtOfGrSugar = 1;
     amtOfButter = 1;
     amtOfSourCream = 1;
     amtOfEggs = 1;
     amtOfPowSugar = 1;
     amtOfVanilla = 1;
     */
    
    //Test cases for plurification of each category. ONLY USE ONE SET.
    /*
     amtOfFlour = 2;
     amtOfGrSugar = 2;
     amtOfButter = 2;
     amtOfSourCream = 2;
     amtOfEggs = 2;
     amtOfPowSugar = 2;
     amtOfVanilla = 2;
     */
    
    //Input of how many people to serve, and thus how many batches you'll need.
    cout << "How many people do you need to serve? ";
    cin >> numOfPeople;
    cout << endl;
    cout << endl;
    
    //Calculation for number of batches, in essentially total number divide by 12 and round up.
    numOfBatches = ceil(numOfPeople / numOfPeopleBatch);
    
    cout << "You need to make:  " << numOfBatches << " ";
    cout << strPlural("batch", "batches", numOfBatches);
    cout << " of cupcakes";
    cout << endl;
    cout << endl;
    
    cout << "Shopping List for \"Best Ever\" Vanilla Cupcakes" << endl;
    cout << "----------------------------------------------" << endl;
    
    // Calculation for the conversion of ingredients to the shopping list
    
    amtOfFlour     = ceil ((numOfBatches * numOnePointFive) / numTwenty);
    amtOfGrSugar   = ceil (numOfBatches / numTen);
    amtOfButter    = ceil ((numOfBatches * numOnePointFive) / numTwo );
    amtOfSourCream = ceil (numOfBatches * numHalf);
    amtOfEggs      = ceil ((numOfBatches * numThree)/ numTwelve);
    amtOfPowSugar  = ceil ((numOfBatches * numTwoFive)/numFiveFive);
    amtOfVanilla   = ceil ((numOfBatches * numFourFive)/numTwelve);
    
    
    // The use of the pluarlize function for each set of ingredients
    cout << "   " << amtOfFlour      << " " <<   strPlural("bag", "bags", amtOfFlour);
    cout << " of flour" << endl;
    cout << "   " << amtOfGrSugar    << " " <<   strPlural("bag", "bags", amtOfGrSugar);
    cout << " of granulated sugar" << endl;
    cout << "   " << amtOfButter     << " " <<   strPlural("pound", "pounds", amtOfButter);
    cout << " of butter" << endl;
    cout << "   " << amtOfSourCream  << " " <<   strPlural("container", "containers", amtOfSourCream);
    cout << " of sour cream" << endl;
    cout << "   " << amtOfEggs       << " dozen eggs" << endl;
    cout << "   " << amtOfPowSugar   << " " <<   strPlural("bag", "bags", amtOfPowSugar);
    cout << " of powdered sugar" << endl;
    cout << "   " << amtOfVanilla    << " " <<   strPlural("bottle", "bottles", amtOfVanilla);
    cout << " of vanilla" << endl;
    
    
    
    numConvertFlours = amtOfFlour;
    numConvertSug    = amtOfGrSugar;
    numConvertButter = amtOfButter;
    numConvertSour   = amtOfSourCream;
    numConvertEggs   = amtOfEggs;
    numConvertPowsug = amtOfPowSugar;
    numConvertVanilla= amtOfVanilla;
    
    
    //Calculation and output of of final cost at 2 decimal points, with setprecision(2)
    finalCost = (numConvertFlours * costOfFlour ) + (numConvertSug * costOfSugar ) +
    (numConvertButter * costofButter) + (numConvertSour * costOfSourCr) +
    (numConvertEggs * costOfEgg) + (numConvertPowsug * costOfPowSugar) +
    (numConvertVanilla * costOfVanilla);
    
    
    cout << endl;
    
    cout << "Total expected cost of ingredients: $" <<setprecision (2) << fixed <<finalCost << endl;
    cout << endl;
    
    //Conclusion output, enjoy!
    cout << "Have a great party!";
    cout << endl;
    cout << endl;
    
    
    
    return 0;
}

string strPlural(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


