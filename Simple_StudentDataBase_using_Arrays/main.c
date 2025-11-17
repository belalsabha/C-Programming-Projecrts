/*
 * main.c
 *
 *  Created on: 29/12/2022
 *      Author: Belal
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct information_of_students{char f_name[50];char l_name[50];int id;}position[300];
int sizeofarray=0,input;
void add_student();
void student();
void main_screen();
void quitting();
void add_name();
void view_std_re();
void delete_std();
void update_std();
void back();
main(){
	main_screen();	}
void main_screen(){
	system("cls");
	printf("        Log In As\n\n        1.Admin\n\n        2.Student\n\n        3.exit\n\nEnter your choice\n");
	scanf("%d",&input);
	switch(input){
	case 1:add_student();break;
	case 2:student;break;
	case 3:quitting();break;}}
void add_student(){
	system("cls");
	printf("Logged as Admin\n\n1.Add Student Record\n\n2.View All Sudent Records\n\n3.Update Student Record\n\n4.Delete Student Record\n\n5.Main Menu\n\n6.Exit\n\nENTER YOUR CHOISE\n");
	scanf("%d",&input);
	switch(input){
	case 1:add_name();break;
	case 2:view_std_re();break;
	case 3:update_std();break;
	case 4: delete_std();break;
	case 5: main_screen();break;
	case 6: quitting();break;}}
void student(){
	system("cls");
	printf("YOU ARE IN STUDENT PAGE\n\n\nWELCOME AS STUDENT\n\n\n\n\n");
	back();}
void quitting(){
	system("cls");
	printf("\t\t\t\t\t\tQUITTING THE PROGRAME\n\n\n\n");
	exit(0);}
void add_name(){
	system("cls");
	printf("ENTER YOUR NUBER OF STUDENTS\n");
	scanf("%d",&input);
	for(int i=0;i<input;i++){
		printf("ENTER THE ID OF STUDENT:");
		scanf("%d",&position[sizeofarray].id);
		printf("ENTER YOUR FIRST NAME: ");
		scanf("%s",&position[sizeofarray].f_name);
		printf("ENTER YOUR LAST NAME: ");
		scanf("%s",&position[sizeofarray].l_name);
		printf("\n\n\n");
		sizeofarray++;}
	back();}
void view_std_re(){
	system("cls");
	printf("\t\t\t\t\t\t\|STUDENT RECORD|\n\n\n\nID\t\t\t\t\t\t\t\tNAMES\n");
	for(int i=0;i<sizeofarray;i++){
		printf("%d\t\t\t\t\t\t\t\t%s %s\n",position[i].id,position[i].f_name,position[i].l_name);
	}
	back();}
void update_std(){
	system("cls");
	int a,i,var=0;
	printf("\n\n\n\t\t\t\t\t UPDATE STUDENT RECOED\n\nENTER THE ID OF STUDENT:");
	scanf("%d",&input);
	for(i=0;i<sizeofarray;i++){
		if((input==position[i].id)==1){
			var=1;
			break;}}
	if(var==0){printf("\n\nNOT FOUND STUDENT\n\n");
	back();}
	else{
		printf("THE OLD INFOROMATION IS \nID:%d\t\t NAME: %s  %s\n\n",position[i].id,position[i].f_name,position[i].l_name);
		printf("ENTER THE NEW INFOROMATION\n\n");
		printf("ENTER THE ID OF STUDENT:");
		scanf("%d",&position[i].id);
		printf("ENTER YOUR FIRST NAME: ");
		scanf("%s",&position[i].f_name);
		printf("ENTER YOUR LAST NAME: ");
		scanf("%s",&position[i].l_name);
		printf("\n\n\n\n\n");
		back();}}
void delete_std(){
	system("cls");
	int i,var1=0;
	printf("\n\n\t\t\t\t\tDELETE STUDENT RECOED\n\n\t\t\t\tENTER THE ID OF STUDENT:");
	scanf("%d",&input);
	for(i=0;i<sizeofarray;++i){
		if((input==position[i].id)==1)
		{sizeofarray--;
		var1=1;break;}}
	if(var1==1){
		for( ;i<sizeofarray;i++){
			strcpy(position[i].f_name,position[i+1].f_name);
			strcpy(position[i].l_name,position[i+1].l_name);
			position[i].id=position[i+1].id;
		}printf("\n\n\t\t\t\t\tDELETE IS DONE\n\n");back();}
	else{
		printf("\t\t\t\t\NOT FOUND STUDENT\n\n");back();}}
void back(){
	printf("\n1.Back to main menu\n\n2.BACK TO ADD STUDENT \n\n3.Exit\n\nEnter your choice\n");
	scanf("%d",&input);
	switch(input){
	case 1:main_screen();break;
	case 2:add_student();break;
	case 3: quitting();break;}}



