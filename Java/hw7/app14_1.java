import java.io.*;

public class app14_1 {
    public static void main(String[] args) throws IOException {
        char data[] = new char[128];
        FileReader fr = new FileReader("test.txt");

        int size = fr.read(data);
        String str = new String(data, 0, size); // enter = \r\n (two chars)
        System.out.println("characters read : " + size);
        System.out.println(str);
    }
}
