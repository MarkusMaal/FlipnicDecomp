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

// Function: entry_0017fb70
// Address: 0x17fb70 - 0x17fb7c
void entry_0017fb70_0x17fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb70_0x17fb70");
#endif

    ctx->pc = 0x17fb70u;

    // 0x17fb70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17fb74: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17FB74u;
    {
        const bool branch_taken_0x17fb74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x17FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB74u;
        // 0x17fb78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb74) {
            ctx->pc = 0x17FB54u;
            return;
        }
    }
    ctx->pc = 0x17FB7Cu;
}
