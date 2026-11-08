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

// Function: entry_0017e7b8
// Address: 0x17e7b8 - 0x17e7d4
void entry_0017e7b8_0x17e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e7b8_0x17e7b8");
#endif

    switch (ctx->pc) {
        case 0x17e7c0u: goto label_17e7c0;
        default: break;
    }

    ctx->pc = 0x17e7b8u;

    // 0x17e7b8: 0xc051198  jal         func_144660
    ctx->pc = 0x17E7B8u;
    SET_GPR_U32(ctx, 31, 0x17E7C0u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E7B8u, 0x17E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7C0u;
label_17e7c0:
    // 0x17e7c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E7C0u;
    {
        const bool branch_taken_0x17e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7c0) {
            ctx->pc = 0x17E7D4u;
            return;
        }
    }
    ctx->pc = 0x17E7C8u;
    // 0x17e7c8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17e7cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E7CCu;
    {
        const bool branch_taken_0x17e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7CCu;
        // 0x17e7d0: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7cc) {
            ctx->pc = 0x17E7DCu;
            return;
        }
    }
    ctx->pc = 0x17E7D4u;
}
