import java.util.*;
import java.io.*;


public class matchstring {
	public static void main(String[] args) {
		PrintStream output = new PrintStream(System.out);
		Scanner input = new Scanner(System.in);

		String s = input.nextLine();
		int i = 0, j = 0, cntr = 0, cntrx = 0, cntry = 0;
		for (i = 0; i < s.length(); i++) {
			if (s.charAt(i) == 'x') {
				cntrx++;
			} else {
				cntry++;
			}
		}

		if (cntry == cntrx) {
			for (i = 0; i < s.length(); i++) {
				if (s.charAt(i) == 'x') { cntr++; }
				if (s.charAt(i) == 'y') { break; }
			}
			int cn = cntr;
			int res = cntr;
			for (int t = 1; t <= cntr; t++) {
				if (s.charAt(res) == 'y') { cn--; res++; }
				else { break; }
			}
			if (cn == 0) { output.println(1); }
			else if (cn < 0) { output.println(0); }
			else { output.println(0); }


		} else {
			output.println(0);
		}
		output.println(cntrx);
		output.println(cntry);

	}
}