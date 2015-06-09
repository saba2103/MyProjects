/****************************************************************
						 FUNCTION 1 : LOAD FUNCTION
****************************************************************/

void load(float d)
{
clock_t start, end;
start = clock();
do
{
end = clock();
}while(((end-start)/CLK_TCK)<=d);
}
