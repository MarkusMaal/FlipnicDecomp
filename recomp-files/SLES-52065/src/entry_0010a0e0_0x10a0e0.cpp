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

// Function: entry_0010a0e0
// Address: 0x10a0e0 - 0x10a0fc
void entry_0010a0e0_0x10a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a0e0_0x10a0e0");
#endif

    switch (ctx->pc) {
        case 0x10a0f4u: goto label_10a0f4;
        default: break;
    }

    ctx->pc = 0x10a0e0u;

    // 0x10a0e0: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A0E0u;
    {
        const bool branch_taken_0x10a0e0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x10a0e0) {
            ctx->pc = 0x10A0CCu;
            return;
        }
    }
    ctx->pc = 0x10A0E8u;
    // 0x10a0e8: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x10a0e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10a0ec: 0xc0461e4  jal         func_118790
    ctx->pc = 0x10A0ECu;
    SET_GPR_U32(ctx, 31, 0x10A0F4u);
    ctx->pc = 0x10A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0ECu;
    // 0x10a0f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x10A0ECu, 0x10A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F4u;
label_10a0f4:
    // 0x10a0f4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10A0F4u;
    {
        const bool branch_taken_0x10a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0f4) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A0FCu;
}
