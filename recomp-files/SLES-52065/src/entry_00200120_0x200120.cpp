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

// Function: entry_00200120
// Address: 0x200120 - 0x20013c
void entry_00200120_0x200120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200120_0x200120");
#endif

    ctx->pc = 0x200120u;

label_200120:
    // 0x200120: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x200120u;
    {
        const bool branch_taken_0x200120 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x200120) {
            ctx->pc = 0x200124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200120u;
            // 0x200124: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20013Cu;
            return;
        }
    }
    ctx->pc = 0x200128u;
    // 0x200128: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x200128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x20012c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x200130: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200130u;
    {
        const bool branch_taken_0x200130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200130) {
            ctx->pc = 0x200134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200130u;
            // 0x200134: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200120;
        }
    }
    ctx->pc = 0x200138u;
    // 0x200138: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x200138u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
    ctx->pc = 0x20013cu;
}
