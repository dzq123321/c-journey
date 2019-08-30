#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
enum input
{
	EXIT,
	add,
	dele,
	search,
	modify,
	clearall,
	sort,
	show
};
#define NAME_MAX 20
#define SEX_MAX 10
#define ADDR_MAX 30
#define NUM_MAX 20
#define MAX_NUM 1000
typedef struct pepleinfo
{
	char name[NAME_MAX];
	char sex [SEX_MAX];
	char addre[ADDR_MAX];
	short age;
	char num[NUM_MAX];
}pepleinfo;
//typedef struct  contact
//{
//	pepleinfo data[MAX_NUM];
//	int sz;
//} contact;
typedef struct  contact
{
	pepleinfo* data;
	int sz;
	int capacity;
} contact;
void initicontact (contact* pcon);
void showcontact (contact* pcon);
void addcontact(contact* pcon);
void delecontact(contact* pcon);
void searchcontact(contact* pcon);
void modifycontact(contact* pcon);
void clearallcontact(contact* pcon);
void sortcontact(contact* pcon);
