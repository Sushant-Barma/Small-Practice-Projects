#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    //Variables
    double x, y, willy, wonka, willy_wonka, p, b, h;
    char chosen_one, sel, thing;

    //Choose what to do
    printf("Choose what you want to see:\n1. Fun [1]\n2. Sum of 2 Numbers [2]\n3. Operation Selector [3]\n4. Finding the needed missing side of Right-Angled Triangle [4]\n");
    printf("Choose: ");
    scanf(" %c", &thing);

    //Chooses a case based on the data provided by the user
    switch(thing) {
        //Just Nothing :)
        case '1': {
            printf("1  2  3\n4  5  6\n7  8  9\n");
            printf("\"Optional Mathematics isn't too hard to learn\" - Me");
            getch();
            return 0;
        }

        //Addition of 2 Numbers
        case '2': {
            printf("Enter a number: ");
            scanf("%lf", &x);
            printf("Enter another number: ");
            scanf("%lf", &y);

            double z = x + y;

            printf("Sum: %.0lf\n", z);
            getch();
            return 0;
        }

        //Operation Seletor for any 2 Numbers
        case '3': {
            printf("Enter a number: ");
            scanf("%lf", &willy);
            printf("Enter another number: ");
            scanf("%lf", &wonka);

            printf("Choose an option among the following:\n1. Addition [+]\n2. Subtraction [-]\n3. Multiplication [*]\n4. Division [/]\n");
            printf("Option Holder: ");
            scanf(" %c", &chosen_one);

            switch(chosen_one) {

                //Addition
                case '+':
                willy_wonka = willy + wonka;
                break;

                //Subtraction
                case '-':
                willy_wonka = willy - wonka;
                break;

                //Multiplication
                case '*':
                willy_wonka = willy * wonka;
                break;

                //Division
                case '/':
                //Checks Whether the Entered Data for Division is 0 or not
                if(willy == 0) {
                    printf("Error: Dividing By 0");
                    getch();
                    return 1;
                }
                else if(willy < wonka) {
                    printf("Result: %0.lf\n", willy);
                    getch();
                    return 0;
                }
                else {
                    willy_wonka = willy / wonka;
                }
                break;

                //If any option that is not included is entered
                default:
                printf("Error: Invalid Operation Selected!");
                getch();
                return 1;
            }

            printf("Result: %0.lf\n", willy_wonka);
            getch();
            return 0;
        }

        //Calculating Either Perpendicular, Base or Hypotenuse (User's choice) of a Right-Angled Triangle using Pythagoras Theourm.
        case '4': {
            printf("Choose which one you want to get:\n1. Perpendicular [p]\n2. Base [b]\n3. Hypotenuse [h]\n");
            printf("Choose: ");
            scanf(" %c", &sel);

            switch(sel) {
                //Perpendicular Calculator
                case 'p': {
                    printf("Enter The Base of the Right-Angled Triangle: ");
                    scanf("%lf", &b);

                    printf("Enter The Hypotenuse of the Right-Angled Triangle: ");
                    scanf("%lf", &h);

                    p = sqrt(pow(h, 2) - pow(b, 2));

                    if(ceil(p) == p) {
                        printf("The Perpendicular of the Right-Angled Triangle based on the given Base and Hypotenuse is: %.0lf", p);
                    }
                    else {
                        printf("The Perpendicular of the Right-Angled Triangle based on the given Base and Hypotenuse is: %lf", p);
                    }
                    getch();
                    return 0;
                }
                //Base Calculator
                case 'b': {
                    printf("Enter The Perpendicular of the Right-Angled Triangle: ");
                    scanf("%lf", &p);

                    printf("Enter The Hypotenuse of the Right-Angled Triangle: ");
                    scanf("%lf", &h);

                    b = sqrt(pow(h, 2) - pow(p, 2));

                    if(ceil(b) == b) {
                        printf("The Base of the Right-Angled Triangle based on the given Perpendicular and Hypotenuse is: %.0lf", b);
                    }
                    else {
                        printf("The Base of the Right-Angled Triangle based on the given Perpendicular and Hypotenuse is: %lf", b);
                    }
                    getch();
                    return 0;
                }
                //Hypotenuse Calculator
                case 'h': {
                    printf("Enter The Perpendicular of the Right-Angled Triangle: ");
                    scanf("%lf", &p);

                    printf("Enter The Base of the Right-Angled Triangle: ");
                    scanf("%lf", &b);

                    h = sqrt(pow(p, 2) + pow(b, 2));

                    if(ceil(h) == h) {
                        printf("The Hypotenuse of the Right-Angled Triangle based on the given Perpendicular and Base is: %.0lf", h);
                    }
                    else {
                        printf("The Hypotenuse of the Right-Angled Triangle based on the given Perpendicular and Base is: %lf", h);
                    }
                    getch();
                    return 0;
                }
                //If any option that is not included is entered
                default:
                    printf("Error: Invalid Operation Selected!");
                    getch();
                    return 1;
            }
            return 0;
        }
        //If any option that is not included is entered
        default:
        printf("Invalid choice!");
        getch();
        return 1;
    }
    //Returns 0 if everything Goes Well
    return 0;
}