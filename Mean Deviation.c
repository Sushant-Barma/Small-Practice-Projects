/*

A Simple Program
To
Find The
Mean Deviation
and The
Coefficient of Mean Deviation
of The Data
Given by User

*/

#include <stdio.h>
#include <math.h> //Using "math.h" header file to use all Mathematical Functions/Methods. Here, using "fabs()"
#include <conio.h>

int main()
{
    //Initializing the Variables that will be used by loops
    int n, i, j, k, l, m;


    /*Initializing the Variables Necessary for Storing:
      -Mean
      -Mean Deviation
      -Coefficient of Mean Deviation
      -Summation of the Modular of the Difference Between Data and Mean*/
    double mean = 0, sum = 0, MD, CMD;


    //Asking from user how many data they want to add
    printf("How many data do you wanna Enter?\nWrite: ");
    scanf("%d", &n);


    //Initializing The Array Responsible for storing all Data
    int data[n];


    //Initializing The Array Responsible for storing all the Difference between Data and Mean
    double sub[n];


    //Asking User to Enter all the required Data
    printf("Enter all the Data:\n");

    /*A Loop to Take input from user and store in the corresponding Array Storage of Data Array
      Till the value of "i" is less than the value of "n"*/
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]); //Reading Data
    }


    /*A Loop to store the Summation of All value of Data Array in "mean" Variable
      To Later Calculate The Actual Mean of the Data*/
    for(j = 0; j < n; j++)
    {
        mean = mean + data[j]; /*Finding The Summation all Value of Data Array, then, storing the result in "mean" Variable
                                 For Later Actual Mean Calculation*/
    }


    //Actual Mean Calculation
    mean = mean / n;


    //A Loop to store all the Difference Between Each Data Array Value with Mean
    for (k = 0; k < n; k++)
    {
        sub[k] = data[k] - mean; //Storing All the Difference Between Each Data Array Value with Mean
    }


    /*A Loop to Convert all the Negative Values into Positive Values
      and Leave All The Positive Values as How it was
      By Taking the Absolute value of those Numbers
      By Using Double Absolute Method "fabs()" which is available through "math.h" header file*/
    for (l = 0; l < n; l++)
    {
        sub[l] = fabs(sub[l]);/*Converting All Negative Values into Positive and Leaving Positive Values as How it was
                                By Finding the Absolute Value of the Numbers
                                By Using Absolute Method from Math Object*/
    }


    //A Loop to Find the Summation of the Modular of the Difference Between Data and Mean
    for (m = 0; m < n; m++)
    {
        sum = sum + sub[m]; //Adding all the Values of "sub" Array
    }



    MD = sum / n; //Calculating the Mean Deviation of the Data Given By User
    CMD = MD / mean; //Calculating the Coefficient of Mean Deviation of the Data Given By User


    //Displaying the calculated value of Mean Deviation of the Data Given By User
    printf("Mean Deviation of the Given Data: %.2lf\n", MD);


    //Displaying the calculated value of Coefficient of Mean Deviation of the Data Given By User
    printf("Coefficient of Mean Deviation of the Given Data: %.3lf", CMD);


    //Waits Till The User Presses any Key
    getch();


    //Returns Code 0 to the System
    return 0;
}