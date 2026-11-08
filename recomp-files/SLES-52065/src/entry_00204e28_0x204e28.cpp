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

// Function: entry_00204e28
// Address: 0x204e28 - 0x204e34
void entry_00204e28_0x204e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e28_0x204e28");
#endif

    ctx->pc = 0x204e28u;

    // 0x204e28: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204E28u;
    {
        const bool branch_taken_0x204e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E28u;
        // 0x204e2c: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e28) {
            ctx->pc = 0x204E48u;
            return;
        }
    }
    ctx->pc = 0x204E30u;
    // 0x204e30: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x204e34u;
}
