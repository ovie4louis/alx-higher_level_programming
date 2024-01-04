#!/usr/bin/python3
if __name__ == "__main__":
    from hidden_4 import *
    all_name = dir()
    for i in range(0, len(all_name)):
        if all_name[i][:2] != "__":
            print("{:s}".format(all_name[i]))
