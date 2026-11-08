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

// Function: entry_001f2b88
// Address: 0x1f2b88 - 0x1f2bac
void entry_001f2b88_0x1f2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2b88_0x1f2b88");
#endif

    ctx->pc = 0x1f2b88u;

label_1f2b88:
    // 0x1f2b88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f2b8c: 0x0  nop
    ctx->pc = 0x1f2b8cu;
    // NOP
    // 0x1f2b90: 0x0  nop
    ctx->pc = 0x1f2b90u;
    // NOP
    // 0x1f2b94: 0x0  nop
    ctx->pc = 0x1f2b94u;
    // NOP
    // 0x1f2b98: 0x0  nop
    ctx->pc = 0x1f2b98u;
    // NOP
    // 0x1f2b9c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2B9Cu;
    {
        const bool branch_taken_0x1f2b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f2b9c) {
            ctx->pc = 0x1F2B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2b88;
        }
    }
    ctx->pc = 0x1F2BA4u;
    // 0x1f2ba4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F2BA4u;
    {
        const bool branch_taken_0x1f2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BA4u;
        // 0x1f2ba8: 0x2630fd80  addiu       $s0, $s1, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ba4) {
            ctx->pc = 0x1F2AF0u;
            return;
        }
    }
    ctx->pc = 0x1F2BACu;
}
