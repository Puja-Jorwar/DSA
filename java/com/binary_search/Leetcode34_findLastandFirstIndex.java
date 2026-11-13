package com.binary_search;

public class Leetcode34_findLastandFirstIndex {
	    public int[] searchRange(int[] nums, int target) {
	        int[] ans = { firstIndex(nums, target), lastIndex(nums, target) };
	        return ans;
	    }

	    public int firstIndex(int[] nums, int target) {
	        int n = nums.length;
	        int start = 0;
	        int end = n - 1;
	        int ans = -1;
	        while (start <= end) {
	            int mid = (start + end) / 2;
	            if (target < nums[mid]) {

	                end = mid - 1;
	            } else if (target == nums[mid]) {
	                ans = mid;
	                end = mid - 1;
	            } else {
	                start = mid + 1;
	            }
	        }
	        return ans;

	    }

	    public int lastIndex(int[] nums, int target) {
	        int n = nums.length;
	        int start = 0;
	        int end = n - 1;
	        int ans = -1;
	        while (start <= end) {
	            int mid = (start + end) / 2;
	            if (target > nums[mid]) {
	                start = mid + 1;
	            } else if (target == nums[mid]) {
	                ans = mid;
	                start = mid + 1;
	            } else {
	                end = mid - 1;
	            }
	        }
	        return ans;

	    }

	
}
