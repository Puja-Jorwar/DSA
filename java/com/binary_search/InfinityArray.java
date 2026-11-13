package com.binary_search;

public class InfinityArray {
	
	public static int ans(int[] arr, int target) {
		int start = 0;
		int end = 1;
		while(target > arr[end]) {
			int temp = end + 1;
			
			end = end + (end - start + 1) * 2;
			start = temp;
		}
		return searchEle(arr,target, start,end);
		
	}
	
	public static int searchEle(int[] arr, int target, int left, int right) {
		
		
		while(left <= right) {
			int mid = left + (right - left)/2;
			if(target < arr[mid]) right = mid - 1;
			else if(target > arr[mid])left = mid +1;
			else return mid;
		}
		return -1;
	}
	
	public static void main(String[] main) {
		int[] arr = {2,3,5,6,7,8,10,11,12,15,21,23,30,34};
		int target = 15;
		System.out.println(ans(arr,target));
	}

}
