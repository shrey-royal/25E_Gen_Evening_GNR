import java.util.Scanner;

public class ScanData {
    public static void main(String[] args) {
        //create an object
        // Scanner sc; //declaration of scanner obj
        //instantiate the scanner object
        // sc = new Scanner(System.in);
        
        Scanner sc = new Scanner(System.in);

        // System.out.print("next method input (one-word): ");
        // String next = sc.next();
        // System.out.println("next(one-word): " + next);

        // to clear the buffer
        // sc.nextLine();
        // System.out.print("nextLine method input (multiple words): ");
        // String nextLine = sc.nextLine();
        // System.out.println("nextLine (string): " + nextLine);

        // System.out.print("Integer method input: ");
        // int nextInt = sc.nextInt();
        // System.out.println("nextInt(): " + nextInt);

        // System.out.print("Float method input: ");
        // float nextFloat = sc.nextFloat();
        // System.out.println("nextFloat(): " + nextFloat);

        // System.out.print("Double method input: ");
        // double nextDouble = sc.nextDouble();
        // System.out.println("nextDouble(): " + nextDouble);

        // System.out.print("Boolean method input: ");
        // boolean nextBoolean = sc.nextBoolean();
        // System.out.println("nextBoolean(): " + nextBoolean);

        System.out.print("Byte method input: ");
        byte nextByte = sc.nextByte();
        System.out.println("nextByte(): " + nextByte);

        sc.close(); //to prevent resource leak
    }
}

/*
Scanner Class: Used to scan the data from the user.
> this class comes from a package named java.util

Methods used in Scanner class: 
1. next(): Used to scan a word from the user
2. nextLine(): used to scan the whole line from the user
3. nextInt(): used to scan integer data from the user
4. nextFloat(): used to scan float data from the user
5. nextDouble(): used to scan double data from the user
6. nextBoolean(): used to scan boolean data from the user
7. nextByte(): used to scan byte data from the user

Creating Object of Scanner Class:

Scanner obj = new Scanner(Source);

If the Method doesn't match with the data entered by the user then it will return InputMismatchException


Tasks:

1. Write a Java program to take the user's name as input and display a personalized greeting message.

2. Create a program that prompts the user to enter their age, and then determine if they are eligible for voting (age >= 18).

3. Build a Java application to collect the user's contact information (name, email, and phone number) and display it back to them.

4. Develop a program that takes a user's birthdate as input and calculates their current age.

5. Implement a program to accept the user's weight and height, and then calculate their BMI (Body Mass Index).

6. Create a simple password validation system that prompts the user to enter a password and checks if it meets certain criteria (e.g., minimum length, containing numbers and special characters).

7. Write a Java program that reads a user's favorite color and displays it back to them in a sentence.

8. Develop a program to take the user's marks in three subjects (Math, Science, and English) and calculate their average score.

9. Create a program that asks the user for their address, including street, city, state, and zip code, and displays the complete address.

10. Implement a basic calculator program that accepts two numbers and an operator (+, -, *, /) as input, performs the corresponding operation, and displays the result.

*/
