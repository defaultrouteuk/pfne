#include <ntsid.h>
//
// Created by Richard Lowton on 08/04/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // int array[3]; // creates space to hold three integers
    // int readValue = 0; // stuff I read on stdin
    // int cellNumber = 0; // index of which cell I want to address
    // int i = 0;

    // PART ONE

    // for (i = 0 ; i < 3 ; i++){
    //    array[0] = 18;
    //    array[1] = 137;
    //    array[2] = 8;
    //    printf("First element is %d.\n", array[0]);
    //    printf("Second element is %d.\n", array[1]);
    //    printf("Third element is %d.\n", array[2]);
    // }

    // PART TWO

    // for (i = 0 ; i < 3 ; i++){
    //    printf("Enter a value:");
    //    scanf("%d", &readValue); // assign to readValue
    //    array[cellNumber] = readValue;
    //    printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
    //    cellNumber = cellNumber+1;
    // }

    // PART THREE

    // for (i = 0 ; i < 3 ; i++){
    //     printf("i has the value %d\n", i);
    // }

    // PART FOUR

    // for (i = 3; i>0; i = i-1) {
    //     printf("i has the value %d.\n", i);
    // }

    // PART FIVE

    // double array[3];
    // double readValue = 0.0;
    // int cellNumber = 0;
    // int i = 0;
    // for(i=0;i<3;i++){
    //     printf("Enter a decimal value:");
    //     scanf("%lf",&readValue);
    //     array[cellNumber] = readValue;
    //     printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
    //     cellNumber = cellNumber + 1;
    // }

    // PART SIX
    //  this was a codecast statement not valid in CLion //! showArray(ages, cursors=[i])
    // int ages[10];
    // int i;
    // int ageMax = 0;
    // for (i=0; i<10; i++) {
    //     scanf("%d", &ages[i]);
    //     if (ages[i] > ageMax) {
    //         ageMax = ages[i];
    //     }
    //   }
    // printf("The maximum age is %d.\n", ageMax);
    // printf("Age differences with the eldest person:\n");
    // for(i=0;i<10;i++){
    //     printf("%d:%d ", ages[i],ageMax-ages[i]);
    // }

    // PART SEVEN
    // Nesting loops - looking for all numbers divisible by 2

    // int target;
    // int i;
    // printf("Please enter a target number: ");
    // scanf("%d", &target);
    // if (target >= 0) {
    //     for ( i=0; i<target; i++) {
    //         if (i % 2) {
    //             printf("%d ", i);
    //         } else {
    //             printf("Nothing to do!\n");
    //         }
    //     }
    //     printf("You hit ZERO!\n");
    // }

    // int diceValue = 0;
    // int notSix = 0;
    // int nbThrows = 0;

    // scanf("%d", &diceValue);
    // notSix = diceValue != 6;
    // while (notSix) {
    //    printf("Roll the dice\n");
    //    scanf("%d", &diceValue);
    //    nbThrows = nbThrows + 1;
    // }
    // printf("Dice #%d before we got a six\n", nbThrows+1);

    // Logic with continue loop
    // __unused int signaturesNeeded;
    // signaturesNeeded = 1000;
    // int day = 0;
    // int newSignatures = 3;
    // int totalSignatures = 3;

    // while (totalSignatures <1000) {
    //     day++;
    //     newSignatures = 2*newSignatures;
    //     printf("Day %d: %d new signatures!", day, newSignatures);
    //     totalSignatures = totalSignatures + newSignatures;
    //     printf("Total: %d\n", totalSignatures);
    // }

    // char word[7];
    // int i = 0;

    // printf("Please enter a word with 7 letters: ");
    // scanf("%s", word); // strings read into scanf will have a \0 placed at the end of the string like a terminator
    // printf("The word read is: %s\n", word);
    // printf("The first letter read is: %c\n", word[0]);

    // while (word[i]) {
    //     if (word[i] == 'i') { // if this letter in the array...
    //         word[i] = '\0'; // change with termination string
    //     }
    //     printf("Letter: %c\n", word[i]);
    //    i++;
    // }
    // if there was a null placed in the string it is terminated early
    // printf("Now the word read is: %s\n", word);
    // exit(0); // hard quit

    // find the length of the string
    // basically iterate through the word and look for the null terminator

    // -------------------
    // char word[30]; //includes the null terminator
    // int i = 0;

    // printf("Please enter a word:");
    // scanf("%s", word); // remember we don't need an & before an array
    // while (word[i] != '\0') // this works without braces for some reason - the loop succeeds
    //     i++;

    // printf("%s has word length %d\n" ,word ,i);
    // if ( i%2  == 0 ) {
    //     printf("%s has an even number of letters\n", word);
    // } else {
    //     printf("%s has an odd number of letters\n", word);
    // }

    // Script to find numbers of words with 1,2,3, etc letters

    // int words[100]; // integer array of characters (string)
    // int nbWords = 0;
    // int lenWord = 0;
    // char word[10]; // maximum number of characters + null
    // int length[10];
    // int i = 0;
    // int t = 0;
    // int l = 0; //letters in the word
    // int j = 0;
    //
    // for (i=0; i<10; i++) {
    //     length[i]=0; // initialise the array with zeros
    //     }
    // printf("How many words are you going to type? (from 1-10): ");
    // scanf("%d", &nbWords); // integer for number of words to follow
    //
    // for (t=0;t<nbWords;t++) { // calculate the length of words for number fo words
    //    scanf("%s", word); // read the string of words
    //    l = 0;
    //
    //    while (word[l]!='\0') {
    //        l++;
    //    }
    //
    //    length[l] = length[l] + 1;
    //    printf("Word: %s has: %d letters\n", word,l); // print the words with a space after each word
    // }
    //
    // for (j=0;j<10;j++) { // loop to write out how many words of 'x' letters there are
    //    if (length[j]) {
    //     printf("\nThere are %d words with %d letters.\n", length[j], j);
    //    }
    // }
    //
    // return 0;

