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

// Function: entry_001f59a4
// Address: 0x1f59a4 - 0x1f59b8
void entry_001f59a4_0x1f59a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f59a4_0x1f59a4");
#endif

    ctx->pc = 0x1f59a4u;

    // 0x1f59a4: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949556)));
    // 0x1f59a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F59A8u;
    {
        const bool branch_taken_0x1f59a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59A8u;
        // 0x1f59ac: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59a8) {
            ctx->pc = 0x1F59B8u;
            return;
        }
    }
    ctx->pc = 0x1F59B0u;
    // 0x1f59b0: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F59B0u;
    SET_GPR_U32(ctx, 31, 0x1F59B8u);
    ctx->pc = 0x1F59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59B0u;
    // 0x1f59b4: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F59B0u, 0x1F59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59B8u;
}
