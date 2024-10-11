{ 

    # Save the return type and function name ( name include "(" )
    RETTYPE=$1; 
    FUNCNAME=$2;
    $1=""; 
    $2 = "";    # print out comment for the ease of read .
    print "// --------------------------------------------------";
    # print out the function prototype for the SDK API.
    print "extern \"C\" ", RETTYPE, FUNCNAME $0 ";"; 

    # We need attribute weak to allow the Pico SDK lib function will override. 
    print "#if defined(__GNUC__) || defined(__clang__)"
    print "__attribute__((weak))", RETTYPE, FUNCNAME,$0;
    print "#elif defined(_MSVC_VER)"
    print "#if defined(_M_IX86) // MSVC for x86"
    print "#pragma comment(linker, \"/alternatename:_" FUNCNAME "=__weak_" FUNCNAME"\")"
    print "#elif defined(_M_AMD64) // MSVC for AMD64"
    print "#pragma comment(linker, \"/alternatename:" FUNCNAME "=_weak_" FUNCNAME"\")"
    print "#endif // _MSVC_VER"
    print RETTYPE, "_weak_" FUNCNAME,$0;
    print "#else"
    print "#error \"Unknown compiler.\""
    print "#endif"
    print "{"; 
    print "    assert( false && \"Error : The", module, "library is missing in the link phase.\");"; 
    print "}" 
}