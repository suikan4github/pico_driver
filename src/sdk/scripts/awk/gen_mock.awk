# Generate the implementation of member function. 
{ 
# $0 : void print_dma_ctrl ( dma_channel_hw_t *channel )
# Save the return type and function name ( name include "(" )
    RETTYPE=$1; 
    FUNCNAME=$2;
    $1=""; 
    $2 = "";
    $3 = "";
# We don't need the ")" at the end of line. 
    $NF="";
# Remove the modifiers. 
    for( i=NF; i>0; i--){
        if (($i == "volatile" ) )
            $i = "";
    };
# $0 :   dma_channel_hw_t channel 
# We re-split the entire line to avoid the confusion. 
# The line has only parameters and their types. 
    numparam=split($0, parameters);

#print out the MOCK header
if (parameters[1]=="void")
    print "MOCK_METHOD0(";
else
    print "MOCK_METHOD" numparam / 2 "(";

# print funciton name and return type. 
print FUNCNAME "," RETTYPE "("
# print out parameters 
for( i=1; i<=numparam; i++)
    print parameters[i];
# print out the end of function call statement. 
    print "));"; 
}