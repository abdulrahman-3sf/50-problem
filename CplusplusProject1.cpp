
// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//          About 50 easy problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Name
string readName() {
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	return name;
}
void printName(string name) {
	cout << "Your name is: " << name << endl << endl;
}

// Even or Odd
enum enNumberType {odd=1, even};
int readNumber() {
	int number;
	cout << "Enter a numebr: ";
	cin >> number;

	return number;
}
enNumberType checkNumberType(int number) {
	if (number % 2 == 0) {
		return enNumberType::even;
	}
	return enNumberType::odd;
}
void printNumberType(enNumberType numberType) {
	if (numberType == enNumberType::even) {
		cout << "The number is even.";
	}
	else {
		cout << "The number is odd.";
	}
}

// Grater than specific age, hasDrivingLicense or not, hasRecommendation or not
struct stPersonInfo {
	int age;
	bool hasDrivingLicense;
	bool hasRecommendation;
};
stPersonInfo readInfo() {

	stPersonInfo personInfo;

	cout << "Age: ";
	cin >> personInfo.age;

	cout << "Do you have driving license (1/0): ";
	cin >> personInfo.hasDrivingLicense;

	cout << "Do you have recommendation (1/0): ";
	cin >> personInfo.hasRecommendation;

	return personInfo;
}
bool isAccepted(stPersonInfo person) {
	if (person.hasRecommendation) {
		return true;
	}
	else {
		return (person.age > 21 && person.hasDrivingLicense == 1);
	}
	
}
void printResult(stPersonInfo person) {
	if (isAccepted(person)) {
		cout << "You are Hired :)";
	}
	else {
		cout << "You are Rejected :|";
	}
	
}

// Full Name
struct stPersonInfo {
	string firstName;
	string lastName;
};
stPersonInfo readPersonInfo() {
	stPersonInfo person;

	cout << "Enter first name: ";
	cin >> person.firstName;

	cout << "Enter last name: ";
	cin >> person.lastName;

	return person;
}
string getFullName(stPersonInfo person, bool reversed) {
	string fullName;

	if (reversed)
		fullName = person.lastName + " " + person.firstName;
	else
		fullName = person.firstName + " " + person.lastName;

	return fullName;
}
void printFullName(string fullName) {
	cout << "The full name is: " << fullName;
}

// Half number
int readNumber() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	return number;
}
float getHalfNumber(int number) {
	return (float)number / 2;
}
void printHalfNumebr(int number) {
	cout << "The half number of " << number << " is " << getHalfNumber(number);
}

