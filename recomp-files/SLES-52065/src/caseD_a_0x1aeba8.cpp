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

// Function: caseD_a
// Address: 0x1aeba8 - 0x1aebc0
void caseD_a_0x1aeba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1aeba8");
#endif

    ctx->pc = 0x1aeba8u;

    // 0x1aeba8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aebac: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1aebb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEBB0u;
    {
        const bool branch_taken_0x1aebb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB0u;
        // 0x1aebb4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebb0) {
            ctx->pc = 0x1AEBC0u;
            return;
        }
    }
    ctx->pc = 0x1AEBB8u;
    // 0x1aebb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEBB8u;
    {
        const bool branch_taken_0x1aebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB8u;
        // 0x1aebbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebb8) {
            ctx->pc = 0x1AEBD8u;
            return;
        }
    }
    ctx->pc = 0x1AEBC0u;
}
