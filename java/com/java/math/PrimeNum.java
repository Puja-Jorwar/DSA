package com.java.math;
import java.util.*;

public class PrimeNum {
	public static void main(String[] args) {
		//definition==> number that has exactly 2 factors 1 & itself
		//TC ==> O(sqrt(n))
		int num = 11;
		int cnt = 0;
		for(int i = 1; i*i < num; i++) {
			if(num % i == 0) {
				cnt++;
			
				if((num / i != i)) {
					cnt++;
				}
			}
		}
		System.out.println(cnt == 2);
	}

}
