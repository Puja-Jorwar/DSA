package com.binary_search;

public class PeakOfMountain {
	public static int peakMountain(int[] arr) {
		 int start = 0;
			int end = arr.length - 1;
			int max = -1;
	        int maxInd = -1;
			while(start <= end) {
				int mid = start + (end - start) / 2;
				if(arr[mid] > max) {
	                max = arr[mid];
	                maxInd = mid;
	            }
				if(arr[mid + 1] > arr[mid]) start = mid + 1;
				else end = mid - 1;
			}
			return maxInd;
	}
	public static void main(String[] args) {
		int[] arr = {1, 2, 3, 4, 5, 6,5,4,3,2, 1, 0};
		System.out.println(peakMountain(arr));
	}

}
