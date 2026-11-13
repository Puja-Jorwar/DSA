package com.java.linkedlist;

public class TraversalInLL {
	public static class Node{
		private int data;
		
		private Node nextNode;
		
		public Node (int data, Node nextNode) {
			this.data = data;
			this.nextNode = nextNode;
		}
		
		public Node (int data) {
			this.data = data;
			this.nextNode = null;
		}
	}
	
	public static Node print(int[] arr) {
		Node headNode = new Node(arr[0]);
		Node moverNode = headNode ;
		for( int i = 1; i < arr.length; i++) {
			Node tempNode = new Node(arr[i]);
			moverNode .nextNode = tempNode;
			moverNode = tempNode ;
		}
		return headNode ;
	}
	public static void main(String[] args) {
		int[] arr = {453,546,456};
		Node head = print(arr);
		Node tempNode = head ;
		
		while(tempNode != null) {
			System.out.println(tempNode.data );
			tempNode = tempNode.nextNode;
		}
	}

}
