package com.java.linkedlist;

public class checkIfPresent {
	public static class Node{
		int data;
		Node nextNode;
		
		public Node(int data, Node nextNode ) {
			this.data = data;
			this.nextNode = nextNode;
		}
		
		public Node(int data ) {
			this.data = data;
			this.nextNode = null;
		}
	}
	
	public static Node traversLL(int[] arr) {
		Node headNode = new Node(arr[0]);
		Node moverNode = headNode ;
		
		for(int i= 1; i < arr.length; i++) {
			Node tempNode = new Node(arr[i]);
			moverNode .nextNode = tempNode;
			moverNode = tempNode ;
			
		}
		return headNode ;
	}
	
	public static boolean ifPreset(Node headNode ,int val ) {
		
		Node tempNode = headNode ;
		while(tempNode != null) {
			if(tempNode.data == val) return true;
			tempNode =tempNode .nextNode ;
		}
		return false;
		
		
	}
	
	public static void main(String[] args) {
		int[] arr = {34,45654,65,7,57,6,56,7};
		Node headNode = traversLL(arr);
		boolean res = ifPreset(headNode, 5);
		System.out.println(res);
	}

}
