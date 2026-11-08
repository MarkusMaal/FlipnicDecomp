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

// Function: entry_00204f4c
// Address: 0x204f4c - 0x204f58
void entry_00204f4c_0x204f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f4c_0x204f4c");
#endif

    ctx->pc = 0x204f4cu;

    // 0x204f4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x204f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x204f50: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x204F50u;
    {
        const bool branch_taken_0x204f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F50u;
        // 0x204f54: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f50) {
            ctx->pc = 0x203B88u;
            return;
        }
    }
    ctx->pc = 0x204F58u;
}
