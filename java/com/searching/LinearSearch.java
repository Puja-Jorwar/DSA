package com.searching;

import java.util.Arrays;

public class LinearSearch {
	
	public static boolean linearSearch(int[] arr, int target) {
		int n = arr.length;
		if(n == 0) return false;
		for(int i = 0; i < n; i++) {
			if(arr[i] == target) return true;
		}
		return false;
	}
	
	public static boolean linearSearchChar(String s, char target) {
		int n = s.length();
		if(n == 0) return false;
		for(int i = 0; i < n; i++) {
			if(s.charAt(i) == target) return true;
		}
		return false;
	}
	
	public static boolean linearSearchChar2(String str, char target) {
		if(str.length() == 0) return false;
		for(char c : str.toCharArray()) {
			if(c == target) return true;
		}
		return false;
	}
		
	//search in range of array
	public static boolean search2(int[] arr, int start,int end,int target) {
		int n = arr.length;
		if(n == 0 ) return false;
		for(int i = start; i <= end; i++) {
			if(arr[i] == target) return true;
		}
		return false;
	}
	
	//find min element inn the array
	public static int minEle(int[] arr) {
		if(arr.length == 0) return -1;
		int min = arr[0];
		for(int element : arr) {
			if(element < min) min = element;
		}
		return min;
	}

	public static void main(String[] args) {
		int[] arr = {10,20,30,49,232,1};
		boolean ans = linearSearch(arr,12);
		System.out.println(ans);
		
		String str = "kunal";
		System.out.println(linearSearchChar2(str, 'p'));
		
	    String a = Arrays.toString(str.toCharArray());
	    System.out.println(a);
	    System.out.println(Arrays.toString(arr)); 
		
		// TODO Auto-generated method stub

	}

}