// Is the grade Pass or Fail 
enum enPassFail {pass=1, fail};
int readGrade() {
	int grade;

	cout << "Enter a grade: ";
	cin >> grade;
	return grade;
}
enPassFail isPassed(int grade) {
	if (grade >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}
void printResults(int grade) {
	if (isPassed(grade) == enPassFail::pass) {
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}
}

// sumOfThreeNumbers, avgOfThreeNumbers
void readNumbers(int &number1, int &number2, int &number3) {
	cout << "Enter number 1: ";
	cin >> number1;

	cout << "Enter number 2: ";
	cin >> number2;

	cout << "Enter number 3: ";
	cin >> number3;
}
int sumOfThreeNumbers(int number1, int number2, int number3) {
	return number1 + number2 + number3;
}
void printSumOfThreeNumbers(int sum) {
	cout << "\nThe sum of the three numbers are: " << sum;
}
float avgOfThreeNumbers(int number1, int number2, int number3) {
	return (float)sumOfThreeNumbers(number1, number2, number3) / 3;
}
enPassFail checkAvg(float avg) {
	if (avg >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}
void printResults(float avg) {
	cout << "\nThe avrage of the three numbers are: " << avg;

	if (checkAvg(avg) == enPassFail::pass)
		cout << " | Passed.";
	else
		cout << " | Failed.";

}

// Max of numbers
void readNumbers(int& number1, int& number2, int& number3) {

	cout << "Enter the first number: ";
	cin >> number1;

	cout << "Enter the second number: ";
	cin >> number2;

	cout << "Enter the third number: ";
	cin >> number3;
}
int maxOfTwoNumbers(int number1, int number2) {
	if (number1 > number2)
		return number1;
	else
		return number2;
}
int maxOfThreeNumbers(int number1, int number2, int number3) {
	if (number1 > number2) {
		if (number1 > number3)
			return number1;
		else
			return number3;
	}
	else {
		if (number2 > number3)
			return number2;
		else
			return number3;
	}
}
void printMaxNumber(int max) {
	cout << "The max number is " << max;
}

// Swap two numbers
void readTwoNumbers(int& number1, int& number2) {

	cout << "Enter the first number: ";
	cin >> number1;

	cout << "Enter the second number: ";
	cin >> number2;
}
void swapTwoNumbers(int& number1, int& number2) {
	int swap;

	swap = number1;
	number1 = number2;
	number2 = swap;

	cout << "\nSwap Done!";
}
void printNumbers(int number1, int number2) {
	cout << "\nNumber1: " << number1 << ", Number2: " << number2;
}

// Rectangle area claculater
void readTwoNumbers(float& number1, float& number2) {

	cout << "Enter the first number: ";
	cin >> number1;

	cout << "Enter the second number: ";
	cin >> number2;
}
float calculateRectangleArea(float number1, float number2) {
	return number1 * number2;
}
void printRectangleAreaResult(float rectangleArea) {
	cout << "Rectangle Area: " << rectangleArea;
}

// Rectangle area by diagonal
// read two float numbers readTwoNumbers(float& number1, float& number2)
float calculateRectangleAreaByDiagonal(float a, float d) {
	return a * sqrt(pow(d, 2) - pow(a, 2));
}
void printRectangleAreaByDiagonalResult(float rectangleAreaByDiagonal) {
	cout << "Area: " << rectangleAreaByDiagonal;
}

// Trangle area
// read two float numbers readTwoNumbers(float& number1, float& number2)
float calculateTrangleArea(float a, float h) {
	return 0.5 * a * h;
}
void printTrangleArea(float trangleArea) {
	cout << trangleArea;
}

// PI value for next questions
const float PI = 3.141592;

// Circle area
float readRadious() {
	float r;

	cout << "Enter the value of radious: ";
	cin >> r;

	return r;
}
float calculateCircleArea(float r) {
	return ::PI * pow(r, 2);
}
void printCircleArea(float circleArea) {
	cout << circleArea;
}

// Circle area by diameter
float readDiameter() {
	float D;

	cout << "Enter the value of diameter: ";
	cin >> D;

	return D;
}
float calculateCircleAreaByDiameter(float D) {
	
	return (::PI * pow(D, 2)) / 4;
}
void printCircleAreaByDiameter(float circleAreaByDiameter) {
	cout << circleAreaByDiameter;
}

// Circle area inscribed in square
float readSquareSide() {
	float A;

	cout << "Enter the value of square side: ";
	cin >> A;

	return A;
}
float calculateCircleAreaInscribedInSquare(float A) {
	return (::PI * pow(A, 2)) / 4;
}
void printCircleAreaInscribedInSquare(float circleAreaInscribedInSquare) {
	cout << circleAreaInscribedInSquare;
}

// Circle area along the circumference
float readCircumference() {
	float L;

	cout << "Enter the value of circumference side: ";
	cin >> L;

	return L;
}
float calculateCircleAreaAlongTheCircumference(float L) {
	return (pow(L, 2)) / (4 * ::PI);
}
void printCircleAreaAlongTheCircumference(float circleAreaAlongTheCircumference) {
	cout << circleAreaAlongTheCircumference;
}

// Circle area inscribed in an isosceles triangle
void readIsoscelesTrangle(float& a, float& b) {
	cout << "Enter the a number: ";
	cin >> a;

	cout << "Enter the b number: ";
	cin >> b;
}
float calculateCircleAreaInscribedInAnIsoscelesTriangle(float a, float b) {
	return ::PI * (b * b / 4) * ((2 * a - b) / (2 * a + b));
}
void printCalculateCircleAreaInscribedInAnIsoscelesTriangle(float circleAreaInscribedInAnIsoscelesTriangle) {
	cout << circleAreaInscribedInAnIsoscelesTriangle;
}

// Circle area described around an arbitary triangle
void readTriangleData(float& a, float& b, float& c) {
	cout << "Enter the a number: ";
	cin >> a;

	cout << "Enter the b number: ";
	cin >> b;

	cout << "Enter the c number: ";
	cin >> c;
}
float calculateCircleAreaByATriangle(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float area = ::PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
	return area;
}
void printCircleAreaByATraiangle(float circleAreaByATraiangle) {
	cout << circleAreaByATraiangle;
}

// Validate number in rnage
int readAge() {
	int age;

	cout << "Enter your age: ";
	cin >> age;

	return age;
}
bool validateNumberInRange(int number, int from, int to) {
	return (number >= from && number <= to);
}
void printValidAge(int age) {
	if (validateNumberInRange(age, 18, 35))
		cout << "Valid age!";
	else
		cout << "Not a Valid age!";
}

// Read until age between 18 and 45
// int readAge()
// bool validateNumberInRange(int number, int from, int to)
int readUntilAgeBetween(int from, int to) {
	int number;
	do {
		number = readAge();
	} while (!validateNumberInRange(number, from, to));

	return number;
}
void printAgeAfterCheck(int age) {
	cout << age;
}

// Print numbers from 1 to n
int readNumebr() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	return number;
}
void printFrom1ToN(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
}

// Print numbers frm n to 1
// int readNumber()
void printFromNto1(int n) {
	for (int i = n; i >= 1; i--)
		cout << i << endl;
}

// Sum odd number from 1 to n
enum enOddOrEven {even=1, odd};
// int readNumber()
enOddOrEven checkOddOrEven(int number) {
	if (number % 2 == 0)
		return enOddOrEven::even;
	else
		return enOddOrEven::odd;
}
int sumOddNumbersFrom1ToN(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (checkOddOrEven(i) == enOddOrEven::odd)
			sum += i;
	}

	return sum;
}
void printSum(int sum) {
	cout << sum;
}

