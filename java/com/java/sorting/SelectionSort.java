package com.java.sorting;

import java.util.Arrays;

public class SelectionSort {
	//TC ==>O(n*n)
	//use case ==> performs well in small lists/ arrays
	public static int[] selectionSort(int[] arr) {
		for(int j = 0; j < arr.length - 1;j++) {
			//find minNumber index
			int min = j;
			for(int i = j; i < arr.length; i++) {
				if(arr[i] < arr[min]) min = i;
			}
			int temp = arr[j];
			arr[j] = arr[min];
			arr[min] = temp;
		}
		return arr;
	}
	public static void main(String[] args) {
		//select element and put it on there sorted position
		int[] arr = {3,1,8,3,0};
		int[] a = selectionSort(arr);
		System.out.println(Arrays.toString(a));
	}

}
