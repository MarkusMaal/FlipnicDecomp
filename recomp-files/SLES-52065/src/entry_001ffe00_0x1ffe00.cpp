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

// Function: entry_001ffe00
// Address: 0x1ffe00 - 0x1ffe18
void entry_001ffe00_0x1ffe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe00_0x1ffe00");
#endif

    ctx->pc = 0x1ffe00u;

    // 0x1ffe00: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1ffe04: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffe08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE08u;
    {
        const bool branch_taken_0x1ffe08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe08) {
            ctx->pc = 0x1FFE18u;
            return;
        }
    }
    ctx->pc = 0x1FFE10u;
    // 0x1ffe10: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ffe14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x1ffe18u;
}
