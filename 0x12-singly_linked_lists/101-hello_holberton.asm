section .data
	hello db 'Hello, Holberton',0xA  ; String with newline character

section .text
	global main

main:
	; write the message to stdout
	mov rax, 1          ; syscall number for sys_write
	mov rdi, 1          ; file descriptor 1 (stdout)
	mov rsi, hello     ; pointer to the message
	mov rdx, 17         ; length of the message
	syscall             ; invoke the syscall

	; Exit the program
	mov rax, 60         ; syscall number for sys_exit
	xor rdi, rdi        ; exit status 0
	syscall             ; invoke the syscall
