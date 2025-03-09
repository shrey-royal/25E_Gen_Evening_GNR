import java.util.Random;

public class Array2d {
    public static void main(String[] args) {
        int[][] arr = new int[3][3];
        Random random = new Random();
        int r = arr.length, c = arr[0].length;

        // size
        System.out.println("\nRow Size: " + r + ",\tCol Size: " + c);

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = random.nextInt(100);
            }
        }

        
        // System.out.printf("arr[%d][%d] = { \n", arr.length, arr[0].length);
        System.out.println("arr[" + arr.length + "][" + arr[0].length + "] = { ");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("\t");
            for (int j = 0; j < arr[i].length; j++) {
                System.out.printf("%d, ", arr[i][j]);
            }
            System.out.printf("\b\b \n");
        }
        System.out.println("}");
    }
}
