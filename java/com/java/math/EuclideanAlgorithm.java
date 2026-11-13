package com.java.math;
public class EuclideanAlgorithm {
	public static int gcdOfNum(int a,int b) {
		//greate % smaller == > 0 
		//if oneof them 0 then other is gcd
		//TC ==> O(logfi(min(a,b)))
		//why fi ==> divide by number is always changing
		while( a > 0 && b > 0) {
			if( a> b) {
				 a = a % b;
			}else if( b > a) {
				b = b % a;
			}
		}
		if( a == 0) return b;
		else return a;
		
	}
		
		
	public static void main(String[] args) {
		int n1 = 52;
		int n2 = 10;
		System.out.println(gcdOfNum(n1,n2));

		
	}

}
