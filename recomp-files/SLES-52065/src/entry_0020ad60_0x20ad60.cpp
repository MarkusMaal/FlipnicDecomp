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

// Function: entry_0020ad60
// Address: 0x20ad60 - 0x20ad7c
void entry_0020ad60_0x20ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ad60_0x20ad60");
#endif

    ctx->pc = 0x20ad60u;

label_20ad60:
    // 0x20ad60: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20ad60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ad64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AD64u;
    {
        const bool branch_taken_0x20ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD64u;
        // 0x20ad68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad64) {
            ctx->pc = 0x20ADB4u;
            return;
        }
    }
    ctx->pc = 0x20AD6Cu;
    // 0x20ad6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ad70: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x20ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x20ad74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AD74u;
    {
        const bool branch_taken_0x20ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD74u;
        // 0x20ad78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad74) {
            ctx->pc = 0x20AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad60;
        }
    }
    ctx->pc = 0x20AD7Cu;
}
