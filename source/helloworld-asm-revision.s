      .section .text
      .global main
      .type main, @function
      .section .data
      msg: .ascii "Hello World!\n"
main:
      push  %ebx
      push  $4
      pop   %eax
      push  $1
      pop   %ebx
      push  $msg
      pop   %ecx
      push  $13
      pop   %edx
      int   $0x80
      pop   %ebx
      ret
