import java.io.*;

public class app13_8 {
    public static void main(String[] args) {

        BufferedReader buf;
        String str;

        buf = new BufferedReader(new InputStreamReader(System.in));

        try {
            System.out.println("input a string");
            str = buf.readLine();
            System.out.println("string : " + str);

        } catch (IOException e) {

        }
    }
}
