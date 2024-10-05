{ 
    print "__attribute__((weak))",  $0; 
    print "{"; 
    print "    assert( false & \"Error :", module, "library is missing in link phase.\");"; 
    print "}" 
}