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

// Function: entry_002094f0
// Address: 0x2094f0 - 0x209508
void entry_002094f0_0x2094f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002094f0_0x2094f0");
#endif

    switch (ctx->pc) {
        case 0x209500u: goto label_209500;
        default: break;
    }

    ctx->pc = 0x2094f0u;

    // 0x2094f0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2094F0u;
    {
        const bool branch_taken_0x2094f0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2094f0) {
            ctx->pc = 0x209508u;
            return;
        }
    }
    ctx->pc = 0x2094F8u;
    // 0x2094f8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x2094F8u;
    SET_GPR_U32(ctx, 31, 0x209500u);
    ctx->pc = 0x2094FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094F8u;
    // 0x2094fc: 0x26445c00  addiu       $a0, $s2, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x2094F8u, 0x209500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209500u;
label_209500:
    // 0x209500: 0xc082716  jal         func_209C58
    ctx->pc = 0x209500u;
    SET_GPR_U32(ctx, 31, 0x209508u);
    ctx->pc = 0x209504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209500u;
    // 0x209504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C58u, 0x209500u, 0x209508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209508u;
}
