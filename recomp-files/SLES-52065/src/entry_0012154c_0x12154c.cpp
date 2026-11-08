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

// Function: entry_0012154c
// Address: 0x12154c - 0x121554
void entry_0012154c_0x12154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012154c_0x12154c");
#endif

    ctx->pc = 0x12154cu;

    // 0x12154c: 0x0  nop
    ctx->pc = 0x12154cu;
    // NOP
    // 0x121550: 0x3453ffff  ori         $s3, $v0, 0xFFFF
    ctx->pc = 0x121550u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x121554u;
}
