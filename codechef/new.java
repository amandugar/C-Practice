package codechef;

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int tt = sc.nextInt();
        while (tt-- > 0) {
            String ass = sc.next(), bss = sc.next();
            char[] assc = ass.toCharArray();
            char[] bssc = bss.toCharArray();
            int n = ass.length();
            int c = 0;
            for (int i = 0; i < n; i++) {
                if (assc[i] == bssc[i])
                    continue;
                int p = i;
                while (p < n && (assc[p] != bssc[p])) {
                    assc[p] = bssc[p];
                    p += 2;
                }
                c++;
            }
            System.out.println(c);
        }
    }
}
