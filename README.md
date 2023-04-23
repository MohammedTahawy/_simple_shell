Simple Shell is a command line interpreter developed in C language that emulates the most basic functionality of `sh`.

The man page is a file wich explains in detail how Simple Shell works. If you want see a full explanation of this function you can run our man page this way:
```
$ man ./man_1_simple_shell
```
To compile the program this command has to be executed:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
To run the shell is like this:
```
$ ./hsh
```

This list is of the built-in commands, apart from those found in the PATH.

| Command  | Description |
| -------- |:------------|
| env      | Displays the current environment |
| exit     | Causes the shell to terminate |


The shell can be used in interactive or non-interactive mode.
The interactive mode is how the shell is normally used, the executable file is run and we can write commands, here is an example:
```
$ ./hsh
hsh$ ls
file1 file2 directory/
hsh$ pwd
/home/user/simple_shell/
hsh$ echo hello_world
hello_world
hsh$ exit
$
```

In the non-interactive mode you pass the command to the executable file with a pipe operator, as shown in the following example:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2

$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
```

## Authors <img src="https://cdn-icons-png.flaticon.com/128/2463/2463510.png" width=50 align=center>

* Mohamed Tahawy <a href="https://github.com/MohammedTahawy" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>

<br>

> Project developed during the [ALX Software engineering ](https://www.alxafrica.com) program.
