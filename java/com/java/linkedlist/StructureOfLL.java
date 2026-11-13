package com.java.linkedlist;


class Node {
	private int val;
	private Node nextNode;
	
	Node(int val, Node nexNode ){
		this.setVal(val);
		this.setNextNode(nexNode) ;
	}
	
	Node(int val){
		this.setVal(val);
		this.setNextNode(null) ;
	}

	public int getVal() {
		return val;
	}

	public void setVal(int val) {
		this.val = val;
	}

	public Node getNextNode() {
		return nextNode;
	}

	public void setNextNode(Node nextNode) {
		this.nextNode = nextNode;
	}
	
	
}

public class StructureOfLL {
	public static void main(String[] args) {
		int[] arr = {2,3,4,5};
		Node yNode = new Node(arr[0]);
		System.out.println(yNode.getVal());
		
	}
	
	
	

}
