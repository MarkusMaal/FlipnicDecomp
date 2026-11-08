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

// Function: entry_001f7e60
// Address: 0x1f7e60 - 0x1f7e84
void entry_001f7e60_0x1f7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e60_0x1f7e60");
#endif

    ctx->pc = 0x1f7e60u;

label_1f7e60:
    // 0x1f7e60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7e64: 0x0  nop
    ctx->pc = 0x1f7e64u;
    // NOP
    // 0x1f7e68: 0x0  nop
    ctx->pc = 0x1f7e68u;
    // NOP
    // 0x1f7e6c: 0x0  nop
    ctx->pc = 0x1f7e6cu;
    // NOP
    // 0x1f7e70: 0x0  nop
    ctx->pc = 0x1f7e70u;
    // NOP
    // 0x1f7e74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7E74u;
    {
        const bool branch_taken_0x1f7e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7e74) {
            ctx->pc = 0x1F7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e60;
        }
    }
    ctx->pc = 0x1F7E7Cu;
    // 0x1f7e7c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F7E7Cu;
    {
        const bool branch_taken_0x1f7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E7Cu;
        // 0x1f7e80: 0x26901590  addiu       $s0, $s4, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e7c) {
            ctx->pc = 0x1F7E20u;
            return;
        }
    }
    ctx->pc = 0x1F7E84u;
}
