package com.java.math;

public class ArmstrongNum {
	//371 = 3cube + 7cube + 1cube = 3771
	//1634 = 1cube + 6cube + 3cube + 4cube = 1634
	public static void main(String[] args) {
		int num = 371;
		int number = num;
		int armStrong = 0;
		while(num > 0) {
			int rem = num % 10;
			armStrong += rem*rem*rem;
			num /= 10;
		}
		System.out.println(number == armStrong);
		
		
	}

}
