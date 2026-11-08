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

// Function: entry_0011d774
// Address: 0x11d774 - 0x11d790
void entry_0011d774_0x11d774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d774_0x11d774");
#endif

    switch (ctx->pc) {
        case 0x11d77cu: goto label_11d77c;
        default: break;
    }

    ctx->pc = 0x11d774u;

    // 0x11d774: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D774u;
    SET_GPR_U32(ctx, 31, 0x11D77Cu);
    ctx->pc = 0x11D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D774u;
    // 0x11d778: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D774u, 0x11D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D77Cu;
label_11d77c:
    // 0x11d77c: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x11d780: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D780u;
    {
        const bool branch_taken_0x11d780 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D780u;
        // 0x11d784: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d780) {
            ctx->pc = 0x11D790u;
            return;
        }
    }
    ctx->pc = 0x11D788u;
    // 0x11d788: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11d78c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11d78cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    ctx->pc = 0x11d790u;
}
