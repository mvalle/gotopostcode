f = open('gotopostcode.c')

for line in f:
    if "goto" in line:
        print line.strip().strip("goto").strip(";").strip()+":"
    elif ":" in line:
        if len(line.strip()) == 2:
            print "//"+line.strip().strip(":")
