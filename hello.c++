#include <iostream>
using namespace std;

int main() {
    cout << "Coding is an art";
}

int main() {
    cout << 42;
}

int main() {
 string  name = "James";
 int  age = 42;
 float  height = 185.7f;

    cout << "Name: " << name << endl;
    cout << "Age: " << age;
    cout << " | Height: " << height;
}

int main() {
  int points = 128;
  cout << points;

  double num = 23.4;
  float num_2 = 44.4f;
  cout << num << endl;
  cout << num_2;
}

int main() {
  char x = 'H';
  cout << x;
}

int main() {
    cout << "My first C++ Code Coach!";
}

int main() {
  cout << "This is the first line" << endl;
  cout << "This is the second line";
}

int main() {
  string message;
  message = "Welcome";
  cout << message;
}

int main() {
    string smiley = "      @@@@            @@@@\n     @@@@@@          @@@@@@\n     @@@@@@          @@@@@@\n      @@@@            @@@@\n\n\n\n@                             @\n @@                         @@\n   @@@                   @@@\n      @@@@@         @@@@@\n         @@@@@@@@@@@@@\n";
    cout << smiley;
}

int main() {
  int a = 8;
  int b = 24;
  cout << a+b;
}

int main() {
    int price = 2000;
    int discount = 500;
    int result = price - discount;
    cout << result;
}

int main() {
    int points = 30;
    int level = 3;
    int total = points * level;
    cout << total;
}

int main() {
    int hours = 500;
    int days = hours / 24;
    cout << days;
}

int main() {
    double hours = 500;
    double days = hours / 24;
    cout << days;
}

int main() {
    int days = 500;
    int days = days % 24;
    cout << days;
}

// Task - Painting a Wall

int main() {
    double length = 5.6;
    double height = 3.1;

    double result = length * height;

    cout << result;
}


// auto is used for automatically assigning the keyword(int, double, string) depending on the vlaue
int main() {
    auto flot = 3.12;
    auto num = 5;
    auto txt = "Hello World!";

    cout << flot<<" "<<num<<" "<<txt;
}

int main() {
  // storing the height of the user
  double height = 74.8; // this is just a demo value 
  cout << height;
}

// single line comment
/* 
    This is a multi-line comment
*/

// Task - Shopping
// This task really gave me a run for my skillset

int main() {
        // your account's balance
    auto balance = 2452.4;
    // price for each notebook
    auto price = 259.99;

    // Task: calculate the number of notebooks you can afford and output it.
    // Hint: use an integer to store the result.
    int sum = balance / price;
    
    

    // Task: calculate the amount left over on your account after the purchase and output it on a new line.
    // Hint: calculate the total price of the purchase, then substract it from the balance.
    double leftOver = sum * price;
    double actual = balance - leftOver;
    cout << sum << endl;
    cout << actual;
}

int main() {
    int age;
    cin >> age;
    cout << "Age " << age;
}

int name() {
    string name;
    cout << "Enter your name"<< endl;
    cin >> name;
    cout << "Hello " << name << "!";
}

int main() {
    double length;
    double height;

    cin >> length >> height;
    cout << length * height;
    
}


if(condition) {
  //some code
} 
else if(condition) {
//some other code
} 
else {
  //some other code
}

// Task - Club Entrance
int main() {
    //your code goes here
    int age;
    cin >> age;
    if (age >= 16) {
        cout << "Welcome";
    }
    else {
        cout << "Not allowed";
    }
}

// Task - coffee machine
int main() {
    int code = 2;
    switch(code) {
        case 1:
            cout << "coffee";
            break;
        case 2:
            cout << "water";
            break;
        case 3:
            cout << "cookie";
            break;
        default:
            cout << "Try again";
    }
}



int main() {
    int choice;
    cin >> choice;

    /* Coffee Types:
    1. Espresso
    2. Americano
    3. Cappuccino
    4. Latte
    */
    switch(choice) {
        case 1:
            cout << "Espresso";
            break;
        case 2:
            cout << "Americano";
            break;
        case 3:
            cout << "Cappuccino";
            break;
        case 4:
            cout << "Latte";
            break;
        default:
            cout << "Unavailable";
    }

}