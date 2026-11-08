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

// Function: entry_0011eff4
// Address: 0x11eff4 - 0x11f024
void entry_0011eff4_0x11eff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eff4_0x11eff4");
#endif

    ctx->pc = 0x11eff4u;

label_11eff4:
    // 0x11eff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11eff8: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF8u;
        // 0x11effc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11F258u;
            return;
        }
    }
    ctx->pc = 0x11F000u;
    // 0x11f000: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x11F000u;
    {
        const bool branch_taken_0x11f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f000) {
            ctx->pc = 0x11F208u;
            return;
        }
    }
    ctx->pc = 0x11F008u;
    // 0x11f008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f00c: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x11F00Cu;
    {
        const bool branch_taken_0x11f00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f00c) {
            ctx->pc = 0x11F128u;
            return;
        }
    }
    ctx->pc = 0x11F014u;
    // 0x11f014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F014u;
    {
        const bool branch_taken_0x11f014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f014) {
            ctx->pc = 0x11F024u;
            return;
        }
    }
    ctx->pc = 0x11F01Cu;
    // 0x11f01c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11F01Cu;
    {
        const bool branch_taken_0x11f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F01Cu;
        // 0x11f020: 0x8e630098  lw          $v1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f01c) {
            ctx->pc = 0x11EFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eff4;
        }
    }
    ctx->pc = 0x11F024u;
}
