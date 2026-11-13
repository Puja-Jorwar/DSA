package com.java.math;
public class GcdUsingRecursion {
	public static int gcdOfNum(int num,int num2) {
		//gcd(n1,n2) = gcd((n1-n2),n2) where n1 > n2
		
		//Base case
		if(num == num2) {
			return num;
		}
		return gcdOfNum(
				Math.max(num, num2) - Math.min(num, num2),
				Math.min(num, num2)
		);
			
		}
	//Tc == > O(max(n1,n2))
		
	public static void main(String[] args) {
		int n1 = 20;
		int n2 = 15;
		System.out.println(gcdOfNum(n1,n2));

		
	}

}
