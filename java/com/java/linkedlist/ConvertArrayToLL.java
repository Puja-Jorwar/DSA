package com.java.linkedlist;


public class ConvertArrayToLL {
	
	public static class Node{
		int data;
		Node nextNode;
		
		public Node(int data,Node nextNode ) {
			this.data = data;
			this.nextNode = nextNode;
		
		}
		
		public Node(int data) {
			this.data = data;
			this.nextNode = null;
		}

	}
	
	public static void print(int[] arr) {
		Node headNode = new Node(arr[0]);
		
		Node moverNode = headNode ;
		
		for(int i = 1; i < arr.length; i++) {
			Node tempNode = new Node(arr[i]);
			
			moverNode.nextNode = tempNode;
			moverNode = tempNode;
		}
		System.out.println(headNode .data);
	}
	
	public static void main(String[] args) {
		int[] arr = {3,4,2,45,55};
		print(arr);
		
	}
	
	
	
	


}
