#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <elf.h>

#define BUFSIZE 1024

void print_error(const char *message) {
    fprintf(stderr, "%s: %s\n", message, strerror(errno));
    exit(98);
}

void print_elf_header(const Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_NONE ? "NONE (None)" : header->e_type == ET_REL ? "REL (Relocatable file)" : header->e_type == ET_EXEC ? "EXEC (Executable file)" : header->e_type == ET_DYN ? "DYN (Shared object file)" : header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown");
    printf("  Entry point address:               0x%lx\n", header->e_entry);
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("open failed");
    }

    Elf64_Ehdr header;
    ssize_t nread = read(fd, &header, sizeof(header));
    if (nread == -1) {
        print_error("read failed");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "%s: not an ELF file\n", filename);
        return 98;
    }

    print_elf_header(&header);

    return 0;
}

