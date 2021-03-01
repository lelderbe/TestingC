#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct		s_bmp {
	struct {
		unsigned short	file_type;
		unsigned		file_size;
		unsigned short	reserved1;
		unsigned short	reserved2;
		unsigned		pixel_offset;
	}				file;

	struct {
		unsigned		header_size;
		int				image_width;
		int				image_height;
		unsigned short	planes;
		unsigned short	bpp;
		unsigned		compression;
		unsigned		image_size;
		int				x_pixels;
		int				y_pixels;
		unsigned		total_colors;
		unsigned		important_colors;
	}				info;

}					t_bmp;

typedef struct		s_data {
	unsigned		arr[25];
}					t_data;

void	print_bitmap_file_header(t_bmp *bmp, int fd)
{
	write(fd, &bmp->file.file_type, sizeof(bmp->file.file_type));
	write(fd, &bmp->file.file_size, sizeof(bmp->file.file_size));
	write(fd, &bmp->file.reserved1, sizeof(bmp->file.reserved1));
	write(fd, &bmp->file.reserved2, sizeof(bmp->file.reserved2));
	write(fd, &bmp->file.pixel_offset, sizeof(bmp->file.pixel_offset));
}

void	print_bitmap_info_header(t_bmp *bmp, int fd)
{
	write(fd, &bmp->info, sizeof(bmp->info));
}

void	print_img_data(t_bmp *bmp, int fd, t_data *data)
{
	write(fd, &data, sizeof(data));
}

void	init_bmp(t_bmp *bmp, t_data *data)
{
	memset(bmp, 0, sizeof(*bmp));
	memset(data, 0, sizeof(*data));
	bmp->file.file_type = 0x4D42;
	//bmp->file.file_size = 312;
	bmp->file.pixel_offset = 54;
	bmp->info.header_size = 40;
	bmp->info.image_width = 5;
	bmp->info.image_height = 5;
	bmp->info.planes = 1;
	bmp->info.bpp = 32;
}

int		main(void)
{
	const char	*filename = "test.bmp";
	t_bmp		bmp;
	t_data		data;
	int			fd;

	init_bmp(&bmp, &data);
	fd = open(filename, O_WRONLY | O_CREAT);
	printf("fd: %d\n", fd);
	print_bitmap_file_header(&bmp, fd);
	print_bitmap_info_header(&bmp, fd);
	print_img_data(&bmp, fd, &data);
	//write(fd, &bmp, sizeof(bmp));
	close(fd);


}
