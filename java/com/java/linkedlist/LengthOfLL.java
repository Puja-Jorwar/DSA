package com.java.linkedlist;

public class LengthOfLL {
	public static class Node{
		int data;
		Node nextNode ;
		
		public Node(int data, Node nextNode) {
			this.data = data;
			this.nextNode = nextNode ;
		}
		public Node(int data) {
			this.data = data;
			this.nextNode = null;
		}
	}
	
	public static Node traverseLL(int[] arr) {
		Node headNode = new Node(arr[0]);
		Node moverNode = headNode ;
		
		for(int i = 1; i < arr.length; i++) {
			Node tempNode = new Node(arr[i]);
			moverNode .nextNode = tempNode ;
			moverNode = tempNode ;
		}
		return headNode ;
	}
	
	public static int lengthOfLL(Node headNode) {
		Node tempNode = headNode ;
		int length = 0;
		while(tempNode != null) {
			length++;
			tempNode = tempNode .nextNode ;			
		}
		return length;
		
	}
	public static void main(String[] args) {
		int[] arr = {3425,643,644,34,456,46};
		Node headNode = traverseLL( arr);
		
		int length = lengthOfLL(headNode);
		System.out.println(length);
		
	}

}
