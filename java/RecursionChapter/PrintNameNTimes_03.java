package RecursionChapter;

public class PrintNameNTimes_03 {
	
	public static void printName(int n, String name) {
		if(n == 0) {
			return;
		}
		printName(n -1, name);
		System.out.println(name);
		
		
	}
	public static void main(String[] args) {
		String name = "Puja";
		printName(5, name);
	}

}
