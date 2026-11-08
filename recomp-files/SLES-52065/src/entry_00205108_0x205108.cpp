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

// Function: entry_00205108
// Address: 0x205108 - 0x205130
void entry_00205108_0x205108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205108_0x205108");
#endif

    ctx->pc = 0x205108u;

label_205108:
    // 0x205108: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20510c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x20510cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x205110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205114: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x205114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x205118: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x205118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20511c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x20511cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x205120: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205120u;
    {
        const bool branch_taken_0x205120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205120) {
            ctx->pc = 0x205108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205108;
        }
    }
    ctx->pc = 0x205128u;
    // 0x205128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205128u;
    {
        const bool branch_taken_0x205128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205128u;
        // 0x20512c: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205128) {
            ctx->pc = 0x205138u;
            return;
        }
    }
    ctx->pc = 0x205130u;
}
