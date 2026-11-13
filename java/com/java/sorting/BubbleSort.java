package com.java.sorting;

import java.util.Arrays;

public class BubbleSort {
	/*
	 *comparing adjutant element and swap it
	 *1. {3,1,5,4,2}
	 *2. {1,3,5,4,2}
	 *3. {1,3,4,5,2}
	 *4. {1,3,4,2,5}
	 *this is 1st pass we get largest element at last then secondlast then we get third last likewise
	 */
	
	//TC==> O(n*n)
	public static void bubbleSor(int[] arr) {
		for(int j = arr.length - 1; j > 0; j--) {
			
			for(int i = 0; i < j; i++) {
				if(arr[i] > arr[i + 1]) {
					//swap
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
			}
		}
		
		
	}
	public static void main(String[] args) {
		int[] arr = { 2,3,45,2,5,6,55,32,5,2,3,6,8};
		bubbleSor(arr);
		System.out.println(Arrays.toString(arr));
		
	}
	

}
