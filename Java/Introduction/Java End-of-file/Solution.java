import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = null;
        int count = 1;
        while((line = br.readLine()) != null) {

            System.out.println(count + " " + line);
            if (line.contains("end-of-file.")) {
                break;
            }
            count++;
        }

        br.close();
    }
}
