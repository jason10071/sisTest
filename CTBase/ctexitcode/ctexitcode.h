#ifndef CTEXITCODE
#define CTEXITCODE

namespace CT
{

enum CTExitCode
{
    CT_EXIT_PASS = 0,                       // CT execute done. And result pass.
    CT_EXIT_FAIL = 1,                       // CT execute done. But result fail. Such as compare different.
    CT_EXIT_CHIP_COMMUNICATION_ERROR = 2,   // SiS-Chip communication error using SiSCore. It will need to self-retry.
    CT_EXIT_AP_FLOW_ERROR = 3,              // CT check flow/somethings error. User may set some things error.
};

} // CT

#endif // CTEXITCODE

