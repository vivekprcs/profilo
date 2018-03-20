/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI__ASM_UCONTEXT_H
#define _UAPI__ASM_UCONTEXT_H
#define UAPI__ASM_UCONTEXT_H
#define UAPI__ASM_UCONTEXT_H_
#define __ASM_UCONTEXT_H
#define __ASM_UCONTEXT_H_
#define _UAPI__ASM_UCONTEXT_H_
#include <linux/types.h>
struct ucontext {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned long uc_flags;
  struct ucontext * uc_link;
  stack_t uc_stack;
  sigset_t uc_sigmask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 __linux_unused[1024 / 8 - sizeof(sigset_t)];
  struct sigcontext uc_mcontext;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */