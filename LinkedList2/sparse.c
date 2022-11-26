#include<stdio.h>
#include<stdlib.h>
#define R 4
#define C 5

struct row_list{
	int row_number;
	struct row_list *link_down;
	struct value_list *link_right;
};

struct value_list{
	int column_index;
	int value;
	struct value_list *next;
};

void create_value_node(int data, int j, struct row_list **z){
	struct value_list *temp, *d;

	temp = (struct value_list*)malloc(sizeof(struct value_list));
	temp->column_index = j+1;
	temp->value = data;
	temp->next = NULL;

	if ((*z)->link_right==NULL)
		(*z)->link_right = temp;
	else{
		d = (*z)->link_right;
		while(d->next != NULL)
			d = d->next;
		d->next = temp;
	}
}

void create_row_list(struct row_list **start, int row, int column, int Sparse_Matrix[R][C]){
	for (int i = 0; i < row; i++){
		struct row_list *z, *r;
		z = (struct row_list*)malloc(sizeof(struct row_list));
		z->row_number = i+1;
		z->link_down = NULL;
		z->link_right = NULL;
		if (i==0)
			*start = z;
		else{
			r = *start;
			while (r->link_down != NULL)
				r = r->link_down;
			r->link_down = z;
		}

		for (int j = 0; j < 5; j++){
			if (Sparse_Matrix[i][j] != 0){
				create_value_node(Sparse_Matrix[i][j], j, &z);
			}
		}
	}
}

void display(struct row_list *start){
	struct row_list *r;
	struct value_list *z;
	r = start;

	while (r != NULL){
		if (r->link_right != NULL){
			printf("row=%d \n", r->row_number);
			z = r->link_right;

			while (z != NULL){
				printf("column=%d value=%d \n",
					z->column_index, z->value);
				z = z->next;
			}
		}
		r = r->link_down;
	}
}

int main(){
	int Sparse_Matrix[R][C] = {
		{0 , 0 , 3 , 0 , 4 },
		{0 , 0 , 5 , 7 , 0 },
		{0 , 0 , 0 , 0 , 0 },
		{0 , 2 , 6 , 0 , 0 }
	};

	struct row_list* start = NULL;

	create_row_list(&start, R, C, Sparse_Matrix);

	display(start);
	return 0;
}
