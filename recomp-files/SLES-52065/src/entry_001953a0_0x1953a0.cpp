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

// Function: entry_001953a0
// Address: 0x1953a0 - 0x1953b8
void entry_001953a0_0x1953a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001953a0_0x1953a0");
#endif

    switch (ctx->pc) {
        case 0x1953b0u: goto label_1953b0;
        default: break;
    }

    ctx->pc = 0x1953a0u;

    // 0x1953a0: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x1953a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1953a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1953a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953a8: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x1953A8u;
    SET_GPR_U32(ctx, 31, 0x1953B0u);
    ctx->pc = 0x1953ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953A8u;
    // 0x1953ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x1953A8u, 0x1953B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953B0u;
label_1953b0:
    // 0x1953b0: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x1953B0u;
    {
        const bool branch_taken_0x1953b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953b0) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1953B8u;
}
