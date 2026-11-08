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

// Function: entry_001d188c
// Address: 0x1d188c - 0x1d18b0
void entry_001d188c_0x1d188c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d188c_0x1d188c");
#endif

    switch (ctx->pc) {
        case 0x1d18a8u: goto label_1d18a8;
        default: break;
    }

    ctx->pc = 0x1d188cu;

    // 0x1d188c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d1890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1898: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d189c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d18a0: 0xc074634  jal         func_1D18D0
    ctx->pc = 0x1D18A0u;
    SET_GPR_U32(ctx, 31, 0x1D18A8u);
    ctx->pc = 0x1D18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18A0u;
    // 0x1d18a4: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D0u, 0x1D18A0u, 0x1D18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18A8u;
label_1d18a8:
    // 0x1d18a8: 0xa20001e0  sb          $zero, 0x1E0($s0)
    ctx->pc = 0x1d18a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d18ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d18acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1d18b0u;
}
