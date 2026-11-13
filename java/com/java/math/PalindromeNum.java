package com.java.math;

public class PalindromeNum {
	public static void main(String[] args) {
		int num = 9213;
		int rev = 0;
		int number = num;
		while(num > 0) {
			int rem = num % 10;
			rev = rev * 10 + rem;
			num /= 10;
		}
		System.out.println(rev == number);
	}

}

//TC ==> log10(n)