// Sum even number from 1 to n
// enum enOddOrEven {even=1, odd};
// int readNumber()
// enOddOrEven checkOddOrEven(int number)
int sumEvenNumbersFrom1ToN(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (checkOddOrEven(i) == enOddOrEven::even)
			sum += i;
	}

	return sum;
}
// void printSum(int sum)

// Factorial of n!
int readPositiveNumebr() {
	int number;
	unsigned int s;
	long long int x = 0;
	
	do {
		cout << "Enter a positive number: ";
		cin >> number;
	} while (number < 0);

	return number;
}
int factorial(int n) {
	int fac = 1;

	for (int i = n; i >= 1; i--) {
		fac *= i;
	}

	return fac;
}
void printFactorial(int factorial) {
	cout << factorial;
}

// Print number with power of 2, 3, 4 without builtin methods or external
// int readPositiveNumebr()
void numberWithPowerOf2_3_4(int number) {
	cout << number * number << endl;
	cout << number * number * number << endl;
	cout << number * number * number * number << endl;
}

// Print number with power of m without builtin methods or external
void readNumber_Power(int& number, int& power) {
	cout << "Enter a number: ";
	cin >> number;

	cout << "Enter the power: ";
	cin >> power;
}
int powerOfM(int number, int power) {

	if (power == 0)
		return 1;

	int total = number;

	for (int i = power; i > 1; i--) {
		total *= number;
	}
	return total;
}
void printResultsOfPowerOfM(int total) {
	cout << total;
}

// Grades A, B, C, D, E, F
// int readNumber()
// bool validateNumberInRange(int number, int from, int to)
char getGradeLetter(int grade) {
	while (!validateNumberInRange(grade, 0, 100))
		grade = readNumber();

	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else
		return 'F';
}
void printGrade(char gradeLetter) {
	cout << "Your grade: " << gradeLetter;
}

// Total commission
float readSales() {
	float totalSales;

	cout << "Enter the total sales: ";
	cin >> totalSales;

	return totalSales;
}
float calculateTotalCommission(float totalSales) {
	float totalCommission;
	if (totalSales >= 1000000)
		totalCommission = totalSales * 0.01;
	else if (totalSales >= 500000)
		totalCommission = totalSales * 0.02;
	else if (totalSales >= 100000)
		totalCommission = totalSales * 0.03;
	else if (totalSales >= 50000)
		totalCommission = totalSales * 0.05;
	else 
		totalCommission = 0;

	return totalCommission;
}
void printCommissionPercentage(float commissionPercentage) {
	cout << commissionPercentage;
}

