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

// Function: entry_0016a728
// Address: 0x16a728 - 0x16a73c
void entry_0016a728_0x16a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a728_0x16a728");
#endif

    ctx->pc = 0x16a728u;

    // 0x16a728: 0x84a20022  lh          $v0, 0x22($a1)
    ctx->pc = 0x16a728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x16a72c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16a72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a730: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A730u;
    {
        const bool branch_taken_0x16a730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A730u;
        // 0x16a734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a730) {
            ctx->pc = 0x16A73Cu;
            return;
        }
    }
    ctx->pc = 0x16A738u;
    // 0x16a738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16a73cu;
}
