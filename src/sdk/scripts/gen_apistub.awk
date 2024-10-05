{ 
    # We need attribute weak to allow the Pico SDK lib function will override. 
    print "__attribute__((weak))",  $0; 
    print "{"; 
    print "    assert( false && \"Error : The", module, "library is missing in the link phase.\");"; 
    print "}" 
}