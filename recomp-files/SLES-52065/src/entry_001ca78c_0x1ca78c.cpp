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

// Function: entry_001ca78c
// Address: 0x1ca78c - 0x1ca7bc
void entry_001ca78c_0x1ca78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca78c_0x1ca78c");
#endif

    switch (ctx->pc) {
        case 0x1ca7a8u: goto label_1ca7a8;
        case 0x1ca7b4u: goto label_1ca7b4;
        default: break;
    }

    ctx->pc = 0x1ca78cu;

    // 0x1ca78c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA790u;
    {
        const bool branch_taken_0x1ca790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA790u;
        // 0x1ca794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca790) {
            ctx->pc = 0x1CA7BCu;
            return;
        }
    }
    ctx->pc = 0x1CA798u;
    // 0x1ca798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca79c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca7a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7A0u;
    SET_GPR_U32(ctx, 31, 0x1CA7A8u);
    ctx->pc = 0x1CA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7A0u;
    // 0x1ca7a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7A0u, 0x1CA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7A8u;
label_1ca7a8:
    // 0x1ca7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7ac: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CA7ACu;
    SET_GPR_U32(ctx, 31, 0x1CA7B4u);
    ctx->pc = 0x1CA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7ACu;
    // 0x1ca7b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CA7ACu, 0x1CA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7B4u;
label_1ca7b4:
    // 0x1ca7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA7B4u;
    {
        const bool branch_taken_0x1ca7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7B4u;
        // 0x1ca7b8: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7b4) {
            ctx->pc = 0x1CA7D8u;
            return;
        }
    }
    ctx->pc = 0x1CA7BCu;
}