// Program to sort string alphabetically
//
//    char word1[50];
//    char word2[50];
//    int i = 0;
//
//    printf("Please enter a word: ");
//    scanf("%s", word1);
//   printf("And another: ");
//    scanf("%s", word2);
//    // Find first wletter in which words differ
//    while (word1[i]!='\0' && word2[i]!='\0' && word1[i] == word2[i])
//        i++;
//    if (word1[i] < word2[i])
//        printf("%s comes before %s in the alphabet.\n", word1, word2);
//    else if (word1[i]>word2[i])
//        printf("%s comes after %s in the alphabet.\n", word1, word2);
//    else printf("You entered the same word, %s, twice.\n", word1);
//

// LINEAR SEARCH ALGORITHM
//
//    int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
//    int n = 10;
//    int item, i, found;
//
//    printf("Which number are you looking for? ");
//    scanf("%d", &item);
//
//    found = 0;
//    i = 0;
//
//    while(!found && list[i]!='\0') {
//        if (item == list[i]) {
//            found = 1;
//        } else {
//            i++;
//        }
//    }
//
//    if (!found) {
//        printf("Item %d not found! \n", item);
//    } else {
//        printf("Matched %d at index %d", item, i);
//    }

// BISECTION SEARCH - LIST MUST BE SORTED!
// searching through a list by splitting it in half
// if the item is less than the value of the middle item then we can drop the top half
// if the item is higher than the value of the middle item we can drop the bottom half.
//
//    int list[] = {-10, 3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
//    int n = 10;
//    int item;
//    int ia, ib, mid, found;
//
//    printf("Which number are you looking for? ");
//    scanf("%d", &item);
//
//    ia = 0;
//    ib = n-1;
//    found = 0;
//
//    while (!found && (ia <= ib)) {
//         mid = (ia + ib)/2; /* looking for the middle of the list */
//         if (item == list[mid]) {
//             found = 1;
//         } else if ( item<list[mid]) {
//             ib = mid - 1; // toss the top half
//             printf("I dropped the top half\n");
//         } else {
//            ia = mid+1; //toss the bottom half
//             printf("I dropped the bottom half\n");
//         }
//    }
//
//    if (!found) {
//        printf("Number %d was not found in the array. \n", item);
//    } else {
//        printf("Number %d was found at index %d. \n", item, mid);
//}

