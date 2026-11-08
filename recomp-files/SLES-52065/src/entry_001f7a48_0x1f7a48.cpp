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

// Function: entry_001f7a48
// Address: 0x1f7a48 - 0x1f7a6c
void entry_001f7a48_0x1f7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a48_0x1f7a48");
#endif

    ctx->pc = 0x1f7a48u;

label_1f7a48:
    // 0x1f7a48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7a4c: 0x0  nop
    ctx->pc = 0x1f7a4cu;
    // NOP
    // 0x1f7a50: 0x0  nop
    ctx->pc = 0x1f7a50u;
    // NOP
    // 0x1f7a54: 0x0  nop
    ctx->pc = 0x1f7a54u;
    // NOP
    // 0x1f7a58: 0x0  nop
    ctx->pc = 0x1f7a58u;
    // NOP
    // 0x1f7a5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7A5Cu;
    {
        const bool branch_taken_0x1f7a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7a5c) {
            ctx->pc = 0x1F7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7a48;
        }
    }
    ctx->pc = 0x1F7A64u;
    // 0x1f7a64: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7A64u;
    {
        const bool branch_taken_0x1f7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A64u;
        // 0x1f7a68: 0x2630d680  addiu       $s0, $s1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a64) {
            ctx->pc = 0x1F7A08u;
            return;
        }
    }
    ctx->pc = 0x1F7A6Cu;
}
