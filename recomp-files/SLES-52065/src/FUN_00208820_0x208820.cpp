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

// Function: FUN_00208820
// Address: 0x208820 - 0x208858
void FUN_00208820_0x208820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208820_0x208820");
#endif

    switch (ctx->pc) {
        case 0x208838u: goto label_208838;
        case 0x20884cu: goto label_20884c;
        default: break;
    }

    ctx->pc = 0x208820u;

    // 0x208820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x208824: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x208824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x208828: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20882c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x208830: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208830u;
    SET_GPR_U32(ctx, 31, 0x208838u);
    ctx->pc = 0x208834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208830u;
    // 0x208834: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208830u, 0x208838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208838u;
label_208838:
    // 0x208838: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20883c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208840: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x208840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x208844: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x208844u;
    SET_GPR_U32(ctx, 31, 0x20884Cu);
    ctx->pc = 0x208848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208844u;
    // 0x208848: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x208844u, 0x20884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20884Cu;
label_20884c:
    // 0x20884c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208850: 0x3e00008  jr          $ra
    ctx->pc = 0x208850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208850u;
        // 0x208854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208858u;
}
