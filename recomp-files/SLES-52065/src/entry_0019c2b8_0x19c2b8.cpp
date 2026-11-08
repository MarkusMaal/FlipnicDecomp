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

// Function: entry_0019c2b8
// Address: 0x19c2b8 - 0x19c2e0
void entry_0019c2b8_0x19c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c2b8_0x19c2b8");
#endif

    switch (ctx->pc) {
        case 0x19c2d0u: goto label_19c2d0;
        default: break;
    }

    ctx->pc = 0x19c2b8u;

    // 0x19c2b8: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
    // 0x19c2bc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C2BCu;
    {
        const bool branch_taken_0x19c2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2bc) {
            ctx->pc = 0x19C2E0u;
            return;
        }
    }
    ctx->pc = 0x19C2C4u;
    // 0x19c2c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c2c8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x19C2C8u;
    SET_GPR_U32(ctx, 31, 0x19C2D0u);
    ctx->pc = 0x19C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2C8u;
    // 0x19c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19C2C8u, 0x19C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2D0u;
label_19c2d0:
    // 0x19c2d0: 0x8e240904  lw          $a0, 0x904($s1)
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2308)));
    // 0x19c2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c2d8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x19C2D8u;
    SET_GPR_U32(ctx, 31, 0x19C2E0u);
    ctx->pc = 0x19C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2D8u;
    // 0x19c2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x19C2D8u, 0x19C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2E0u;
}
