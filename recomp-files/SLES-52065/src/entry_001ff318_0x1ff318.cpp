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

// Function: entry_001ff318
// Address: 0x1ff318 - 0x1ff328
void entry_001ff318_0x1ff318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff318_0x1ff318");
#endif

    ctx->pc = 0x1ff318u;

    // 0x1ff318: 0x244cd9c8  addiu       $t4, $v0, -0x2638
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x1ff31c: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff320: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x1ff320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1ff324: 0x0  nop
    ctx->pc = 0x1ff324u;
    // NOP
    ctx->pc = 0x1ff328u;
}
