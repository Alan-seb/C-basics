# 🖥️ Learning Variables in C

Think of a **variable** like a box with a label on it.  
- The **label** is the variable’s name.  
- The **box** is the memory in your computer.  
- The **stuff inside** is the value you put in it.  

In C, before you use a variable, you must tell the computer what **type** of box it is (what kind of stuff it will hold).

---

## 🔹 How to Make a Variable

```c
type name;
Or make it and put something inside:


type name = value;
Example:


int age = 10;
🔹 Basic Variable Types
1. int → Whole numbers (no decimals)

int age = 12;
printf("Age: %d\n", age);
➡️ %d tells printf to show an integer.

2. float → Numbers with decimals (less precise)

float price = 5.99;
printf("Price: %.2f\n", price);
➡️ %.2f shows 2 numbers after the decimal point.

3. double → Bigger decimal numbers (more precise)

double pi = 3.14159;
printf("Pi: %.5lf\n", pi);
➡️ %lf shows a double.

4. char → A single character

char grade = 'A';
printf("Grade: %c\n", grade);
➡️ %c shows a character.

5. Strings (char[]) → A word or sentence


char name[20] = "Alox";
printf("Name: %s\n", name);
➡️ %s shows a string.

🔹 Other Useful Types
Unsigned Numbers → Only positive numbers

unsigned int count = 50;
printf("Count: %u\n", count);
Boolean (true or false)


#include <stdbool.h>

bool isHappy = true;
printf("Happy: %d\n", isHappy);  // prints 1 for true
🔹 Arrays → Many boxes of the same type
int scores[3] = {90, 80, 70};
printf("First score: %d\n", scores[0]);
👉 Arrays start at 0 (so scores[0] is the first number).

🔹 Pointers → A box that stores the address of another box
int age = 15;
int *p = &age;

printf("Age: %d\n", age);
printf("Where is age? %p\n", p);
printf("What is inside that address? %d\n", *p);
👉 & means “where is it?”
👉 * means “what’s inside?”

🔹 Structures → Group different types in one box
struct Student {
    int roll;
    char name[20];
    float gpa;
};

struct Student s1 = {1, "Alox", 3.5};

printf("Roll: %d, Name: %s, GPA: %.1f\n", s1.roll, s1.name, s1.gpa);
🔹 Enums → Give names to numbers
enum Day { MON, TUE, WED };
enum Day today = TUE;

printf("Today is day number: %d\n", today);  // prints 1
📝 Quick Table
Type	Example	What it means
int	int age = 12;	Whole number
float	float price = 5.99;	Decimal number
double	double pi = 3.14;	Bigger decimal
char	char grade = 'A';	One letter
string	char name[] = "Hi";	A word or sentence
bool	bool isOn = true;	True or false
array	int nums[3];	Many values
struct	struct Student {...};	Group of variables


#STRINGS IN C

**A string is just an array of characters**
*char word[5] = {'H', 'e', 'l', 'l', 'o'};*


<span style="color: #00ff33ff;">Word</span>

+---+---+---+---+---+----+
| H | e | l | l | o | \0 |
+---+---+---+---+---+----+
| 0 | 1 | 2 | 3 | 4 |
+-------------------+  

char word[] = "Hello";
<span style="color: #00ff33ff;">Word</span>
+---+---+---+---+---+----+
| H | e | l | l | o | \0 |
+---+---+---+---+---+----+
| 0 | 1 | 2 | 3 | 4 |
+-------------------+   
<span style="color: #00ff33ff;">Strings are stored in character arrays</span>

printf("%c\n", word[0]); // H
printf("%c\n", word[1]); // e
printf("%c\n", word[2]); // l
printf("%c\n", word[3]); // l
printf("%c\n", word[4]); // o

Want to print a string??

use %s in printf
printf("%s\n", word);  // Hello

**IMPORTANT**
Unlike higher-level languages, you can’t just assign a new string to a char[] after declaring it.

char name[10] = "Hello";
// name = "Hello"; ❌ This won’t work

A header called #include <string.h> that has issues:

strlen(str) → length of string (not counting \0)
strcpy(dest, src) → copy one string into another
strcat(dest, src) → join two strings together
strcmp(str1, str2) → compare two strings

*EXAMPLE:-*
#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Alox";

    printf("Length: %lu\n", strlen(name));  // 4

    strcpy(name, "Alan");
    printf("Now: %s\n", name);  // Alan

    strcat(name, " Smith");
    printf("Full: %s\n", name);  // Alan Smith

    printf("Compare: %d\n", strcmp("abc", "abc"));  // 0 means equal

    return 0;
}
