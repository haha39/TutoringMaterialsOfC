import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class app14_2 {
    public static void main(String[] args) throws IOException {

        String str;
        FileReader fr = new FileReader("test.txt");
        BufferedReader bfr = new BufferedReader(fr);

        while ((str = bfr.readLine()) != null) {
            System.out.println(str);
        }

        fr.close();
    }
}
