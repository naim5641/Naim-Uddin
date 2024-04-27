import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Calculator!");

        // Prompt user to enter two numbers
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

        // Prompt user to choose an operation
        System.out.println("Select operation: ");
        System.out.println("1. Addition (+)");
        System.out.println("2. Subtraction (-)");
        System.out.println("3. Multiplication (*)");
        System.out.println("4. Division (/)");
        System.out.print("Enter your choice: ");

        int choice = scanner.nextInt();

        double result = 0;

        // Perform the selected operation
        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    System.out.println("Error: Cannot divide by zero!");
                    return; // Exit the program
                }
                break;
            default:
                System.out.println("Invalid operation. Please try again.");
                return; // Exit the program
        }

        System.out.println("Result: " + result);

        // Close the scanner
        scanner.close();
    }
}