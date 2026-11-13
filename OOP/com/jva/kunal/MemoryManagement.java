package com.jva.kunal;

import java.util.Arrays;

public class MemoryManagement {
	public static void main(String[] args) {
		int[]a = {1,2,3,4};
		System.out.println(Arrays.toString(a));
		System.out.println(a);
		int [] b = a;
		System.out.println(Arrays.toString(b));
		System.out.println(b);
		b[0] = 10;
		System.out.println(Arrays.toString(a));
		System.out.println(a);
		System.out.println(Arrays.toString(b));
		System.out.println(b);
		
		
		//garbage
		int num = 10;
		System.out.println(num);
		num = 20;//10 will remove becox no reff pointing to 10
		
		System.out.println(num);
		}

}
