
typedef struct screen_t{
	int row_amt;
	int col_amt;
	int **pixel_array;
}screen_t;

void init(int window_col_size, int window_row_size);
