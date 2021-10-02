#if defined(__x86_64__) || defined(_M_X64)
    #define ARCH_X64

#elif defined(i386) || defined(__i386__) \
    || defined(__i386) || defined(_M_IX86)
    #define ARCH_X32

#elif defined(__ARM_ARCH_2__) \
    || defined(__ARM_ARCH_3__) || defined(__ARM_ARCH_3M__) \
    || defined(__ARM_ARCH_4T__) || defined(__TARGET_ARM_4T) \
    || defined(__ARM_ARCH_5_) || defined(__ARM_ARCH_5E_) \
    || defined(__ARM_ARCH_6T2_) || defined(__ARM_ARCH_6T2_) \
    || defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || \
    || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) \
    || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) \
    || defined(__ARM_ARCH_7S__) \
    || defined(__aarch64__) || defined(_M_ARM64)
    #define ARCH_ARM

#elif defined(mips) || defined(__mips__) \
    || defined(__mips)
    #define ARCH_MIPS

#elif defined(__sh__)
    #define ARCH_SUPERH

#elif defined(__powerpc) || defined(__powerpc__) \
    || defined(__powerpc64__) || defined(__POWERPC__) \
    || defined(__ppc__) || defined(__PPC__) \
    || defined(_ARCH_PPC)
    #define ARCH_PPC

#elif defined(__PPC64__) || defined(__ppc64__) \
    || defined(_ARCH_PPC64)
    #define ARCH_PPC64

#elif defined(__sparc__) || defined(__sparc)
    #define ARCH_SPARC

#elif defined(__m68k__)
    #define ARCH_M68K

#else
    #define ARCH_UNKNOWN

#endif 
