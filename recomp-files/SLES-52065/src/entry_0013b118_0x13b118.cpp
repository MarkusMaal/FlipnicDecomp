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

// Function: entry_0013b118
// Address: 0x13b118 - 0x13b150
void entry_0013b118_0x13b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b118_0x13b118");
#endif

    ctx->pc = 0x13b118u;

label_13b118:
    // 0x13b118: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x13b118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13b11c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x13b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x13b120: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x13b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x13b124: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x13b124u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x13b128: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x13b128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x13b12c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x13b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x13b130: 0x1d00fff9  bgtz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B130u;
    {
        const bool branch_taken_0x13b130 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x13B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B130u;
        // 0x13b134: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b130) {
            ctx->pc = 0x13B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B138u;
    // 0x13b138: 0x8d830050  lw          $v1, 0x50($t4)
    ctx->pc = 0x13b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x13b13c: 0xada30050  sw          $v1, 0x50($t5)
    ctx->pc = 0x13b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 3));
    // 0x13b140: 0x258c0060  addiu       $t4, $t4, 0x60
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
    // 0x13b144: 0x182182b  sltu        $v1, $t4, $v0
    ctx->pc = 0x13b144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b148: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13B148u;
    {
        const bool branch_taken_0x13b148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B148u;
        // 0x13b14c: 0x25ad0060  addiu       $t5, $t5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b148) {
            ctx->pc = 0x13B0F4u;
            return;
        }
    }
    ctx->pc = 0x13B150u;
}
