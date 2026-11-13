package com.binary_search;

public class SmallestLetter {
	//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

	    public char nextGreatestLetter(char[] letters, char target) {

	        int start = 0;
	        int end = letters.length - 1;

	        while (start <= end) {
	            int mid = (start + end) / 2;
	            if (letters[mid] <= target)
	                start = mid + 1;
	            else if (letters[mid] >= target)
	                end = mid - 1;

	        }
	        if (start == letters.length)
	            return letters[0];
	        else
	            return letters[start];

	    }


	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
