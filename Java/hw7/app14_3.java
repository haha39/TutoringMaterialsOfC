import java.io.FileInputStream;
import java.io.IOException;

public class app14_3 {
    public static void main(String[] args) throws IOException {
        FileInputStream fi = new FileInputStream("test.txt");
        System.out.println("file size : " + fi.available());
        byte ba[] = new byte[fi.available()];

        fi.read(ba);
        System.out.println(new String(ba));
        fi.close();
    }

}