// BUBBLE SORT ALGORITHM
//
// int list [] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /*unsorted list*/
// int n = 10;
// int i, j = 0;
// int swap; /* value we will swap into*/
//
// printf ("\nUnsorted list: \n");
// for (i=0; i<n; i++) {
//    printf("%d ", list[i]);
// }
//
//    while(j<11) {
//        for (i=0; i<n-1; i++) {
//            if (list[i] > list[i + 1]) {
//                swap = list[i];
//                list[i] = list[i + 1];
//                list[i + 1] = swap;
//            }
//        }
//        j++;
//    }
//
//    printf ("\nSorted list: \n");
//    for (i=0; i<n; i++) {
//        printf("%d ", list[i]);
//    }

// Student Ranking
// #include <string.h>
//
    //    int totalStudents = 0, i = 0;
    //   int individualScore[2];
    //  int tempScore[2];
    //   char individualName[2][30];
    //   char tempName[2][30];

    //   scanf("%d", &totalStudents); /* Don't forget the & if it's not a string!!! */

    // for (i=0; i<10; i++) {
    //     individualScore[i]=0; // initialise the array with zeros
    // }

    // for (i = 0; i <= totalStudents - 1; i++) {
    //     scanf("%d", &individualScore[i]);
    // }
    // for (i = 0; i <= totalStudents - 1; i++) {
    //     scanf("%s", individualName[i]);
    // }

    // i=0;

    // while (i < totalStudents) {
    //     for (i = 0; i < totalStudents - 1; i++) {
    //         if (individualScore[i] < individualScore[i + 1]) {
    //             tempScore[i] = individualScore[i];
    //              strcpy(tempName[i], individualName[i]);
    //             individualScore[i] = individualScore[i + 1];
    //             strcpy(individualName[i], individualName[i + 1]);
    //             individualScore[i + 1] = tempScore[i];
    //             strcpy(individualName[i + 1], tempName[i]);
    //         }
    //     }
    //     i++;
    // }

    // for (i = 0; i < totalStudents; i++) {
    //     printf("%s rank is %d\n", &individualName[i], i+1);
    // }


// Tug 'o' War

// int i=0, j=0, k=0, totalTeamSize=0;
// int individualTeamOneMemberWeight[4];
// int individualTeamTwoMemberWeight[4];
// int totalTeamOneWeight=0;
// int totalTeamTwoWeight=0;

// scanf("%d", &totalTeamSize);

// for(i = 0; i < totalTeamSize && k < totalTeamSize; i++) {
//     if (j == 0 || j % 2 == 0) {
//         scanf("%d", &individualTeamOneMemberWeight[i]);
//         totalTeamOneWeight = individualTeamOneMemberWeight[i] + totalTeamOneWeight;
//         j++;
//         k++;
//     }
//     scanf("%d", &individualTeamTwoMemberWeight[k]);
//     totalTeamTwoWeight = individualTeamTwoMemberWeight[k] + totalTeamTwoWeight;
//     j++;
// }
//
//     if (totalTeamOneWeight<totalTeamTwoWeight) {
//     printf("Team 2 has an advantage\n");
// } else {
//     printf("Team 1 has an advantage\n");
// }
//
// printf("Total weight for team 1: %d\n", totalTeamOneWeight);
// printf("Total weight for team 2: %d\n", totalTeamTwoWeight);

