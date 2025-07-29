#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "color.h" 

	// Function declarations
	int startmes();
	int menuPage();
	int PHistory();
	int phstordata();
	int backgroundcolor();
	int textcolor_menu();
	int color();
	int SecondMenu();
	int advanceMenu();
	int sRoot();
	int powerCalc();
	int percentage();
	int averageNum();
	int factorial();
	int sInterest();
	int cInterest();
	int area();
	int askUser();
	int add();
	int holdScreen();
	int sub();
	int mul();  
	int divid();
	int mod();
	int endmes();
	int exitPro();
	
	
	// Global variables
	int num1, num2;
	int ph1[20], ph2[20]; 
	int menuTrack[10]; 
	int phctr = 0, mtctr = 0;
	char ch1,ch3;
	
	char advMenuTrack[20];     
	double adv1[20], adv2[20], advResult[20];
	int advCtr = 0;   

int main() {
    startmes();
    menuPage();
    endmes();
    return 0;
}

// Starting Message
int startmes() {
    printf("\n");
    printf("\t\t\t\t\t+------------------------------+\n");
    printf("\t\t\t\t\t*  * * * CALCULATOR APP * * *  *\n");
    printf("\t\t\t\t\t+------------------------------+\n");
    return 0;
}

// Menu Page
int menuPage() {
    system("cls");
    startmes();
    printf("\n\nLocation: Menu/\n");
    printf("\nWhich Operation Do You Want To Perform?\n");
    printf("\n\t1. Addition");
    printf("\n\t2. Subtraction");
    printf("\n\t3. Multiplication");
    printf("\n\t4. Division");
    printf("\n\t5. Modulus\n");
    printf("\n\t6. View History ");
    printf("\n\t7. Advance Calculator");
    printf("\n\t8. Set Color ");
    printf("\n\t9. Exit ");
    printf("\n\nChoose Any Operation (1 to 9): ");
    
    fflush(stdin);
    scanf("%c", &ch1);
    
    switch(ch1) {
        case '1': add(); break;
        case '2': sub(); break;
        case '3': mul(); break;
        case '4': divid(); break;
        case '5': mod(); break;
        case '6': PHistory(); break;
        case '7': advanceMenu(); break;
        case '8': color(); break;
        case '9': exitPro(); break;
        default: 
            printf("\nInvalid number. Please enter between 1 to 9.");
            holdScreen();
            menuPage(); 
            break;
    }

    return 0;
}

// Second Menu
int SecondMenu() {
    char ch2;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Second Menu  \n");
    printf("\t\t\t\t\t-----------------------------\n");

    printf("\n\nLocation: Menu/Operation/Second Menu/ \n");
    printf("\nWhich Operation Do You Want To Do?\n");
    printf("\n\t1. Continue This Operation ");
    printf("\n\t2. Back to Menu Page ");
    printf("\n\t3. View History  ");
    printf("\n\t4. Exit the Program ");
    printf("\n\nChoose Any Operation (1 to 4): ");
    
    scanf(" %c", &ch2);
    
    switch(ch2) {
        case '1': 
        	
            if (ch1 == '1') add();
            else if (ch1 == '2') sub();
            else if (ch1 == '3') mul();
            else if (ch1 == '4') divid();
            else if (ch1 == '5') mod();
            else printf("\nInvalid operation selected previously.");
            break;
        case '2': menuPage(); break;
        case '3': PHistory(); break;
        case '4': exitPro(); break;
        default: 
            printf("\nInvalid number. Please enter between 1 to 3.");
            holdScreen();
            SecondMenu();
            break;
    }

    return 0;
}

