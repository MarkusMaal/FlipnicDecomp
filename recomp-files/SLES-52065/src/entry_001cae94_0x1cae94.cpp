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

// Function: entry_001cae94
// Address: 0x1cae94 - 0x1caec8
void entry_001cae94_0x1cae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cae94_0x1cae94");
#endif

    switch (ctx->pc) {
        case 0x1caeb4u: goto label_1caeb4;
        case 0x1caec0u: goto label_1caec0;
        default: break;
    }

    ctx->pc = 0x1cae94u;

    // 0x1cae94: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1cae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cae98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cae9c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAE9Cu;
    {
        const bool branch_taken_0x1cae9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9Cu;
        // 0x1caea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9c) {
            ctx->pc = 0x1CAEC8u;
            return;
        }
    }
    ctx->pc = 0x1CAEA4u;
    // 0x1caea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caeac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAEACu;
    SET_GPR_U32(ctx, 31, 0x1CAEB4u);
    ctx->pc = 0x1CAEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEACu;
    // 0x1caeb0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAEACu, 0x1CAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB4u;
label_1caeb4:
    // 0x1caeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb8: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CAEB8u;
    SET_GPR_U32(ctx, 31, 0x1CAEC0u);
    ctx->pc = 0x1CAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB8u;
    // 0x1caebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CAEB8u, 0x1CAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC0u;
label_1caec0:
    // 0x1caec0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAEC0u;
    {
        const bool branch_taken_0x1caec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEC0u;
        // 0x1caec4: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caec0) {
            ctx->pc = 0x1CAEE4u;
            return;
        }
    }
    ctx->pc = 0x1CAEC8u;
}