// Hotel Luggage
//    int is60, isLessThan10, luggageMoreThan20;
//    int age = 0;
//    int luggageWeight = 0;
//
//    scanf("%d %d", &age, &luggageWeight);
//
//    is60 = age == 60;
//    isLessThan10 = age < 10;
//    luggageMoreThan20 = luggageWeight > 20;
//
//    if(is60){
//        printf("0");
//    } else {
//        if(isLessThan10){
//            printf("5");
//        } else {
//            if(luggageMoreThan20){
//                printf("40");
//            } else {
//                printf("30");
//            }
//        }
//    }

// Tree Choice
//    the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets
//    the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets
//    the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets
//    the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets

//int treeHeight = 0;
//int treeLeaves = 0;
//char treeArray[30] ;
//
//
//scanf("%d %d", &treeHeight, &treeLeaves);
//
//    if ( treeLeaves >= 10 && treeLeaves >=10 ) {
//        printf("Calaelen\n");
//    } else if ( treeHeight >=12 && treeLeaves <=7 ) {
//        printf("Dorthonion\n");
//    } else if ( treeHeight <=8 && treeLeaves <=5 ) {
//        printf("Falarion\n");
//    } else if ( treeHeight <=5 && treeLeaves >=8 ) {
//        printf("Tinuviel\n");
//    }
//
//
//    ANSWER
//    int height = 0;
//    int nbLeaflets = 0;
//    scanf("%d %d", &height, &nbLeaflets);
//    int tinuviel = height <= 5 && nbLeaflets >= 8;
//    int calaelen = height >= 10 && nbLeaflets >= 10;
//    int falarion = height <= 8 && nbLeaflets <= 5;
//    int dorthonion = height >= 12 && nbLeaflets <= 7;
//    if(tinuviel) {
//        printf("Tinuviel");
//    }
//    if(calaelen){
//        printf("Calaelen");
//    }
//    if(falarion){
//        printf("Falarion");
//    }
//    if(dorthonion){
//        printf("Dorthonion");
//    }
//    if(!tinuviel && !calaelen && !falarion && !dorthonion){
//        printf("Uncertain");
//    }
//

// Recipe Array

// int grams[10];
// int pointer, i = 0;
//
// while (i<10){
//     scanf("%d", &grams[i]);
//     i++;
// }

// scanf("%d", &pointer);
//
// if (pointer>10) {
//     printf("We don't ave enough records\n");
// } else {
//     printf("%d\n", grams[pointer-1]);
// }
//

// ANSWER
//    int array[10];
//    int readValue = 0;
//    int index = 0; //indice
//
//    for(int i = 0 ; i < 10 ; i++){
//        scanf("%d", &readValue);
//        array[index] = readValue;
//        index = index + 1;
//    }
//
//    scanf("%d", &readValue);
//    printf("%d", array[readValue]);
//

// int i = 0, numCars = 0;
// double weightCar[5];
// double totalCar = 0.0;
// double averageCar = 0.0;

// scanf("%d", &numCars);

// for(i=0;i<numCars;i++){
//     scanf("%lf", &weightCar[i]);
//     totalCar = weightCar[i] + totalCar;
// }

// averageCar = totalCar/numCars;
//
//     for(i=0; i<numCars; i++) {
//         if (weightCar[i]<averageCar){
//             printf("%.1lf\n", averageCar-weightCar[i]);
//         } else {
//             printf("-%.1lf\n", weightCar[i]-averageCar);
//         }
//     }

// ANSWER
//    int nbBoxCars, carNumber;
//    double weights[50];
//    double totalWeight = 0.0;
//    double averageWeight;
//
//    scanf("%d\n",&nbBoxCars);
//    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
//    {
//        scanf("%lf",&weights[carNumber]);
//        totalWeight = totalWeight + weights[carNumber];
//    }
//
//    averageWeight = totalWeight / nbBoxCars;
//
//    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
//    {
//        printf("%.1lf\n",averageWeight - weights[carNumber]);
//    }