int advanceMenu(){
	
	system("cls");
	printf("\n");
    printf("\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t*  * * *ADVANCE CALCULATOR MENU * * *  *\n");
    printf("\t\t\t\t\t+--------------------------------------+\n");
	printf("\n\nLocation: Menu/Advance Menu/ \n");
    
    printf("\nWhich Operation Do You Want To Perform?\n");
    printf("\n\t1. Square Root");
    printf("\n\t2. Power");
    printf("\n\t3. Percentage");
    printf("\n\t4. Average of Numbers");
    printf("\n\t5. Factorial");
	printf("\n\t6. Simple Interest");
	printf("\n\t7. Compound Interest");
    printf("\n\t8. Area Calculations\n");
    printf("\n\t9. View History");
    printf("\n\t10. Exit ");
    printf("\n\nChoose Any Operation (1 to 10): ");
    
    scanf(" %c", &ch3);
    
    switch(ch3) {
        case '1': sRoot(); break;
        case '2': powerCalc(); break;
        case '3': percentage(); break;
        case '4': averageNum(); break;
        case '5': factorial(); break;
        case '6': sInterest(); break;
        case '7': cInterest(); break;
        case '8': area(); break;
        case '9': PHistory(); break;
        case '10': exitPro(); break;
        default: 
            printf("\nInvalid number. Please enter between 1 to 10.");
            holdScreen();
            menuPage(); 
            break;
    }

    
    
}

// advance calculator Menu
int AdvanceSecondMenu() {
    char ch2;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t      Advance Second Menu  \n");
    printf("\t\t\t\t\t-----------------------------\n");

    printf("\n\nLocation: Menu/Operation/Second Menu/ \n");
    printf("\nWhich Operation Do You Want To Do?\n");
    printf("\n\t1. Continue This Operation ");
    printf("\n\t2. Back to Menu Page ");
    printf("\n\t3. View History  ");
    printf("\n\t4. Exit the Program ");
    printf("\n\nChoose Any Operation (1 to 4): ");
    
    fflush(stdin);
    scanf("%c", &ch2);
    
    switch(ch2) {
        case '1': 
        	
            if (ch3 == '1') sRoot();
            else if (ch3 == '2') powerCalc();
            else if (ch3 == '3') percentage();
            else if (ch3 == '4') averageNum();
            else if (ch3 == '5') factorial();
            else if (ch3 == '6') sInterest();
            else if (ch3 == '7') cInterest();
            else if (ch3 == '8') area();
            else printf("\nInvalid operation selected previously.");
            break;
        case '2': advanceMenu(); break;
        case '3': PHistory(); break;
        case '4': exitPro(); break;
        default: 
            printf("\nInvalid number. Please enter between 1 to 4.");
            holdScreen();
            SecondMenu();
            break;
    }

    return 0;
}

// View History Display
int PHistory() {
    int i;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        View History  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/View History/ \n");
    printf("\n\nPress Enter To See View History... ");
    getch();

    for (i = 0; i < phctr; i++) {
        printf("\n\n\tHistory Entry: %d", i + 1);
        switch (menuTrack[i]) {
            case '1':
                printf("\n\tAddition       : %d + %d = %d", ph1[i], ph2[i], ph1[i] + ph2[i]);
                break;
            case '2':
                printf("\n\tSubtraction    : %d - %d = %d", ph1[i], ph2[i], ph1[i] - ph2[i]);
                break;
            case '3':
                printf("\n\tMultiplication : %d * %d = %d", ph1[i], ph2[i], ph1[i] * ph2[i]);
                break;
            case '4':
                if (ph2[i] == 0)
                    printf("\n\tDivision       : Error! Division by zero.");
                else
                    printf("\n\tDivision       : %d / %d = %.2f", ph1[i], ph2[i], (float)ph1[i] / ph2[i]);
                break;
            case '5':
                if (ph2[i] == 0)
                    printf("\n\tModulus        : Error! Modulus by zero.");
                else
                    printf("\n\tModulus        : %d %% %d = %d", ph1[i], ph2[i], ph1[i] % ph2[i]);
                break;
        }
    }

    for (i = 0; i < advCtr; i++) {
        printf("\n\n\tAdvanced History Entry: %d", i + 1);
        switch (advMenuTrack[i]) {
            case '1':
                printf("\n\tSquare Root     : v%.2lf = %.2lf", adv1[i], advResult[i]);
                break;
            case '2':
                printf("\n\tPower           : %.2lf ^ %.2lf = %.2lf", adv1[i], adv2[i], advResult[i]);
                break;
            case '3':
                printf("\n\tPercentage      : (%.2lf / %.2lf) * 100 = %.2lf%%", adv1[i], adv2[i], advResult[i]);
                break;
            case '4':
                printf("\n\tAverage         : Result = %.2lf", advResult[i]);
                break;
            case '5':
                printf("\n\tFactorial       : %.0lf! = %.0lf", adv1[i], advResult[i]);
                break;
            case '6':
                printf("\n\tSimple Interest : Result = %.2lf", advResult[i]);
                break;
            case '7':
                printf("\n\tCompound Interest : Result = %.2lf", advResult[i]);
                break;
            case 'a':
                printf("\n\tArea of Circle     : p * %.0lf^2 = %.2lf", adv1[i], advResult[i]);
                break;
            case 'b':
                printf("\n\tArea of Rectangle  : %.0lf * %.0lf = %.2lf", adv1[i], adv2[i], advResult[i]);
                break;
            case 't':
                printf("\n\tArea of Triangle   : 0.5 * %.0lf * %.0lf = %.2lf", adv1[i], adv2[i], advResult[i]);
                break;
        }
    }

    printf("\n\nPress Enter To Go Menu Page...");
    getch();
    menuPage();
    return 0;
}

