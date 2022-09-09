
/**
 * @file ProblemSixth.java
 * @author amir aghazadeh (cssu.ama@gmail.com)
 * @brief check if graph has cycle
 * @version 0.1.0
 * @date 2022-09-09
 * @id 2code6
 * @copyright Copyright (c) 2022
 *
 */

import java.util.Scanner;

public class ProblemSixth {
    public static void main(String[] args) {
        var scanner = new Scanner(System.in);

        int V = scanner.nextInt();
        int E = scanner.nextInt();

        for (int i = 0; i < E; i++) {
            int src = scanner.nextInt();
            int dest = scanner.nextInt();
        }

        System.out.println((V > E ? 0 : 1));

        scanner.close();
    }
}