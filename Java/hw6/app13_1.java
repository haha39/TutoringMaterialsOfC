package Java.hw6;

public class app13_1 {
    public static void main(String[] args) {
        try {
            int arr[] = new int[5];
            arr[10] = 7;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("index out of bound!!");
        } finally {
            System.out.println("this time is always executed!!!");
        }
        System.out.println("end of main()!!!!");
    }
}
