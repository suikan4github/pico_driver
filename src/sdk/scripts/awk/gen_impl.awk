# Generate the implementation of member function. 
{ 
# $0 : void print_dma_ctrl( dma_channel_hw_t *channel )
# Save the return type and function name ( name include "(" )
    RETTYPE=$1; 
    FUNCNAME=$2;
    $1=""; 
    $2 = "";
# $0 :   dma_channel_hw_t *channel )

# print out comment for the ease of read .
    print "// --------------------------------------------------";
# print out the function prototype for the SDK API.
    print "extern \"C\" " RETTYPE,  FUNCNAME, $0 ";"; 

# print out the function head. 
    print RETTYPE, "rpp_driver::SdkWrapper::", FUNCNAME, $0; 
# print out the start of function body. 
    print "{";
# In the case of the the function has return type, 
# place "return" from the inside of state ment. 
    if (RETTYPE != "void"){
        print "return";
    } 
# We call the C funciotn which has same name with the member function. 
    print "::" FUNCNAME $3;
# We don't need the "(" at the begining of line. 
    $3="";
# We don't need the ")" at the end of line. 
    $NF="";
# Remove the pointer identifyer and other modifier. 
    gsub("*", "");
    for( i=NF; i>0; i--){
        if (($i == "volatile" ) || ($i == "const") || ($i == "enum"))
            $i = "";
    };
# $0 :   dma_channel_hw_t channel )
# We re-split the entire line to avoid the confusion. 
# The line has only parameters and their types. 
    numparam=split($0, parameters);

# print out parameters without type, if it is not void.  
    if ($2!="void"){
        for( i=2; i<=numparam; i+=2)
          print parameters[i];
    };
# print out the end of function call statement. 
    print ");"; 
# print out the end of funciton implementation. 
    print "}" 
}