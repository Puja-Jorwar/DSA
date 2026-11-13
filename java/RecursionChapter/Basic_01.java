package RecursionChapter;

//when a function call itsel until a special condition met
//segmentation , stack Overflow ==> numerous function call (infinity or beyond computer memory)

public class Basic_01 {
	
	public static int print(int cnt) {
		
		if(cnt == 4) return 4;
		return print(cnt + 1);//you can not do cnt++;
	}
	public static void main(String[] args) {
		System.out.println(print(0));
		
	}

}
//recursion tree