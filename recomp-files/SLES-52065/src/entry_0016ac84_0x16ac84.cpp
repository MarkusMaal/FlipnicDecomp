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

// Function: entry_0016ac84
// Address: 0x16ac84 - 0x16ac98
void entry_0016ac84_0x16ac84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac84_0x16ac84");
#endif

    ctx->pc = 0x16ac84u;

    // 0x16ac84: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC84u;
    {
        const bool branch_taken_0x16ac84 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC84u;
        // 0x16ac88: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac84) {
            ctx->pc = 0x16AC98u;
            return;
        }
    }
    ctx->pc = 0x16AC8Cu;
    // 0x16ac8c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16ac90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ac94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x16ac98u;
}
