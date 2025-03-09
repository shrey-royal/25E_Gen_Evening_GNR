import java.util.Random;

public class Array1d_1 {
    public static void main(String[] args) {
        System.out.print("Enter size: ");
        int size = Integer.parseInt(System.console().readLine());

        int []arr = new int[size];

        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            arr[i] = r.nextInt(100);
        }

        for (int i : arr) {
            System.out.print(i + ", ");
        }
        System.out.println();
    }
}
