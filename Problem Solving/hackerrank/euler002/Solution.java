package hackerrank.euler002;

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(evenFiboSum(n));
        }
    }

    public static long evenFiboSum(long untilNumber) {
        long sum = 0L;
        long fiboNumber = 1;
        long previous;
        for(long nextFibonacciNumber = 1L; nextFibonacciNumber < untilNumber; nextFibonacciNumber = fiboNumber + previous) {
            if (nextFibonacciNumber % 2 == 0) {
                sum += nextFibonacciNumber;
            }
            previous = fiboNumber;
            fiboNumber = nextFibonacciNumber;
        }
        return sum;
    }
}

