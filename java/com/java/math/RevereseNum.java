package com.java.math;

public class RevereseNum {
	public static void main(String[] args) {
		int num = 40100;
		int rev = 0;
		while(num > 0) {
			int rem = num % 10;
			rev = rev * 10 + rem;
			num /= 10;
		}
		System.out.println(rev);
	}

}
