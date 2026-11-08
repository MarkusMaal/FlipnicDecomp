#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0013b54c
// Address: 0x13b54c - 0x13b554
void entry_0013b54c_0x13b54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b54c_0x13b54c");
#endif

    ctx->pc = 0x13b54cu;

    // 0x13b54c: 0x0  nop
    ctx->pc = 0x13b54cu;
    // NOP
    // 0x13b550: 0x3450aaaa  ori         $s0, $v0, 0xAAAA
    ctx->pc = 0x13b550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
    ctx->pc = 0x13b554u;
}
