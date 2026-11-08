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

// Function: entry_001d1724
// Address: 0x1d1724 - 0x1d1738
void entry_001d1724_0x1d1724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1724_0x1d1724");
#endif

    switch (ctx->pc) {
        case 0x1d1730u: goto label_1d1730;
        default: break;
    }

    ctx->pc = 0x1d1724u;

    // 0x1d1724: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d1724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d1728: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1D1728u;
    SET_GPR_U32(ctx, 31, 0x1D1730u);
    ctx->pc = 0x1D172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1728u;
    // 0x1d172c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1D1728u, 0x1D1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1730u;
label_1d1730:
    // 0x1d1730: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1730u;
    {
        const bool branch_taken_0x1d1730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1730u;
        // 0x1d1734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1730) {
            ctx->pc = 0x1D1778u;
            return;
        }
    }
    ctx->pc = 0x1D1738u;
}
