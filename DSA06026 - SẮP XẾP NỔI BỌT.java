import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Nghich
{
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < n; i++)
        {
            int tmp = sc.nextInt();
            list.add(tmp);
        }
        int idx = 1;
        for(int i = 0; i < n; i++)
        {
            boolean check = false;
            for(int j = 0; j < n - i - 1; j++)
            {
                if(list.get(j) > list.get(j + 1))
                {
                    int tmp = list.get(j);
                    list.set(j, list.get(j + 1));
                    list.set(j + 1, tmp);
                    check = true;
                }
            }
            if(!check) break;
            System.out.print("Buoc " + idx++ + ": ");
            for(int j = 0; j < n; j++)
            {
                System.out.print(list.get(j) + " ");
            }
            System.out.println();
        }
    }
}
