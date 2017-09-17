package p1;
import java.util.Scanner;
public class primeno {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int l;
    System.out.print("Enter an integer");

    l = sc.nextInt();
    if (l >= 2) {

        System.out.println("The prime numbers are"

                + l + "\n");

        for (int i = 2; i <= l; i++) {

            if (isPrime(i)) {

                System.out.println(i);

            }

        }

    } else

        System.out.println("Number is not vaild");



}



public static boolean isPrime(int n) {

    if (n % 2 == 0)

        return (n == 2);

    for (int i = 3; i * i <= n; i += 2) {

        if (n % i == 0)

            return false;

    }

    return true;

}

}