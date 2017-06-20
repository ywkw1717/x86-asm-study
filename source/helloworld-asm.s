      .section .text
      .global main
      .type main, @function
      .section .data
      msg: .ascii "Hello World!\n"
main:
      push  %ebx
      mov   $4, %eax
      mov   $1, %ebx
      mov   $msg, %ecx
      mov   $13, %edx
      int   $0x80
      pop   %ebx
      ret
