print "switch(cur)\n {"

for o in xrange(1, 10):

    print "case '%d':" %o
    print "//next cur"
    print "switch(cur)\n {"
    for i in xrange(0, 10):
        print "   case: '%d':" % i

    print "   goto valid;"
    print "   default:"
    print "   goto invalid;"
    print "  }"
    

print "  default:"
print "    goto invalid;"
print "}"
