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

// Function: entry_00103fa0
// Address: 0x103fa0 - 0x103fd0
void entry_00103fa0_0x103fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fa0_0x103fa0");
#endif

    switch (ctx->pc) {
        case 0x103fa8u: goto label_103fa8;
        case 0x103fb8u: goto label_103fb8;
        default: break;
    }

    ctx->pc = 0x103fa0u;

    // 0x103fa0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103FA0u;
    SET_GPR_U32(ctx, 31, 0x103FA8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103FA0u, 0x103FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FA8u;
label_103fa8:
    // 0x103fa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103FA8u;
    {
        const bool branch_taken_0x103fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FA8u;
        // 0x103fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fa8) {
            ctx->pc = 0x103FD0u;
            return;
        }
    }
    ctx->pc = 0x103FB0u;
    // 0x103fb0: 0xc056360  jal         func_158D80
    ctx->pc = 0x103FB0u;
    SET_GPR_U32(ctx, 31, 0x103FB8u);
    ctx->pc = 0x103FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FB0u;
    // 0x103fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103FB0u, 0x103FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FB8u;
label_103fb8:
    // 0x103fb8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103fbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103fc0: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x103fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x103fc4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x103fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x103fc8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103fcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103fd0u;
}
