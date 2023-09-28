#include<stdio.h>
#include<string.h>
union union_example
{
    int integer;
    float decimal;
    char name[15];
};
struct struct_example
{
    int integer;
    float decimal;
    char name[15];
};
void main()
{
    union union_example u,*ptr;
    struct struct_example s,*t;
    ptr=&u;
	t=&s;
	
	printf("sizeof structure : %d\n", sizeof(s));
    printf("sizeof union : %d\n", sizeof(u));

	u.integer = 183;
    u.decimal = 90;
	strcpy(u.name, "Rajesh ");
	printf("\nunion data:\n integer: %d\n decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);

    s.integer = 183;
	strcpy(s.name, "Rajesh Mittal");
    s.decimal = 90;
	printf("\nstructure  data:\n integer: %d\n decimal: %.2f\n name: %s\n",s.integer, s.decimal, s.name);
  
    printf("\n union data:");
	u.integer = 240;
	printf("\ninteger: %d", u.integer);
	u.decimal = 120;
	printf("\ndecimal: %f", u.decimal);
	strcpy(u.name, "C programming");
	printf("\nname: %s\n", u.name);
	
    u.integer = 1218;
	printf("union data:\n integer: %d\n decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);
  
    strcpy(ptr->name, "George");
	printf("union data:\n integer: %d\n decimal: %.2f\n name: %s\n",ptr->integer, ptr->decimal, ptr->name);


}
