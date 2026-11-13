package com.binary_search;

public class OrderAgnosticBS {
	
	static int orderAgnosticBS(int[] arr, int target) {
		
		int start = 0;
		int end = arr.length - 1;
		
		boolean isAsc = arr[start] < arr[end];
		
		while(start <= end) {
			int mid = start + (end - start) / 2;
			
			if(arr[mid] == target) return mid;
			
			if(isAsc) {
				if(target < arr[mid]) end = mid - 1;
				else start = mid + 1;
				
			}else {
				if(target > arr[mid]) end = mid - 1;
				else start = mid + 1;
			}
		}
		return -1;
		
	}
	
	public static void main(String[] args) {
		int[] arr = {23,12,11,9,8,7,6,4,3,2};
		int ans = orderAgnosticBS(arr,23);
		System.out.println(ans);
		
	}
	
}
