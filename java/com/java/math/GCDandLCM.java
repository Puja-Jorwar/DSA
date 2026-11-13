package com.java.math;

public class GCDandLCM {
	
	public static int gcdOfNum(int num,int num2) {
		//there will be always gcd as 1
		//TC==> O(min(num,num1)
		int gcd = 1;
		for(int i = Math.min(num, num2); i > 1;i--) {
			if(num % i == 0 && num2 % i == 0) return gcd = i;
		}
		
		return gcd;
		
	}
	public static int lcmOfNum(int num,int num2) {
		
	}
	public static void main(String[] args) {
		int num = 9;
		int num2 = 12;
		System.out.println(gcdOfNum(num,num2));
		
	}

}
