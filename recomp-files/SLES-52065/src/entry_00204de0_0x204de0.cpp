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

// Function: entry_00204de0
// Address: 0x204de0 - 0x204dec
void entry_00204de0_0x204de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204de0_0x204de0");
#endif

    ctx->pc = 0x204de0u;

    // 0x204de0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204DE0u;
    {
        const bool branch_taken_0x204de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x204DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DE0u;
        // 0x204de4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204de0) {
            ctx->pc = 0x204E00u;
            return;
        }
    }
    ctx->pc = 0x204DE8u;
    // 0x204de8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x204decu;
}
