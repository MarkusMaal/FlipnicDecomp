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

// Function: entry_0019d2c8
// Address: 0x19d2c8 - 0x19d2f4
void entry_0019d2c8_0x19d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d2c8_0x19d2c8");
#endif

    switch (ctx->pc) {
        case 0x19d2e8u: goto label_19d2e8;
        default: break;
    }

    ctx->pc = 0x19d2c8u;

    // 0x19d2c8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19d2cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d2d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19d2d4: 0x1062ff9f  beq         $v1, $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x19D2D4u;
    {
        const bool branch_taken_0x19d2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d2d4) {
            ctx->pc = 0x19D154u;
            return;
        }
    }
    ctx->pc = 0x19D2DCu;
    // 0x19d2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2e0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19D2E0u;
    SET_GPR_U32(ctx, 31, 0x19D2E8u);
    ctx->pc = 0x19D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D2E0u;
    // 0x19d2e4: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19D2E0u, 0x19D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2E8u;
label_19d2e8:
    // 0x19d2e8: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x19D2E8u;
    {
        const bool branch_taken_0x19d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2e8) {
            ctx->pc = 0x19D774u;
            return;
        }
    }
    ctx->pc = 0x19D2F0u;
    // 0x19d2f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19d2f4u;
}
