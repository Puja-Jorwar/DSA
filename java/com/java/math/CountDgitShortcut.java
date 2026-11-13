package com.java.math;

public class CountDgitShortcut {
	public static void main(String[] args) {
		int n = 12345;
		int cnt = (int)(Math.log10(n) + 1);
		System.out.println(cnt);
	}

}
