# Generate the fake function framework definition of api. 
{ 
# $0 : void print_dma_ctrl( dma_channel_hw_t *channel )
# Save the return type and function name ( name include "(" )
    RETTYPE=$1; 
    FUNCNAME=$2;
    $1=""; 
    $2 = "";
    $3 = "";
    $NF = "";
# $0 :   dma_channel_hw_t *channel )
# print out the function head. 

if (RETTYPE=="void")
    print "FAKE_VOID_FUNC(" FUNCNAME ;
else    
    print "FAKE_VALUE_FUNC(" RETTYPE "," FUNCNAME  ;

# Remove the pointer identifyer and other modifier. 
gsub(" \\*", "* ");
for( i=NF; i>0; i--){
    if (($i == "volatile" ) || ($i == "const") )
        $i = "";
};

# $0 :   dma_channel_hw_t channel 
# We re-split the entire line to avoid the confusion. 
# The line has only parameters and their types. 
numparam=split($0, parameters);

# out put the sequcen of the type. 
for (i=1; i<=numparam; i+=2)
{
    print "," parameters[i];
}

# print ");" at end of line. 
print ");"

}