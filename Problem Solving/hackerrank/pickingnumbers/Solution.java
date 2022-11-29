package hackerrank.pickingnumbers;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'pickingNumbers' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY a as parameter.
     */

    public static int pickingNumbers(List<Integer> a) {
        // Write your code here
        int maxLength = 0;
        List<Integer> subarray = new ArrayList<Integer>();

        for (int i = 0; i < a.size(); i++) {
            subarray = findValidSubarray(a, a.get(i));
            if ((subarray.size() > maxLength)) {
                maxLength = subarray.size();
            }
        }
        return maxLength;
    }

    private static List<Integer> findValidSubarray(final List<Integer> array, final Integer integer) {
        final List<Integer> subarray = new ArrayList<Integer>();
        for (final int elem : array) {
            if ((elem == integer) || (elem + 1 == integer)) {
                subarray.add(elem);
            }
        }
        return subarray;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        int result = Result.pickingNumbers(a);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
