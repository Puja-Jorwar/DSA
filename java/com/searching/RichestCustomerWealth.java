package com.searching;

public class RichestCustomerWealth {
	
	 public int maximumWealth(int[][] accounts) {
	        int totalWealth = 0;
	        for(int customer = 0; customer < accounts.length; customer++){
	            int CutomerTotalWealth = 0;
	            for(int wealth  = 0; wealth < accounts[customer].length; wealth++){
	                CutomerTotalWealth += accounts[customer][wealth];
	            }
	            totalWealth = Math.max(CutomerTotalWealth,totalWealth);
	        }
	        return totalWealth;


	    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
