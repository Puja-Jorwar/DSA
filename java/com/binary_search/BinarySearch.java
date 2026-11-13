package com.binary_search;

public class BinarySearch {
	
	public static boolean searchEle(int[] arr, int target) {
		int left = 0,right = arr.length - 1;
		
		while(left <= right) {
			int mid = left + (right - left)/2;
			if(target < arr[mid]) right = mid - 1;
			else if(target > arr[mid])left = mid +1;
			else return true;
		}
		return false;
	}

	public static void main(String[] args) {
		int[] arr = {1,2,3,4,5,6,7,8,23,233};
		int target = 0;
		System.out.println(searchEle(arr,target));

	}

}
