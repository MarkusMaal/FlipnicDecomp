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

// Function: entry_001aa694
// Address: 0x1aa694 - 0x1aa6b8
void entry_001aa694_0x1aa694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa694_0x1aa694");
#endif

    switch (ctx->pc) {
        case 0x1aa6b4u: goto label_1aa6b4;
        default: break;
    }

    ctx->pc = 0x1aa694u;

    // 0x1aa694: 0x0  nop
    ctx->pc = 0x1aa694u;
    // NOP
    // 0x1aa698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa69c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa6a0: 0x1062ffcf  beq         $v1, $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1AA6A0u;
    {
        const bool branch_taken_0x1aa6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa6a0) {
            ctx->pc = 0x1AA5E0u;
            return;
        }
    }
    ctx->pc = 0x1AA6A8u;
    // 0x1aa6a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6ac: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AA6ACu;
    SET_GPR_U32(ctx, 31, 0x1AA6B4u);
    ctx->pc = 0x1AA6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA6ACu;
    // 0x1aa6b0: 0xaea0070c  sw          $zero, 0x70C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA6ACu, 0x1AA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA6B4u;
label_1aa6b4:
    // 0x1aa6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aa6b8u;
}
