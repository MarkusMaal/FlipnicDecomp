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

// Function: entry_001f0d58
// Address: 0x1f0d58 - 0x1f0d80
void entry_001f0d58_0x1f0d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d58_0x1f0d58");
#endif

    ctx->pc = 0x1f0d58u;

label_1f0d58:
    // 0x1f0d58: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1f0d5c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0d60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0d64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0d68: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1f0d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f0d6c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0d70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F0D70u;
    {
        const bool branch_taken_0x1f0d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d70) {
            ctx->pc = 0x1F0D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0d58;
        }
    }
    ctx->pc = 0x1F0D78u;
    // 0x1f0d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D78u;
    {
        const bool branch_taken_0x1f0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D78u;
        // 0x1f0d7c: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d78) {
            ctx->pc = 0x1F0D90u;
            return;
        }
    }
    ctx->pc = 0x1F0D80u;
}
