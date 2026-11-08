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

// Function: entry_001fddc0
// Address: 0x1fddc0 - 0x1fddd0
void entry_001fddc0_0x1fddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fddc0_0x1fddc0");
#endif

    ctx->pc = 0x1fddc0u;

    // 0x1fddc0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC0u;
        // 0x1fddc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDDD0u;
            return;
        }
    }
    ctx->pc = 0x1FDDC8u;
    // 0x1fddc8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FDDC8u;
    {
        const bool branch_taken_0x1fddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC8u;
        // 0x1fddcc: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc8) {
            ctx->pc = 0x1FDEACu;
            return;
        }
    }
    ctx->pc = 0x1FDDD0u;
}
