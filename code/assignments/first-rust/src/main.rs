use std::{env, str::FromStr};
fn main() {
    let args: Vec<String> = env::args().collect();
    let split: Vec<String> = args[1].split("\n").map(|s| s.to_string()).collect();
    let mut res: Vec<u32> = split[1].split_whitespace().map(|s|{FromStr::from_str(s).unwrap()}).collect();
    res.sort();
    let arr: Vec<u32> = res.into_iter().rev().collect();
    let sum: u32 = arr.iter().skip(2).step_by(3).sum();
    println!("{}", sum);
}