// Piggy Bank Calculater
struct stPiggyBankContent {
	int pennies, nickels, dimes, quarters, dollars;
};
stPiggyBankContent readPiggyBankContent() {

	stPiggyBankContent PiggyBankContent;

	cout << "Enter the five type of money you have: ";
	cin >> PiggyBankContent.pennies;
	cin >> PiggyBankContent.nickels;
	cin >> PiggyBankContent.dimes;
	cin >> PiggyBankContent.quarters;
	cin >> PiggyBankContent.dollars;

	return PiggyBankContent;
}
int calculatePennies(stPiggyBankContent PiggyBankContent) {
	return PiggyBankContent.pennies + PiggyBankContent.nickels * 5 + PiggyBankContent.dimes * 10 + PiggyBankContent.quarters * 25 + PiggyBankContent.dollars * 100;
}
float calculateDollars(int totalPennies) {
	return (float)totalPennies / 100;
}
void printPennies_Dollars(int totalPennies, float totalDollars) {
	cout << "Total Pennies: " << totalPennies << endl;
	cout << "Total Dollars: " << totalDollars << endl;
}

// Simple calculater
enum enOperations { add='+', sub='-', mult='*', divi='/' };
void readNumberCalculater(float& number1, float& number2) {
	cout << "Enter the first number: ";
	cin >> number1;

	cout << "Enter the second number: ";
	cin >> number2;
}
enOperations readOperation() {
	char op;

	cout << "Enter operation type (+, -, *, /): ";
	cin >> op;

	return (enOperations)op;
}
float calculater(float number1, float number2, enOperations operation) {
	switch (operation) {
	case enOperations::mult:
		return (number1 * number2);
	case enOperations::divi:
		return (number1 / number2);
	case enOperations::add:
		return (number1 + number2);
	case enOperations::sub:
		return (number1 - number2);
	}
}
void printOutput(float result) {
	cout << result;
}

// Sum until -99
// int readNumber()
int sumUntil_sub99() {
	int number = 0;
	int sum = 0;

	do {
		sum += number;
		number = readNumber();
	} while (number != -99);

	return sum;
}
void printSumWithoutSub99(int sum) {
	cout << sum;
}

// Prime number
enum enPrimeOrNot {notPrime=0, prime=1};
// int readNumber()
enPrimeOrNot isPrime(int number) {
	int midNumber = ceil(number / 2);

	for (int i = 2; i <= midNumber; i++) {
		if (number % i == 0)
			return enPrimeOrNot::notPrime;
	}
	return enPrimeOrNot::prime;
}
void printNumberType(int number) {
	if (isPrime(number) == enPrimeOrNot::notPrime)
		cout << "Not a prime number!";
	else
		cout << "Prime number!";
}

// Pay remainder
// float readTwoNumbers()
float claculateRemainder(float totalBill, float cashPaid) {
	return cashPaid - totalBill;
}
void printRemainder(int remainder) {
	cout << remainder;
}

// Service fee and sales tax
float readFloatNumber() {
	float number;

	cout << "Enter a number: ";
	cin >> number;

	return number;
}
float claculateAllAdditionMoney(float number) {
	return number * 1.1 * 1.16;
}
void printBillAfterAllAdditionMoney(float Bill) {
	cout << Bill;
}

// weeks and days
int readHours() {
	int hours;

	cout << "Enter the hours: ";
	cin >> hours;
	return hours;
}
float hoursToDays(int hours) {
	return (float)hours / 24;
}
float hoursToWeeks(int hours) {
	return hoursToDays(hours) / 7;
}

// Task duration in seconds;
struct stTaskDuration {
	int days, hours, minutes, seconds;
};
stTaskDuration readTaskDuration() {
	stTaskDuration taskDuration;

	cout << "Enter days, hours, minutes, seconds: ";
	cin >> taskDuration.days;
	cin >> taskDuration.hours;
	cin >> taskDuration.minutes;
	cin >> taskDuration.seconds;
	
	return taskDuration;
}
int totalInSeconds(stTaskDuration taskDuration) {
	int totalSeconds = 0;

	totalSeconds += taskDuration.days * 24 * 60 * 60;
	totalSeconds += taskDuration.hours * 60 * 60;
	totalSeconds += taskDuration.minutes * 60;
	totalSeconds += taskDuration.seconds;

	return totalSeconds;
}
void printTotalInSeconds(int seconds) {
	cout << seconds;
}

