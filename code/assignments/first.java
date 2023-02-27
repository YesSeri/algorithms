import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 * first use std::{env, str::FromStr}; fn main() { let args: Vec<String> =
 * env::args().collect(); let split: Vec<String> = args[1].split("\n").map(|s|
 * s.to_string()).collect(); let mut res: Vec<u32> =
 * split[1].split_whitespace().map(|s|{FromStr::from_str(s).unwrap()}).collect();
 * res.sort(); let arr: Vec<u32> = res.into_iter().rev().collect(); let sum: u32
 * = arr.iter().skip(2).step_by(3).sum(); println!("{}", sum); }
 *
 */
public class first {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = Integer.parseInt(s.nextLine());
        String[] arrStr = s.nextLine().split(" ");
        ArrayList<Integer> prices = new ArrayList<Integer>();
        s.close();
        for (int i = 0; i < n; i++) {
            prices.add(Integer.parseInt(arrStr[i]));
        }
        Collections.sort(prices, Collections.reverseOrder());
        int sum = 0;
        for (int i = 2; i < prices.size(); i += 3) {
            sum += prices.get(i);
        }
        System.out.println(sum);
    }

}
