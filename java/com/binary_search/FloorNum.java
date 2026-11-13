package com.binary_search;

public class FloorNum {
	
	//return the num which greatest <= target
	public static int floorNum(int[] arr, int target) {
		int left = 0,right = arr.length - 1;
		
		while(left <= right) {
			int mid = left + (right - left)/2;
			if(target < arr[mid]) right = mid - 1;
			else if(target > arr[mid])left = mid +1;
			else return arr[mid];
		}
		return arr[right];
	}

	public static void main(String[] args) {
		int[] arr = {1,2,3,4,5,6,7,8,23,233};
		int target = 22;
		System.out.println(floorNum(arr,target));

	}

}
