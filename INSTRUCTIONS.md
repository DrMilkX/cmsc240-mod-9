# cmsc240-mod-9
Module #9 - Corporate Restructure

**DUE 9/28 @ 11:59pm**

## Instructions

You've just been hired as the new programmer for this office -- but the code is horrendous! Please refactor the code using structs, maps, and enums to make it more efficient. However! 
**Make sure the output is the exact same as the old management's (see [old_mgmt.cpp](old_mgmt.cpp))** (so your boss won't notice the difference)!

**Create a new file called `new_mgmt.cpp` and compile it to an executable called `office` **

1. Convert the salaries into an `enum`

2. Convert the days of the week into an `enum`

3. Convert the office supplies into a `map` with the *key* being the name of the supply/appliance and the status being the *value* (`map<string,string>`)

4. Convert the employees and manager to a `struct` (can be the same struct!)

5. Make the `display info` functions part of the employee and manager `structs` definition(s)


## Requirements

[1pt] - Name, Date, and program description at the top of the code in a header comment

[1pt] - No errors or warnings

[2pt] - Salaries converted to `enums`

[2pt] - Days of the week converted to `enums`

[2pt] - Office supplies are converted to a `map`

[2pt] - Employees and manager are objects of a `struct`

[2pt] - Displayed info about the employees and manager are function in the struct definition

[3pt] - Code outputs the exact same information as `old_mgmt.cpp`

**15 pts total**

