import java.util.Scanner;
import java.util.HashSet;

public class Setexample {
	public static void main(String[] args) {
		HashSet<Character> letters = new HashSet<>();
		Scanner sc = new Scanner(System.in).useDelimiter("\\W*");
		while (sc.hasNext()) letters.add(sc.next().charAt(0));
		System.out.println(letters.size());
	}
}