// int i = 0, nbIngredients = 0;
// double prLbs[10];
// double nbLbs[10];
// double totPrice = 0.0;
//
//
// scanf("%d\n",&nbIngredients);
//
// for (i = 0; i < nbIngredients; i++) {
//     scanf("%lf",&prLbs[i]);
// }
//
// for (i = 0; i < nbIngredients; i++) {
//     scanf("%lf",&nbLbs[i]);
// }
//
// for (i = 0; i < nbIngredients; i++) {
//     totPrice = prLbs[i]*nbLbs[i]+totPrice;
// }
//
// printf("%.6lf", totPrice);

// Number of cities with more than 10,000 people
//
// int nbCity = 0, nb10k = 0, i = 0;
// int popCity[10];
//
// scanf("%d\n",&nbCity);
//
// while (i<nbCity) {
//     scanf("%d",&popCity[i]);
//     if (popCity[i]>10000) {
//        nb10k=nb10k+1;
//     }
//     i++;
// }
// printf("%d", nb10k);
//

// Print a square of Nested Stars

//     char star[1] = "*";
//     int r = 0, c = 0, nbMatrix = 0;
//
//     scanf("%d", &nbMatrix);
//
//     while(r < nbMatrix) {
//         for (c=0;c<nbMatrix;c++) {
//             printf("%c", star);
//         }
//     printf("\n");
//     r++;
//     }

// int expense = 0;
// int totExpenses = 0;
// int flag = 0;
//
// while(flag==0) {
//     scanf("%d", &expense);
//     if (expense==-1) {
//         flag = 1;
//     } else {
//         totExpenses = totExpenses + expense;
//     }
// }
//
// printf("%d", totExpenses);

// Disease log program
// int nbInfected = 1;
// int days = 0;
// int totInhabitants = 0;
//
// scanf("%d", &totInhabitants);
//
// while(nbInfected<totInhabitants) {
//     if (days == 0) {
//         nbInfected = 1;
//     } else if ( days == 1) {
//         nbInfected = nbInfected + nbInfected*2;
//     } else {
//         nbInfected = nbInfected * nbInfected;
//     }
//     days++;
// }
//
//     printf("%d", days);
//

// Guess the number (higher/lower)
// int i = 0;
// int nbFind = 0;
// int nbList;
//
// scanf("%d", &nbFind);
//
// while(nbList!=nbFind){
//     scanf("%d", &nbList);
//     if (nbList<nbFind){
//         printf("it is more\n");
//     } else if (nbList>nbFind){
//         printf("it is less\n");
//     }
//     i++;
// }

// printf("Number of tries needed:\n%d", i);

// Monitoring chemical experiment
// int tempMin = 0, tempMax = 0;
// int tempRead = 0;
//
// scanf("%d", &tempMin);
// scanf("%d", &tempMax);
// scanf("%d", &tempRead);
// while(tempRead != -999){
//     printf("Nothing to report\n");
//     scanf("%d", &tempRead);
//     if (tempRead<tempMin || tempRead>tempMax){
//         if (tempRead != -999) {
//             printf("Alert!\n");
//         }
//         tempRead=-999;
//     }
// }

// ANSWER
// #include <stdio.h>
//     int main()
//     {
//         int tempMin, tempMax, temperature;
//         int tempIsValid = 1;
//         int end = 0;
//         scanf("%d%d", &tempMin, &tempMax);
//
//         while (!end && tempIsValid){
//             scanf("%d", &temperature);
//             end = (temperature == -999);
//
//             tempIsValid = (tempMin <= temperature && temperature <= tempMax);
//
//             if(!end){
//                 if (tempIsValid){
//                     printf("Nothing to report\n");
//                 } else {
//                     printf("Alert!\n");
//                 }
//             }
//         }

// Print words a number of times input by user
// int wordCount = 0, i = 0;
// char word[10];
//
// scanf("%d", &wordCount);
//
// scanf("%s", word);
//
// for (i=0;i<wordCount;i++) {
//     printf("%s\n", word);
// }

