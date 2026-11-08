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

// Function: entry_001e1688
// Address: 0x1e1688 - 0x1e1698
void entry_001e1688_0x1e1688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1688_0x1e1688");
#endif

    ctx->pc = 0x1e1688u;

    // 0x1e1688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1688u;
    {
        const bool branch_taken_0x1e1688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1688u;
        // 0x1e168c: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1688) {
            ctx->pc = 0x1E1698u;
            return;
        }
    }
    ctx->pc = 0x1E1690u;
    // 0x1e1690: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E1690u;
    SET_GPR_U32(ctx, 31, 0x1E1698u);
    ctx->pc = 0x1E1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1690u;
    // 0x1e1694: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E1690u, 0x1E1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1698u;
}
