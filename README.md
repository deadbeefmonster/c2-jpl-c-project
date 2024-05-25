# A C2 coded using JPL C coding standards 
This is a fun project to try coding a network server with database storage in C using the JPL C coding restrictions. It isn't meant to be practical but more so a project of many challenges. Sure, one could code a C2 without these restrictions and in a language that isn't C, greatly improving development speed and perhaps removing a ton of frustrations, but this is an exercise in building feature-compatible things with drastic restrictions coding in C that should avoid almost all typical C vulnerabilities one normally finds.

I'll use the CLion IDE to develop on macOS with a deploy target for macOS, NetBSD, OpenBSD, FreeBSD, and some Linux distro (in that order). It'd also be cool to target FreeRTOS, too. A C2 running on an embedded system sounds pretty awesome to me!

## Pros and Cons
Here are some potential and actual pros and cons of this project.
### Pros
* light on resources (small binary size, minimal memory usage, etc)
* extreme solid for reliability
* more secure than typical C application
### Cons
* takes much longer to develop, not only just by using C but using a restrictive C coding standard
* some functions and libraries won't be usable due to heap memory allocation, so will need to rewrite those to work around it
* may not be as performant as C2s written in other languages

# JPL C coding standard - 10 rules

* Avoid complex flow constructs, such as goto and recursion.
* All loops must have fixed bounds. This prevents runaway code.
* Avoid heap memory allocation.
* Restrict functions to a single printed page.
* Use a minimum of two runtime assertions per function.
* Restrict the scope of data to the smallest possible.
* Check the return value of all non-void functions, or cast to void to indicate the return value is useless.
* Use the preprocessor sparingly.
* Limit pointer use to a single dereference, and do not use function pointers.
* Compile with all possible warnings active; all warnings should then be addressed before release of the software.

## References

* https://en.wikipedia.org/wiki/The_Power_of_10:_Rules_for_Developing_Safety-Critical_Code
* http://web.eecs.umich.edu/~imarkov/10rules.pdf