// swap author first and last names
//
// int i = 0, numBooks = 0;
// char firstName[100], lastName[100];
//
// scanf("%d", &numBooks);
//
// for(i=0;i<numBooks;i++){
//     scanf("%s %s", firstName, lastName);
//     printf("%s %s\n", lastName, firstName);
// }

// Odd or Even length of strings
//
// char name[50];
// int i = 0;
//
// scanf("%s", name);
//
// while (name[i]!='\0')
//     i++;
//
// if(i%2) {
//     printf("2");
// } else {
//     printf("1");
// }
//

// Find the longest string
//
// char word[100];
// int nbWords, wrdLen = 0, i = 0, w = 0;
//
// scanf("%d", &nbWords);
//
// for (i=0; i<nbWords; i++) {
//     scanf("%s", word);
//     while(word[w]!='\0'){
//         w++;
//     }
//     if (wrdLen < w) {
//         wrdLen = w;
//     }
// }
//
// printf("%d", wrdLen);

// Search for a letter in a word looking for a t ot T and position
// output 1 if i is first half and 2 if t is second half.
//
// char word[50];
// int i = 0, letterLength = 0;
//
// scanf("%s", word);
//
// while(word[i] != '\0'){
//     if (word[i] == 't' || word[i] == 'T'){
//         letterLength = i + 1;
//     }
//     i++;
// }
//
// if (letterLength<i+1/2 && letterLength!=0){
//     printf("1");
// } else if (letterLength>=i/2 && letterLength!=0){
//     printf("2");
// } else {
//     printf("-1");
// }

// Find repeated letters in a word

// int i = 0, j = 0, k = 0, nbLetters = 0, wordCount = 0;
// char word[50];
// char swap;
//
// scanf("%s", word);
//
// while(word[i]!='\0') {
//     i++;
// }
//
// nbLetters = i;
// printf("Number of letters: %d\n", nbLetters);

// for(j = 0; j < nbLetters - 1; j++) {
//     for (k = 0; k < nbLetters - 1; k++) {
//         if (word[k] > word[k + 1]) {
//             swap = word[k];
//             word[k] = word[k + 1];
//             word[k + 1] = swap;
//         }
//     }
// }
//
// printf("New word: %s\n", word);
//
// for(i=0;i<nbLetters - 1;i++){
//     if(word[i] == word[i+1]) {
//         if(word[i+1] != word[i+2]) {
//             wordCount = wordCount + 1;
//             // printf("%d\n", wordCount);
//         }
//     }
// }
//
// printf("%d\n", wordCount);
//
// answer
//    char word[51];
//    int length = 0;
//    int i, j;
//    char swap;
//    int repeats = 0;
//
//    scanf("%s", word);
//
//    while (word[length]!='\0')
//        length++;
//
//    //Sort the word by alphabetical order
//    for(j=0;j<length-1; j++) {
//        for(i=0;i<length-1;i++) {
//            if (word[i] > word[i+1]) {
//                swap = word[i];
//                word[i]   = word[i+1];
//                word[i+1] = swap;
//            }
//        }
//    }
//
//    i = 0;
//
//    //Check for repeating characters in the sorted word
//    while (i<length-1) {
//        if (word[i]==word[i+1]) {
//            repeats++;
//            j=i+2;
//
//            //Continues through the word until it reaches a new character
//            while (j<length && word[i]==word[j])
//                j++;
//            i = j;
//        } else {
//            i++;
//        }
//    }
//
//    printf("%d", repeats);

//    int i;
//
//    printf("+");
//    for (i = 0; i < 23; i++) {
//        printf("-");
//    }
//    printf("+\n");
//
//    for (i = 0; i < 3; i++) {
//        printf("| o | X | o | X | o | X |");
//        printf("\n");
//        printf("| X | o | X | o | X | o |");
//        printf("\n");
//    }
//
//    printf("+");
//    for (i = 0; i < 23; i++){
//        printf("-");
//    }
//    printf("+");

