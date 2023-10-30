#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

void print_elf_info(Elf64_Ehdr header);
/**
 ** main - a program that displays the information contained
 ** in the ELF header at the start of an ELF file.
 ** @argc: the number fo arguments
 ** @argv: the arguments
 ** Return: 1 (Success), 0 (failure).
 **/

int main(int argc, char *argv[])
{
int  fr, r;
Elf64_Ehdr header;
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}
fr = open(argv[1], O_RDONLY);
if (fr == -1)
{
dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]);
exit(98);
}
r = read(fr, &header, sizeof(Elf64_Ehdr));
if (r == -1 || r != sizeof(Elf64_Ehdr))
{
dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
exit(98);
}
printf("ELF Header:\n");
print_elf_info(header);
if (close(fr) == -1)
{
dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fr);
exit(98);
}
return (0);
}
/**
 ** print_elf_info - Display information from the ELF header
 ** @header: The ELF header to extract information from.
 **/
void print_elf_info(Elf64_Ehdr header)
{
int index;
printf("  Magic:   ");
for (index = 0; index < EI_NIDENT; index++)
{
printf("%02x", header.e_ident[index]);
if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
printf("  Class:                             ");
switch (header.e_ident[EI_CLASS])
{
case ELFCLASS64:
printf("ELF64\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
default:

printf("Invalid class\n");
}
printf("  Data:                              ");
switch (header.e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
}
printf("Invalid data \n");
printf("  Version:                           %d", header.e_ident[EI_VERSION]);
switch (header.e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
printf("\n");
break;
}
}
