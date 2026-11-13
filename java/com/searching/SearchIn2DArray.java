package com.searching;

import java.util.Arrays;

public class SearchIn2DArray {
	
	public static int[] search2DArray(int[][] arr,int target) {
		for(int row = 0; row < arr.length; row++) {
			for(int col = 0; col < arr[row].length; col++) {
				if(arr[row][col] == target) return new int[] {row,col};
			}
			
		}
		return new int[] {-1, -1};
		
		
	}
	
	//max item in 2D array
	public static int search2DArrayMax(int[][] arr) {
		int max = Integer.MIN_VALUE;
		for(int row = 0; row < arr.length; row++) {
			for(int col = 0; col < arr[row].length; col++) {
				if(arr[row][col] > max) max = arr[row][col];
			}
			
		}
		return max;
		
	}
	
	//for each loop
	public static int MAx(int[][] arr) {
		int max = Integer.MIN_VALUE;
		for(int[] row: arr) {
			for(int element : row) {
				if(element > max) max = element;
			}
		}
		return max;
		
	}
	public static void main(String[] args) {
		int[][] arr = {
				{1,2,3,4},
				{2,34,5,5},
				{4,6,7,8,4}
		};
		int[] ans = search2DArray(arr,4); //format of return type {row,col};
		System.out.println(Arrays.toString(ans));
		
		int max= MAx(arr);
		System.out.println(max);
	}

}
