// Uncomment to run some tests. I will track here my progress on C language.


// ----------------------------------------------------------------------------------------- //PART #1
// #include <stdio.h>

// // Starting from the top working down to the bottom
// int main() {

//     printf("I like pizza\n");
//     printf("It's really good\n");

//     // We return 0 if our program runs successfully with no errors
//     // If there is error then we will return 1
//     // We need return 0 for now to check for any errors
//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #2
// #include <stdio.h>

// int main() {

//     // Basic data types
//     int x; // declaration
//     x = 123; // initialization
//     int y = 321; // declaration & intiliziation

//     int age = 21; // intiger
//     float gpa = 2.05; // floating point number, its a number that contains decimal
//     char grade = 'C'; // single character
//     char name[] = "Bro"; // array of character


//     // Format specifiers
//     // %s for strings
//     // %d for integers
//     // %c for single character
//     // %f for floats

//     printf("Your name is %s and you are %d years old, your average grade is %c, your gpa is %f", name, age, grade, gpa);

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #3
// #include <stdio.h>

// int main() {

//     float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits &f
//     double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

//     // bool e = true; // 1 byte
//     char f = 120; // 1 byte (-128 to +127) %d or %c

//     short int h = 32767; // 2 bytes (-32,768 to +32,767) %d
//     unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

//     int j = 2147483647; // 4 bytes (-2,147,473,648 to +2,147,483,647) %d
//     unsigned short int i = 65535; // 4 bytes (0 to +4,294,967,295) %u

//     long long int j = 9223372036854775808; // 8 bytes (-9 quintillion to +9 quintillion) %lld
//     unsigned long long int m = 18446744073709551615; // 8 bytes (0 to +18 quintillion) %llu

//     printf("%c\n", f);
//     printf("%0.15f\n", c);
//     printf("%lf", d);
//     printf("%lld", j);
//     // printf("%e\n", e);

//     // // We use more double than float because of precision but it takes more memory 8 bytes of memory and float uses 4 bytes.

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #4
// #include <stdio.h>

// int main() {

//     // // Format specifier % = defines and formats a type of data to be displayed

//     // // %c = character
//     // // %s = string (array of characters)
//     // // %f = floats
//     // // %d = integer
//     // // %lf = double

//     // // %.1 = decimal precision
//     // // %1 = minimum field width
//     // // %- = left align

//     float item1 = 5.75;
//     float item2 = 10.00;
//     float item3 = 100.99;

//     printf("Item 1: £%.2f\n", item1);
//     printf("Item 2: £%.2f\n", item2);
//     printf("Item 3: £%.2f", item3);

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #5
// #include <stdio.h>

// int main() {

//     // // constant = fixed value that cannot be altered by the program during its execution
//     // // constant provides little bit of security

//     const float PI = 3.14159;

//     printf("%f", PI);

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #6
// #include <stdio.h>

// int main() {

//     char name[25]; // set bytes
//     int age;
    

//     printf("\nWhats your name? ");
//     // // If we want to use white space we want to use
//     fgets(name, 25, stdin);
//     // // Without white spaces
//     // // scanf("%s", &name);
//     printf("Hello %s", name);

//     printf("\nHow old are you?");
//     // // Presseed operator with &
//     scanf("%d", &age);
//     printf("\nYou are %d years old", age);

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #7
// #include <stdio.h>

// int main() {

//     const double PI = 3.14159;
//     double radius;
//     double circumference;
//     double area;

//     printf("Enter radius of a circle: ");
//     scanf("%lf", &radius);

//     circumference = 2 * PI * radius;
//     area = PI * radius * radius;
//     printf("\ncircumference: %lfm", circumference);
//     printf("\narea: %lfm", area);


//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #8
// #include <stdio.h>
// #include <math.h>

// int main() {

//     double A;
//     double B;
//     double C;

//     printf("Enter side A: ");
//     scanf("%lf", &A);
//     printf("Enter side B: ");
//     scanf("%lf", &B);

//     C = sqrt(A*A + B*B);

//     printf("Side C: %lf", C);


//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #9
// #include <stdio.h>

// int main() {

//     int age;

//     printf("\nEnter your age: ");
//     scanf("%d", &age);

//     if (age >= 18) {
//         printf("You are now singed up");
//     } else if (age < 0) {
//         printf("You are not born yet!");
//     } else {
//         printf("You cannot sign up!");
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #10
// #include <stdio.h>

// int main() {

//     char grade;

//     printf("\nEnter a letter grade: ");
//     scanf("%c", &grade);

//     switch (grade) {
//         case 'A':
//             printf("Perfect!\n");
//             break;
//         case 'B':
//             printf("You did good!\n");
//             break;
//         case 'C':
//             printf("You did okay!\n");
//             break;
//         case 'D': 
//             printf("At least it's not an F!\n");
//             break;
//         case 'F':
//             printf("You failed!\n");
//             break;
//         default: 
//             printf("Please enter a letter grade!");
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #11
// #include <stdio.h>
// // String fuctions
// #include <ctype.h>

// int main() {

//     char unit;
//     float temp;

//     // In case user puts a lower case 'c'
//     unit = toupper(unit);

//     printf("\nIs the temperature in (F) or (C)?: ");
//     scanf("%c", &unit);

//     if (unit == 'C' || 'c') {
//         printf("\nEnter the temp in Celsius: ");
//         scanf("%f", &temp);
//         temp = (temp * 9 / 5) + 32;
//         printf("\nThe temp in Farenheit is: %.1f", temp);
//     } else if (unit == 'F' || 'f') {
//         printf("\nEnter the temp in Farenheit: ");
//         scanf("%f", &temp);
//         temp = ((temp - 32) * 5) / 9;
//         printf("\nThe temp in Celsius is: %.1f", temp);
//     } else {
//         printf("\n %c is not a valid unit of measurement", unit);
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #12
// #include <stdio.h>

// int main() {


//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #13
// #include <stdio.h>

// int main() {


//     return 0;
// }

// ----------------------------------------------------------------------------------------- //PART #14
// #include <stdio.h>

// int main() {


//     return 0;
// }