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

// Function: entry_00137138
// Address: 0x137138 - 0x137178
void entry_00137138_0x137138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137138_0x137138");
#endif

    ctx->pc = 0x137138u;

label_137138:
    // 0x137138: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13713c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x137140: 0x28820022  slti        $v0, $a0, 0x22
    ctx->pc = 0x137140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x137144: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137148: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x137148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13714c: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x13714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137150: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137154: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x137154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x137158: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x13715c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137160: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x137160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x137164: 0x8f8385a0  lw          $v1, -0x7A60($gp)
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x137168: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13716c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x13716cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x137170: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137170u;
        // 0x137174: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137170) {
            ctx->pc = 0x137138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137138;
        }
    }
    ctx->pc = 0x137178u;
}
