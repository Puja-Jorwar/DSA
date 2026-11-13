package com.java.math;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
public class DivisorsOfNum {
	public static void main(String[] args) {
		int num = 36;
		//TC ==> O(n)
//		for(int i = 1; i <= num; i++) {
//			if(num % i == 0) {
//				System.out.println(i);
//			}
//		}
		//O(sqrt(n) + nlog(n){for internal sorting)
		List<Integer> list = new ArrayList<>();
		for(int i = 1; i <= Math.sqrt(num);i++) {
			if(num % i == 0) {
				list.add(i);
				if( num / i != i) {
					list.add(num/i);
				}	
			}
		}
		//int numOfDivisors = list.size();
			System.out.println(list.size());
			//number of factors  nlog(n)
			Collections.sort(list);
			System.out.println(list);
		
	}

}


//u can store in list and sort the list u can get sorted list
