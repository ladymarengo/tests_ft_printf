# tests_ft_printf
Tests for Hive Helsinki "Ft_printf" project

# Usage
- Clone this repository in the root of the ft_printf project. 
- If ft_printf.h header is not in the root, change the path to it in the second row of main.c file.
- Go to tests folder.
- "make test" command will run all tests first with the original printf and then with user's. After that it will print the difference between two outputs to "diff.txt" file.
It will look like this:

```
1989,1991c1989,1991
< format string is %- 6ld, value is 1: | 1    | 6
< format string is %- 6ld, value is 100: | 100  | 6
< format string is %- 6ld, value is 2147483647: | 2147483647| 11
---
> format string is %- 6ld, value is 1: |1    | 5
> format string is %- 6ld, value is 100: |100  | 5
> format string is %- 6ld, value is 2147483647: |2147483647| 10
```

Lines with "<" is the original printf output and ">" is user's. "%- 6ld" here is the format string used in the test, everything between "|" is the output and the number in the end is the return value. For example in this particular case diff shows us that the user's ft_printf doesn't handle space flag.

- In tests.c file you can change tests, for example add new format strings or values for different conversions. If you come up with something interesting, feel free to contact me and I will update the repo!
- Some of the tests cause undefined behavior, for example for c and s conversions. Make sure to recheck!
- You can also use "make main" to compile old_main.c file with user's ft_printf (don't forget to check the path to the header in it too). There are some random tests there now, you can delete them and add yours if you want to test something without running everything else (for example you fixed this space flag problem and want to check it specifically).
