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

// Function: FUN_00209418
// Address: 0x209418 - 0x209450
void FUN_00209418_0x209418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209418_0x209418");
#endif

    switch (ctx->pc) {
        case 0x209430u: goto label_209430;
        case 0x209444u: goto label_209444;
        default: break;
    }

    ctx->pc = 0x209418u;

    // 0x209418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20941c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209420: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x209424: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x209424u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209428: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209428u;
    SET_GPR_U32(ctx, 31, 0x209430u);
    ctx->pc = 0x20942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209428u;
    // 0x20942c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209428u, 0x209430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209438: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x209438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20943c: 0xc082238  jal         func_2088E0
    ctx->pc = 0x20943Cu;
    SET_GPR_U32(ctx, 31, 0x209444u);
    ctx->pc = 0x209440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20943Cu;
    // 0x209440: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x20943Cu, 0x209444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209448: 0x3e00008  jr          $ra
    ctx->pc = 0x209448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209448u;
        // 0x20944c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209450u;
}