// Seconds to days, hours, minutes, seconds
struct stTimesType {
	int days, hours, minutes, seconds;
};
int readSeconds() {
	int seconds;
	
	cout << "Enter the total seconds: ";
	cin >> seconds;

	return seconds;
}
stTimesType secondsToDifferentTimeTypes(int seconds) {
	stTimesType timesType;

	int remiander = 0;
	int daySeconds = 24 * 60 * 60;
	int hourSeconds = 60 * 60;
	int minuteSecodns = 60;

	timesType.days = seconds / daySeconds;
	remiander = seconds % daySeconds;

	timesType.hours = remiander / hourSeconds;
	remiander = remiander % hourSeconds;

	timesType.minutes = remiander / minuteSecodns;
	remiander = remiander % minuteSecodns;

	timesType.seconds = remiander;

	return timesType;
}
void printSecondsToDifferentTimeTypes(stTimesType timesType) {
	cout << to_string(timesType.days) + ":" + to_string(timesType.hours) + ":" + to_string(timesType.minutes) + ":" + to_string(timesType.seconds);
}

// Day of week
enum enDaysOfWeek {sun=1, mod, tue, wed, thu, fri, sat};
enDaysOfWeek getNumberOfDay() {
	return (enDaysOfWeek)readNumber();
}
string printDay(enDaysOfWeek dayNumber) {
	switch (dayNumber) {
	case enDaysOfWeek::sun:
		return "sun";
	case enDaysOfWeek::mod:
		return "mod";
	case enDaysOfWeek::tue:
		return "tue";
	case enDaysOfWeek::wed:
		return "wed";
	case enDaysOfWeek::thu:
		return "thu";
	case enDaysOfWeek::fri:
		return "fri";
	case enDaysOfWeek::sat:
		return "sat";
	default:
		return "Other";
	}
}

// month of year
enum enMonthOfYear { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
enMonthOfYear getMonthNumber() {
	return (enMonthOfYear)readNumber();
}
string printMonth(enMonthOfYear monthNumber) {
	switch (monthNumber) {
	case enMonthOfYear::jan:
		return "jan";
	case enMonthOfYear::feb:
		return "feb";
	case enMonthOfYear::mar:
		return "mar";
	case enMonthOfYear::apr:
		return "apr";
	case enMonthOfYear::may:
		return "may";
	case enMonthOfYear::jun:
		return "jun";
	case enMonthOfYear::jul:
		return "jul";
	case enMonthOfYear::aug:
		return "aug";
	case enMonthOfYear::sep:
		return "sep";
	case enMonthOfYear::oct:
		return "oct";
	case enMonthOfYear::nov:
		return "nov";
	case enMonthOfYear::dec:
		return "dec";
	default:
		return "Other";
	}
}

// Print letter from A to Z
void printLettersAtoZ() {
	for (char i = 65; i <= 90; i++) {
		cout << i << endl;
	}
}

// Loan installment months
// int readTwoNumbers
int totalMonths(int loanAmount, int monthlyPaid) {
	return ceil(loanAmount / monthlyPaid);
}

// Monthly loan installment
// int readTwoNumbers
float billEcahMonth(int loanAmount, int months) {
	return (float)loanAmount / months;
}

// ATM pin code
// ATM pin code - enter three times only
string readPinCode() {
	string pinCode;

	cout << "Enter the ATM pin code: ";
	cin >> pinCode;

	return pinCode;
}
bool logIn() {
	string pinCode;
	int counter = 3;
	do {
		counter--;
		pinCode = readPinCode();
		if (pinCode == "1234")
			return 1;
	} while (counter >= 1);

	return 0;
}
void viewBalance() {
	
	if (logIn())
		cout << 7500;
	else
		cout << "You reach the limit!";
	
}


int main() {
	return 0;
}