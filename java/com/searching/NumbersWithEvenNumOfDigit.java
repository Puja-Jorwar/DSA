package com.searching;

public class NumbersWithEvenNumOfDigit {

	public static void main(String[] args) {
		int[] arr = {12,343,454,676,5678};
		System.out.println(evenDgitNum(arr));
		
	}
	//count number in array with even number of digits
		public static int evenDgitNum(int[] arr) {
			int even = 0;
			for(int i = 0; i < arr.length; i++) {
				if(numOfDigit(arr[i]) % 2 == 0) even++;
			}
			return even;
		}
		
		public static int numOfDigit(int num) {
			int cnt = 0;
			while(num > 0) {
				num /= 10;
				cnt++;
			}
			return cnt;
		}
		
		//shortcut to find number of digits (int)(Math.log10(num) + 1
	
	

}
