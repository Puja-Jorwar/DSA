package RecursionChapter;

public class PrintNTimes_02 {
	int cnt = 0;
	public void print(int cnt) {
		if(cnt == 0) return;
		print(cnt - 1);
		System.out.println(cnt);
		
	}
	
	

	public static void main(String[] args) {
		PrintNTimes_02 a = new PrintNTimes_02();
		a.print(10);
		
	}

}
