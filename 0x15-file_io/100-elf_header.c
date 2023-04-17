#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * go
 */

int elf_header(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr elf_header;
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }
    
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error opening file %s: %s\n", argv[1], strerror(errno));
        exit(98);
    }
    
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        fprintf(stderr, "Error reading ELF header: %s\n", strerror(errno));
        exit(98);
    }
    
    if (elf_header.e_ident[EI_MAG0] != 0x7f || elf_header.e_ident[EI_MAG1] != 'E' ||
        elf_header.e_ident[EI_MAG2] != 'L' || elf_header.e_ident[EI_MAG3] != 'F') {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        exit(98);
    }
    
    /* Display ELF header information */
    
    close(fd);
    exit(EXIT_SUCCESS);
}

