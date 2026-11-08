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

// Function: entry_00125a64
// Address: 0x125a64 - 0x125a70
void entry_00125a64_0x125a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a64_0x125a64");
#endif

    ctx->pc = 0x125a64u;

    // 0x125a64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x125a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a6c: 0x319207ff  andi        $s2, $t4, 0x7FF
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2047);
    ctx->pc = 0x125a70u;
}
