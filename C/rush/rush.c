#include <unistd.h>

void initialize_array(char *arr, int items)
{
  int index;

  index = 0;
  while(index < items)
  {
    arr[index] = '\0';
    index++;
  }
}
void ft_putstr(char *str)
{
  while(*str)
    write(1, str++, 1);
}

void ft_putmatrix(char *str, int size)
{
  int index = 0;
//   write(1, "\033[2J\033[H", 7);
  while(index < size * size)
  {
    write(1, &str[index], 1);
    if(index % size == size -1)
      write(1, "\n", 1);
    index++;
  }
}


void initialize_array2(unsigned char *arr, int items)
{
  int index;

  index = 0;
  while(index < items)
  {
    arr[index] = '\0';
    index++;
  }
}
void ft_putchar(char c)
{
  write(1, &c, 1);
}



int is_right_visibility_valid(int size, char *data, int visibility, int position)
{
  int index;
  char max_value;
  int count;
  char value;

  count = 0;
  max_value = 0;
  value = '\0';
  index = size - 1;

  while(index >= 0)
  {
    value = data[position / size * size + index];
    if(max_value < value )
    {
      max_value = value;
      count++;
    }
    index--;
  }
  return (count <= visibility);
}

int is_left_visibility_valid(int size, char *data, int visibility, int position)
{
  int index;
  char max_value;
  int count;
  char value;

  count = 0;
  max_value = 0;
  value = '\0';
  index = 0;

  while(index < size)
  {
    value = data[position / size * size + index];
    if(max_value < value )
    {
      max_value = value;
      count++;
    }
    index++;
  }
  return (count <= visibility);
}

int is_top_visibility_valid(int size, char *data, int visibility, int position)
{
  int index;
  char max_value;
  int count;
  char value;

  count = 0;
  max_value = 0;
  value = '\0';
  index = 0;

  while(index < size)
  {
    value = data[(position % size) + (index * size)];
    if(max_value < value )
    {
      max_value = value;
      count++;
    }
    index++;
  }
  return (count <= visibility);
}

int is_bottom_visibility_valid(int size, char *data, int visibility, int position)
{
  int index;
  char max_value;
  int count;
  char value;

  count = 0;
  max_value = 0;
  value = '\0';
  index = size - 1;

  while(index >= 0)
  {
    value = data[(position % size) + (size * index)];
    if(max_value < value )
    {
      max_value = value;
      count++;
    }
    index--;
  }
  return (count <= visibility);
}

int is_distinct_in_row(int size, char *data, int position)
{
  int index;
  unsigned char value;
  unsigned char map[256];

  initialize_array2(map, 256);
  value = '\0';
  index = 0;
  while(index < size)
  {
    value = (unsigned char) data[position / size * size + index];
    if(!value)
    {
      index++;
      continue;
    }
    if (map[value] == 1)
    {
      return (0);
    }
    map[value] = 1;
    index++;
  }
  return (1);
}

int is_distinct_in_col(int size, char *data, int position)
{
  int index;
   unsigned char value;
  unsigned char map[256];

  initialize_array2(map, 256);

  value = '\0';
  index = 0;

  while(index < size)
  {
    value = (unsigned char) data[(position % size) + (index * size)];
    if(!value)
    {
      index++;
      continue;
    }
    if (map[value] == 1)
    {
      return (0);
    }
    map[value] = 1;
    index++;
  }
  return (1);
}



int main(int argc, char **argv)
{
  char data[17];
  int index;
  int col;
  int row;
  int v_t;
  int v_b;
  int v_l;
  int v_r;
  int size;

  if(argc < 2) {
    ft_putstr("Error\n");
    return (1);
  }

  initialize_array(data, 17);
  index = 0;
  size = 4;
  data[index] = '1';
  while(index < 16 && index >= 0)
  {
    col = index % size;
    row = index / size;
    v_t = argv[1][(0 * size + col) * 2 ] - '0';
    v_b = argv[1][(1 * size + col) * 2 ] - '0';
    v_l = argv[1][(2 * size + row) * 2 ] - '0';
    v_r = argv[1][(3 * size + row) * 2 ] - '0';


    if(data[index] > '4')
    {
      data[index] = '\0';
      data[index - 1] ++;
      index--;
    }
    else if(
       is_distinct_in_col(size, data, index)
       && is_distinct_in_row(size, data, index)
       && is_top_visibility_valid(size, data, v_t, index)
       && is_bottom_visibility_valid(size, data, v_b, index)
       && is_left_visibility_valid(size, data, v_l, index)
       && is_right_visibility_valid(size, data, v_r, index)
    ){
      index++;
      data[index] = '1';
    }
    else if(data[index] <= '4')
    {
      data[index]++;
    }
    else
    {
      data[index] = '\0';
      data[index - 1] ++;
      index--;
    }
    // ft_putmatrix(data, size);
    // usleep(100000);
  }

  if(index > 0)
  {
    ft_putmatrix(data, size);
    // usleep(100000);

  }
  else
  {
    ft_putstr("Error\n");
  }
}
