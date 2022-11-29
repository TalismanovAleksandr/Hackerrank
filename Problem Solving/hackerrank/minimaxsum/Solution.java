package hackerrank.minimaxsum;

import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'miniMaxSum' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void miniMaxSum(List<Integer> arr) {
        // Write your code here
        if (arr == null || arr.isEmpty()) {
            System.out.println("0 0");
            return;
        }
        int min = arr.get(0);
        int max = arr.get(0);
        int sum = arr.get(0);
        for (int i = 1; i < arr.size(); i++) {
            int value = arr.get(i);
            if (value < min) {
                min = value;
            } else if (value > max) {
                max = value;
            }
            sum += value;
        }


        System.out.println((sum - max) + " " + (sum - min));
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        Result.miniMaxSum(arr);

        bufferedReader.close();
    }
}
