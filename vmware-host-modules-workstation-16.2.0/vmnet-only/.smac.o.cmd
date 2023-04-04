cmd_/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o := gcc -Wp,-MMD,/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/.smac.o.d -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/11/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -I./ubuntu/include -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -DCONFIG_X86_X32_ABI -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -fno-jump-tables -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-stack-clash-protection -g -gdwarf-5 -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -Wall -Wstrict-prototypes -DVMW_USING_KBUILD -I/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/. -DVMW_NETIF_TRANS_UPDATE  -fsanitize=bounds -fsanitize=shift -fsanitize=bool -fsanitize=enum  -DMODULE  -DKBUILD_BASENAME='"smac"' -DKBUILD_MODNAME='"vmnet"' -D__KBUILD_MODNAME=kmod_vmnet -c -o /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.c

source_/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o := /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.c

deps_/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac_compat.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/vm_basic_types.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/includeCheck.h \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/x86/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
  arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/X86_32) \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  include/generated/uapi/linux/version.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/vm_basic_defs.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/vm_basic_asm.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/vm_basic_asm_x86_common.h \
  /opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/vm_basic_asm_x86_64.h \

/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o: $(deps_/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o)

$(deps_/opt/Maintenance/vmware-host-modules-workstation-16.2.0/vmnet-only/smac.o):