// Store Data for History
int phstordata() {
    if (phctr < 20 && mtctr < 10) {
        menuTrack[mtctr] = ch1;
        ph1[phctr] = num1;
        ph2[phctr] = num2;
        phctr++;
        mtctr++;
    }
    return 0;
}

// Ask user for input
int askUser() {
    num1 = 0;
    num2 = 0;
    printf("\nEnter First Number: ");
    scanf("%d", &num1);
    printf("\nEnter Second Number: ");
    scanf("%d", &num2);
    return 0;
}

int sRoot(){
    double num, result;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Square Root Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Square Root/ \n");

    printf("Enter a Number: ");
    scanf("%lf", &num);
	
	
    if(num >= 0){
        result = sqrt(num);
        printf("Square root of %.2lf is %.2lf\n", num, result);
        
        if (advCtr < 20) {
            advMenuTrack[advCtr] = '1';  
            adv1[advCtr] = num;
            adv2[advCtr] = 0;             
            advResult[advCtr] = result;
            advCtr++;
        }
    } else {
        printf("Error: Square root of a negative number is not a real number.\n");
    }

    holdScreen();
    AdvanceSecondMenu();
    return 0;
}

int powerCalc(){
    double base, exponent, result;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Power Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Power/ \n");

    printf("Enter Base: ");
    scanf("%lf", &base);
    printf("Enter Exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);
	
	if (advCtr < 20) {
        advMenuTrack[advCtr] = '2';
        adv1[advCtr] = base;
        adv2[advCtr] = exponent;
        advResult[advCtr] = result;
        advCtr++;
    }
    
    holdScreen();
    AdvanceSecondMenu();
    return 0;
}

int percentage(){
    double total, obtained, percentage;
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Percentage Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Percentage/ \n");

    printf("Enter Total Marks: ");
    scanf("%lf", &total);
    printf("Enter Obtained Marks: ");
    scanf("%lf", &obtained);

    if (total > 0) {
        percentage = (obtained / total) * 100;
        printf("Percentage = %.2lf%%\n", percentage);
        
        if (advCtr < 20) {
	        advMenuTrack[advCtr] = '3';
	        adv1[advCtr] = total;
	        adv2[advCtr] = obtained;
	        advResult[advCtr] = percentage;
	        advCtr++;
    	}
    } else {
        printf("Error: Total marks must be greater than zero.\n");
    }

    holdScreen();
    AdvanceSecondMenu();
    return 0;

	
}

int averageNum() {
    int count, i;
    double num, sum = 0, average;

    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Average Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Average/ \n");

    printf("Enter how many numbers: ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Error: Count must be greater than zero.\n");
    } else {
        for(i = 1; i <= count; i++) {
            printf("Enter number %d: ", i);
            scanf("%lf", &num);
            sum += num;
        }
        average = sum / count;
        printf("Average = %.2lf\n", average);

       
        if (advCtr < 20) {
            advMenuTrack[advCtr] = '4';   
            adv1[advCtr] = sum;           
            adv2[advCtr] = count;         
            advResult[advCtr] = average;
            advCtr++;
        }
    }

    holdScreen();
    AdvanceSecondMenu();
    return 0;	
}

int factorial(){
	int n, i;
    long long fact = 1;

    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Factorial Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Factorial/ \n");

    printf("Enter a any Number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %lld\n", n, fact);
        
        if (advCtr < 20) {
            advMenuTrack[advCtr] = '5';     
            adv1[advCtr] = n;               
            adv2[advCtr] = 0;               
            advResult[advCtr] = (double)fact;
            advCtr++;
        }
        
    }

    holdScreen();
    AdvanceSecondMenu();
    return 0;
	
}

int sInterest(){
	float p, r, t, si;
    system("cls");
    printf("\n");
    printf("\n\nLocation: Menu/Advance Menu/Simple Interest\n");
    printf("\nEnter Principal Amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("\n\tSimple Interest = %.2f", si);
	
	if (advCtr < 20) {
        advMenuTrack[advCtr] = '6';    
        adv1[advCtr] = (int)p;         
        adv2[advCtr] = (int)t;         
        advResult[advCtr] = si;        
        advCtr++;
    }
	
    holdScreen();
    AdvanceSecondMenu();
    return 0;
}

int cInterest(){
 	float p, r, t, ci;
    system("cls");
    printf("\n");
    printf("\n\nLocation: Menu/Advance Menu/Compound Interest\n");
    printf("\nEnter Principal Amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);

    ci = p * (pow((1 + r / 100), t)) - p;

    printf("\nCompound Interest = %.2f", ci);
	
	if (advCtr < 20) {
        advMenuTrack[advCtr] = '7';    
        adv1[advCtr] = (int)p;         
        adv2[advCtr] = (int)t;         
        advResult[advCtr] = ci;        
        advCtr++;
    }
    
    holdScreen();
    AdvanceSecondMenu();
    return 0;
}

int area() {
    int choice;
    double areaValue;

    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Area Calculator  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Advance Menu/Area Calculations/ \n");

    printf("Choose Shape to Calculate Area:\n");
    printf("\t1. Circle\n");
    printf("\t2. Rectangle\n");
    printf("\t3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            double radius;
            printf("Enter Radius of Circle: ");
            scanf("%lf", &radius);
            areaValue = 3.14 * radius * radius;
            printf("Area of Circle = %.2lf\n", areaValue);
            if (advCtr < 20) {
                advMenuTrack[advCtr] = 'a';
                adv1[advCtr] = (int)radius;
                adv2[advCtr] = 0;
                advResult[advCtr] = areaValue;
                advCtr++;
            }
            break;
        }
        case 2: {
            double length, width;
            printf("Enter Length: ");
            scanf("%lf", &length);
            printf("Enter Width: ");
            scanf("%lf", &width);
            areaValue = length * width;
            printf("Area of Rectangle = %.2lf\n", areaValue);
            if (advCtr < 20) {
                advMenuTrack[advCtr] = 'b';
                adv1[advCtr] = (int)length;
                adv2[advCtr] = (int)width;
                advResult[advCtr] = areaValue;
                advCtr++;
            }
            break;
        }
        case 3: {
            double base, height;
            printf("Enter Base: ");
            scanf("%lf", &base);
            printf("Enter Height: ");
            scanf("%lf", &height);
            areaValue = 0.5 * base * height;
            printf("Area of Triangle = %.2lf\n", areaValue);
            if (advCtr < 20) {
                advMenuTrack[advCtr] = 't';
                adv1[advCtr] = (int)base;
                adv2[advCtr] = (int)height;
                advResult[advCtr] = areaValue;
                advCtr++;
            }
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    holdScreen();
    AdvanceSecondMenu();
    return 0;
}

// Calculation Functions
int add() {
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t        Adding Input Numbers  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Addition \n");
    askUser();
    phstordata();
    printf("\n\tAddition       : %d + %d = %d", num1 , num2 , num1 + num2);
    holdScreen();
    SecondMenu();
    return 0;
}

int sub() {
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t       Subtracting Input Numbers  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Subtraction \n");
    askUser();
    phstordata();
    printf("\n\n\tSubtraction    : %d - %d = %d", num1 , num2 , num1 - num2);
    holdScreen();
    SecondMenu();
    return 0;
}

int mul() {
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t      Multiplying Input Numbers  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Multiplication \n");
    askUser();
    phstordata();
    printf("\n\n\tMultiplication : %d * %d = %d", num1 , num2 , num1 * num2);
    holdScreen();
    SecondMenu();
    return 0;
}

int divid() {
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t       Dividing Input Numbers  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Division \n");
    askUser();
    phstordata();
    if (num2 == 0) {
        printf("\n\tError: Cannot divide by zero!\n");
    } else {
        printf("\n\n\tDivision       : %d / %d = %.2f", num1 , num2 , (float)num1 / num2);
    }
    holdScreen();
    SecondMenu();
    return 0;
}

int mod() {
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t       Remaindering Input Numbers  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Modulus \n");
    askUser();
    phstordata();
    if (num2 == 0) {
        printf("\n\tError: Cannot take modulus by zero!\n");
    } else {
        printf("\n\n\tModulus        : %d %% %d = %d", num1 , num2 , num1 % num2);
    }
    holdScreen();
    SecondMenu();
    return 0;
}

// Hold Screen
int holdScreen() {
    printf("\n\nPress Enter to continue...");
    getch();
    return 0;
}

// Exit Program
int exitPro() {
	printf("\n\nProgram developed by Md Sonu");
	printf("\nThank you for using this program! Have a great day!");
    return 0;
}

// End Message
int endmes() {
    printf("\n\n--------------------------------\n");
    return 0;
}


//Set Color

int backgroundcolor() {
	system("cls");
	int bgChoice;
	printf("\n");
    printf("\t\t\t\t\t         Set Background Color  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    
    printf("\n\nLocation: Menu/Set Background Color\n");
    printf("\nChoose Any Background Color\n");

    printf("\n\t1. WHITE");
    printf("\n\t2. BLACK");
    printf("\n\t3. BLUE");
    printf("\n\t4. GREEN");
    printf("\n\t5. CYAN");
    printf("\n\t6. RED");
    printf("\n\t7. MAGENTA");
    printf("\n\t8. YELLOW");
    printf("\n\t9. DARKGRAY\n");
    printf("\n\t0. Skip Bg Color");

    printf("\n\nChoose Any Operation (0 to 9): ");
    scanf("%d", &bgChoice);

    switch (bgChoice) {
        case 1: textbackground(WHITE);
			if(1) textcolor(BLACK);    break;
        case 2: textbackground(BLACK);
			if(2) textcolor(WHITE); break;
        case 3: textbackground(BLUE); break;
        case 4: textbackground(GREEN); break;
        case 5: textbackground(CYAN); break;
        case 6: textbackground(RED); break;
        case 7: textbackground(MAGENTA); break;
        case 8: textbackground(YELLOW); break;
        case 9: textbackground(DARKGRAY); break;
        case 0: return 0;
        default: printf("\nInvalid Choice Please Choose Again.");
			getch();
            backgroundcolor(); 
            break;
    }
    
    printf("\n\nPress any key to choose text color...");
    getch();
}

int textcolor_menu() {
	system("cls");
	int textChoice;
	printf("\n");
    printf("\t\t\t\t\t          Set Text Color  \n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\n\nLocation: Menu/Set Background Color/Set Text Color \n");
    printf("\nChoose Any Text Color Don't Choose Same Color\n");

    printf("\n\t1. WHITE");
    printf("\n\t2. BLACK");
    printf("\n\t3. BLUE");
    printf("\n\t4. GREEN");
    printf("\n\t5. CYAN");
    printf("\n\t6. RED");
    printf("\n\t7. MAGENTA");
    printf("\n\t8. YELLOW");
    printf("\n\t9. DARKGRAY\n");
    printf("\n\t0. Skip Text Color");

    printf("\n\nChoose Any Operation (0 to 9): ");
    scanf("%d", &textChoice);

    switch (textChoice) {
        case 1: textcolor(WHITE);
			if(1) textbackground(BLACK);
		 break;
        case 2: textcolor(BLACK); 
			if(2) textbackground(WHITE);break;
        case 3: textcolor(BLUE); break;
        case 4: textcolor(GREEN); break;
        case 5: textcolor(CYAN); break;
        case 6: textcolor(RED); break;
        case 7: textcolor(MAGENTA); break;
        case 8: textcolor(YELLOW); break;
        case 9: textcolor(DARKGRAY); break; 
        case 0: return 0;
        default: printf("\nInvalid Choice Please Choose Again.");
			getch();
            textcolor_menu(); 
            break; 
    }
    
    printf("\n\nPress any key to choose text color...");
    getch();
}

int color() {
    backgroundcolor();
    system("cls");  
    textcolor_menu();
	system("cls"); 
	menuPage();

    return 0;
}

