{ 

    # Save the return type and function name ( name include "(" )
    RETTYPE=$1; 
    FUNCNAME=$2;
    $1=""; 
    $2 = "";    # print out comment for the ease of read .
    print "// --------------------------------------------------";

    # We need attribute weak to allow the Pico SDK lib function will override. 
    print "#if defined(__GNUC__) || defined(__clang__) // Compiler detection"
    print "extern \"C\" ", RETTYPE, FUNCNAME $0 ";"; 
    print "__attribute__((weak))", RETTYPE, FUNCNAME,$0;
    print "#elif defined(_MSC_VER) // Microsoft Visual C"
    print "extern \"C\" ", RETTYPE, "_weak_" FUNCNAME,$0;
    print "#else // Other compilers are not supported" 
    print "#error \"Unknown compiler.\""
    print "#endif // Compiler detection"
    print "{"; 
    print "    assert( false && \"Error : The", module, "library is missing in the link phase.\");"; 
    print "}" 
    print "#if defined(_MSC_VER) // weak binding in MSVC must be after definition"
    print "#if defined(_M_IX86) // for x86"
    print "#pragma comment(linker, \"/alternatename:_" FUNCNAME "=__weak_" FUNCNAME"\")"
    print "#elif defined(_M_AMD64) // for AMD64"
    print "#pragma comment(linker, \"/alternatename:" FUNCNAME "=_weak_" FUNCNAME"\")"
    print "#endif // x86 or amd64"
    print "#endif // _MSC_VER"

}