package com.java.math;

public class ExtractDg {
	public static void main(String[] args) {
		int a = 123;
		while( a > 0) {
			int rem = a % 10;
			System.out.println(rem);
			a /= 10;
		}
		
	}

}
//TC ==> o(log10(n))
//whenever there is division based 10 tc will be log10(n)
//whenever there is division based 2 tc will be log2(n)
//likewise
//remeber thsi always whener there is divisibility TC will be in log