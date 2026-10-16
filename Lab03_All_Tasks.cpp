//L1F26BSCS0296 – Hussain Ali 
// Introduction to Computing - Lab 03 
#include <iostream>
using namespace std;

int main()
{
    // TASK 01 STARTS HERE - Welcome Banner (Hello World and cout)
    {
        
        cout << "Hello World!" << endl;
        cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026\n";

        cout << "Welcome!" << endl;
        cout << 2026 << endl;
        cout << 45 << endl;
        cout << 45 * 3 << endl;             
        cout << 1000 + 500 - 250 << endl;  
        cout << "Total fee: " << 45000 + 9000 << endl;
    }
    cout << endl;

    // TASK 02 STARTS HERE - Debug the Code (Syntax Errors vs. Semantics)
    {

        cout << "Orientation Day" << endl;
        cout << "Total students: " << 450 << endl;
        cout << "Seats left: " << 500 - 450 << endl;
        cout << "Have a nice day" << endl;

        //  Part B: semantic error 
.
        cout << "Average: " << 60 + 70 + 80 / 3 << endl;     // wrong (156)
        cout << "Average: " << (60 + 70 + 80) / 3 << endl;   // correct (70) - fixed with brackets

    cout << endl;

    // TASK 03 STARTS HERE - Expression Quiz (Precedence and Associativity)
    {
        cout << "Expression 1: " << 10 + 5 * 2 << endl;
        cout << "Expression 2: " << (10 + 5) * 2 << endl;
        cout << "Expression 3: " << 20 - 5 - 3 << endl;
        cout << "Expression 4: " << 100 / 7 << endl;
        cout << "Expression 5: " << 100 % 7 << endl;
        cout << "Expression 6: " << 2 * 3 + 8 / 4 - 1 << endl;
        cout << "Expression 6 (with brackets): " << 2 * 3 + 8 / (4 - 1) << endl;

    }
    cout << endl;


    // TASK 04 STARTS HERE - Admission Form (Variables and Types)
    {
        // Declare and initialize variables of suitable types
        int rollNo = 1045;
        int semester = 1;
        char section = 'B';
        double cgpa = 3.5;
        int totalFee = 45000;
        int feePaid = 20000;

        cout << "Roll No: " << rollNo << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Total Fee: " << totalFee << endl;
        cout << "Fee Paid: " << feePaid << endl;
        semester = semester + 1;
        feePaid = feePaid + 5000;
        cout << "Semester: " << semester << endl;
        cout << "Fee Paid: " << feePaid << endl;

        int remainingFee = totalFee - feePaid;
        int percentagePaid = feePaid * 100 / totalFee;   // 2500000 / 45000 = 55 (integer division)
        cout << "Remaining Fee: " << remainingFee << endl;
        cout << "Percentage Paid: " << percentagePaid << endl;

    }
    cout << endl;

    // TASK 05 STARTS HERE - Fee Calculator (cin and White Space)
    {
        int age, creditHours, feePerCreditHour;

        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter number of credit hours: ";
        cin >> creditHours;
        cout << "Enter fee per credit hour (Rs): ";
        cin >> feePerCreditHour;

        int totalFee = creditHours * feePerCreditHour;
        int feeAfterDiscount = totalFee - 2000;
        int yearOfBirth = 2026 - age;
        int yearTurn25 = yearOfBirth + 25;

        cout << "Total fee: Rs " << totalFee << endl;
        cout << "Fee after Rs 2000 discount: Rs " << feeAfterDiscount << endl;
        cout << "Year of birth: " << yearOfBirth << endl;
        cout << "Year in which you turn 25: " << yearTurn25 << endl;
    }
    cout << endl;


    {
        int price, quantity, total, tax, grandTotal;

        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;

        total = price * quantity;
        tax = total * 5 / 100;
        grandTotal = total + tax;

        // Output total, tax, grandTotal
        cout << "Total: " << total << endl;
        cout << "Tax: " << tax << endl;
        cout << "Grand Total: " << grandTotal << endl;

    }
    cout << endl;

    // TASK 07 STARTS HERE - Weather App (Draw the Flowchart, then Code)
    {
        int celsius, fahrenheit;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = celsius * 9 / 5 + 32;

        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
        cout << "Celsius " << celsius << " gives Fahrenheit " << fahrenheit << endl;

    }
    cout << endl;


    return 0;
}
