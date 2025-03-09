import java.util.Scanner;

public class Array1d {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);

        System.out.println(arr.length);

        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter arr["+i+"]: ");
            arr[i] = sc.nextInt();
        }

        System.out.print("\narr["+arr.length+"] = { ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println("\b\b }");

        // for (int i : arr) {
        //     System.out.print(i + ", ");
        // }
        // System.out.println();
    }
}
