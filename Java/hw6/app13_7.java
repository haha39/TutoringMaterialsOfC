import java.util.*;

public class app13_7 {
    public static void main(String[] args) {
        int num;
        Scanner scn = new Scanner(System.in);

        try {
            System.out.println("please input an integer");
            num = scn.nextInt(); // try to enter 'k'
        } catch (Exception e) {
            System.out.println(e);
        }

        scn.close();
    }
}
