/************************************
 * @File            main.rs         *
 *                                  *
 * @Author          Levent Kaya     *
 *                                  *
 * @Brief           LSH(LiteShell)  *
 * **********************************/

use std::env;

/*
 * Function declarations fot builtin shell commands
 */

fn take_arguments()
{
    let args: Vec<_> = env::args().collect();
    if args.len() > 1{
        print!("the argument is {}", args[1]);
    }
}

fn lsh_cd()
{
    take_arguments();
}

fn main()
{
    lsh_cd();
}