// robot calculator
// int i, totPower = 0, nbRobots, height, weight, power, resistance;
//
// scanf("%d\n", &nbRobots);
//
// for(i=0; i<nbRobots; i++){
//     scanf("%d %d %d %d", &height, &weight, &power, &resistance);
//     totPower = totPower + ((resistance+power)*(weight-height));
// }
//
// printf("%d", totPower);

// Pyramid from char input
//
//
//
// char input;
// int i = 0, r = 0, c = 4;
//
// scanf("%c", &input);
//
// printf("++++%c++++\n", input);
// printf("+++%c%c%c+++\n", input, input, input);
// printf("++%c%c%c%c%c++\n", input, input, input, input, input);
// printf("+%c%c%c%c%c%c%c+\n", input, input, input, input, input, input, input);
// printf("%c%c%c%c%c%c%c%c%c\n", input, input, input, input, input, input, input, input, input);

// Convert doubles to ints using the int cast (called casting)
//
//    double dOne, dTwo;
//    int iOne, iTwo;
//    printf("Please enter two decimals: ");
//    scanf("%lf %lf", &dOne, &dTwo);
//    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
//    iOne = (int) dOne;
//    iTwo = (int) dTwo;
//    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
//    printf("%d / %d = %d.\n", iOne, iTwo, iOne/iTwo);

// Integer to decimal
//        int count,num1,sum=0;
//        double dsum;
//        scanf("%d",&count);
//        for(int i=0; i<count; i++){
//            scanf("%d",&num1);
//            sum = sum + num1;
//        }
//        dsum = ((double) sum /count);
//        printf("%.2lf ",dsum);

// read integers then create a double using casting
//        int i = 0, numStudent = 0;
//        int grade = 0;
//        double gradeTotal = 0;
//
//        scanf("%d", &numStudent);
//
//        for(i=0; i<numStudent; i++) {
//            scanf("%d", &grade);
//            gradeTotal += (double) grade;
//        }
//        printf("%0.2lf", gradeTotal/i);

// Final ASsignment 1
// int i = 0;
//         int numof3digits, red, yellow, green, combine;
//         int sumcombine = 0;
//         double dsumcombine, davg;
//         scanf("%d\n", &numof3digits);
//
//         for(i=0; i<numof3digits; i++){
//             scanf("%d %d %d\n", &red, &yellow, &green);
//             combine = (red*1) + (yellow*10) + (green*100);
//             sumcombine = sumcombine + combine;
//             dsumcombine = (double)sumcombine;
//              davg = dsumcombine / (i+1);
//             printf("%d. you rolled: %d, current average: %.1lf\n", i+1, combine, davg);
//        }

// Float and int population conversion
// int numPop;
// float numGrow;
// int absGrow;
//
// scanf("%d", &numPop);
// scanf("%fd", &numGrow);
// absGrow = numPop+(numPop*(numGrow/100));
// printf("%d", absGrow);

// divide decimals with round-off
// cement bags will only ever be sold in 120lb bags.
// cement bags are 45 dollars each.
// int i = 0, bags = 0, intBags = 0;
// float cement;
// scanf("%f", &cement);
// intBags = (int) cement;
// while(bags<intBags) {
// bags=bags+120;
// i++;
// }
// printf("%d", i*45);

// this program is fucked up. it;s supposed to read a dice number of rolls
// then record the value of the dice face then make the 1st var *1, 2nd *10, 3rd *100
// then add them all together then average them

// int i, j, numDice = 0, numRoll = 3, faceDice[3];
// double averageDice;
//
// scanf("%d", &numDice);
//
// for( i=0; i<numDice; i++ ) {
//    for( j=0; j<numRoll; j++ ) {
//        scanf("%d", &faceDice[j]);
//    }
//    for( j=numRoll; j>0; --j ) {
//        // printf("%d", faceDice[i][j][0]);
//        printf("%d", j);
//        printf("%d", faceDice[j]);
//        printf("%d", faceDice[j]);
//        printf("%d", faceDice[j]);
//    }
//}


    return 0;

}