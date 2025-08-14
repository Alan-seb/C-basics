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

c
Copy
Edit
type name = value;
Example:

c
Copy
Edit
int age = 10;
🔹 Basic Variable Types
1. int → Whole numbers (no decimals)
c
Copy
Edit
int age = 12;
printf("Age: %d\n", age);
➡️ %d tells printf to show an integer.

2. float → Numbers with decimals (less precise)
c
Copy
Edit
float price = 5.99;
printf("Price: %.2f\n", price);
➡️ %.2f shows 2 numbers after the decimal point.

3. double → Bigger decimal numbers (more precise)
c
Copy
Edit
double pi = 3.14159;
printf("Pi: %.5lf\n", pi);
➡️ %lf shows a double.

4. char → A single character
c
Copy
Edit
char grade = 'A';
printf("Grade: %c\n", grade);
➡️ %c shows a character.

5. Strings (char[]) → A word or sentence
c
Copy
Edit
char name[20] = "Alox";
printf("Name: %s\n", name);
➡️ %s shows a string.

🔹 Other Useful Types
Unsigned Numbers → Only positive numbers
c
Copy
Edit
unsigned int count = 50;
printf("Count: %u\n", count);
Boolean (true or false)
c
Copy
Edit
#include <stdbool.h>

bool isHappy = true;
printf("Happy: %d\n", isHappy);  // prints 1 for true
🔹 Arrays → Many boxes of the same type
c
Copy
Edit
int scores[3] = {90, 80, 70};
printf("First score: %d\n", scores[0]);
👉 Arrays start at 0 (so scores[0] is the first number).

🔹 Pointers → A box that stores the address of another box
c
Copy
Edit
int age = 15;
int *p = &age;

printf("Age: %d\n", age);
printf("Where is age? %p\n", p);
printf("What is inside that address? %d\n", *p);
👉 & means “where is it?”
👉 * means “what’s inside?”

🔹 Structures → Group different types in one box
c
Copy
Edit
struct Student {
    int roll;
    char name[20];
    float gpa;
};

struct Student s1 = {1, "Alox", 3.5};

printf("Roll: %d, Name: %s, GPA: %.1f\n", s1.roll, s1.name, s1.gpa);
🔹 Enums → Give names to numbers
c
Copy
Edit
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


