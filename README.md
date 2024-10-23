# Minishell

## Description

Minishell is a simple shell implementation in C. It is a project from the 1337 school curriculum. The goal of this project is to create a simple shell that can handle basic commands, environment variables, and signal handling, it also has to be able to handle redirections and pipes.
it also has a group of built-in commands that are implemented in C.

## Requirements

To run the minishell project, you will need:

- C Compiler (e.g., gcc)
- ReadLine library
- tool make

## Installation

1. Clone the repository:

2. Change the current working directory:

3. Compile the project:
```
make
```
4. Run the program:
```
./minishell
```
## Features

Minishell provides the following features:

- Command execution: Minishell can execute commands entered by the user, including built-in commands and external programs.
- Quoting: Minishell supports single and double quotes to group arguments together.
- Built-in commands: Minishell supports built-in commands such as `cd`, `echo`, `pwd`, `export`, `unset`, `env`, and `exit`.
- Environment variables: Minishell can manage environment variables it including displaying using the `$` symbol, exporting, and unsetting variables.
- Input/output redirection: Minishell supports input/output redirection using `<`, `>`, `>>` and `<<`  symbols.
- Pipes: Minishell supports piping multiple commands together using the `|` symbol.
- Signal handling: Minishell handles signals such as `Ctrl+C` (SIGINT) and `Ctrl+\` (SIGQUIT) gracefully.
- Error handling: Minishell provides informative error messages when commands fail to execute.
- Command history: Minishell supports command history using the `up` and `down` arrow keys.

## Usage

Once you have compiled the `minishell` program and run it, you can start using it as follows:


1. Enter commands at the prompt and press Enter to execute them. For example:
```
$ ls -l
```
2. Use built-in commands such as `cd`, `echo`, `exit`, and `env` as needed. For example:
```bash
$ cd <directory>
```

3. Use input/output redirection and pipes to perform more complex operations. For example:
```
$ ls -l > output.txt
$ cat input.txt | grep "pattern"
```

4. To exit Minishell, use the `exit` command:
```
$ exit
```
