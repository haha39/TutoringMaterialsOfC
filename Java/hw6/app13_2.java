package Java.hw6;

public class app13_2 {
    public static void main(String[] args) {
        try {
            int arr[] = new int[5];
            arr[10] = 7;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("index out of bound!!");
            System.out.println("exception = " + e);
        }
        System.out.println("end of main()!!!!");
    }
}
