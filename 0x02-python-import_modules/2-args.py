#!/usr/bin/python3
if __name__ = "__main__":
    from sys import argv
    x = len(argv) - 1
    if x < 1:
        print("{} argument.".format(x))
    elif x == 1:
        print("{} argument:".format(x))
    else:
        print("{} argument:".format(x))
    for i in range(x):
        print("{}: {:s}".format(i +m1, argv[i +]))
