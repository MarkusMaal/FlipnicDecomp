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

// Function: entry_001a0d28
// Address: 0x1a0d28 - 0x1a0d48
void entry_001a0d28_0x1a0d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d28_0x1a0d28");
#endif

    ctx->pc = 0x1a0d28u;

label_1a0d28:
    // 0x1a0d28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0d30: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a0d34: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0d38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0d3c: 0xac6409e4  sw          $a0, 0x9E4($v1)
    ctx->pc = 0x1a0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2532), GPR_U32(ctx, 4));
    // 0x1a0d40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A0D40u;
    {
        const bool branch_taken_0x1a0d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D40u;
        // 0x1a0d44: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d40) {
            ctx->pc = 0x1A0D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0D48u;
}
