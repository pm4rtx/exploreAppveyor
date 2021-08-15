
#define TO_STR(x) #x
#define MACRO_TO_STR(x) TO_STR(x)

#define PRINT_MACRO_VALUE(x) __pragma(message(#x": "MACRO_TO_STR(x)))

#if defined (__STDC__)
    PRINT_MACRO_VALUE(__STDC__)
#   if defined (__STDC_VERSION__)
        PRINT_MACRO_VALUE(__STDC_VERSION__)
#   endif
#endif

#if defined (__cplusplus)
    PRINT_MACRO_VALUE(__cplusplus)
#endif

#if defined(_MSC_VER)
    PRINT_MACRO_VALUE(_MSC_VER)
#endif

#if defined(_MSC_FULL_VER)
    PRINT_MACRO_VALUE(_MSC_FULL_VER)
#endif

#if defined(_MSC_BUILD)
    PRINT_MACRO_VALUE(_MSC_BUILD)
#endif

#if defined(_MSC_EXTENSIONS)
    PRINT_MACRO_VALUE(_MSC_EXTENSIONS)
#endif

#if defined(_MSVC_LANG)
    PRINT_MACRO_VALUE(_MSVC_LANG)
#endif

#if defined(__MSVC_RUNTIME_CHECKS)
    PRINT_MACRO_VALUE(__MSVC_RUNTIME_CHECKS)
#endif

#if defined(_MSVC_TRADITIONAL)
    PRINT_MACRO_VALUE(_MSVC_TRADITIONAL)
#endif

#if defined(_NATIVE_WCHAR_T_DEFINED)
    PRINT_MACRO_VALUE(_NATIVE_WCHAR_T_DEFINED)
#endif

#if defined(_WCHAR_T_DEFINED)
    PRINT_MACRO_VALUE(_WCHAR_T_DEFINED)
#endif

#if defined(_CPPRTTI)
    PRINT_MACRO_VALUE(_CPPRTTI)
#endif

#if defined(_CPPUNWIND)
    PRINT_MACRO_VALUE(_CPPUNWIND)
#endif

#if defined(_PREFAST_)
    PRINT_MACRO_VALUE(_PREFAST_)
#endif

#if defined(__SANITIZE_ADDRESS__)
    PRINT_MACRO_VALUE(__SANITIZE_ADDRESS__)
#endif

#if defined(_VC_NODEFAULTLIB)
    PRINT_MACRO_VALUE(_VC_NODEFAULTLIB)
#endif

#if defined(_WIN32)
    PRINT_MACRO_VALUE(_WIN32)
#endif

#if defined(_WIN64)
    PRINT_MACRO_VALUE(_WIN64)
#endif

#if defined(_M_IX86)
    PRINT_MACRO_VALUE(_M_IX86)
#endif

#if defined(_M_X64)
    PRINT_MACRO_VALUE(_M_X64)
#endif

#if defined(_DEBUG)
    PRINT_MACRO_VALUE(_DEBUG)
#endif

int main(void)
{
    return 0;
}