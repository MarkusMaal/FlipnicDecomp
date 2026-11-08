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

// Function: FUN_00209480
// Address: 0x209480 - 0x2094c0
void FUN_00209480_0x209480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209480_0x209480");
#endif

    switch (ctx->pc) {
        case 0x209498u: goto label_209498;
        case 0x2094b4u: goto label_2094b4;
        default: break;
    }

    ctx->pc = 0x209480u;

    // 0x209480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209488: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20948c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x20948cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x209490: 0xc08227c  jal         func_2089F0
    ctx->pc = 0x209490u;
    SET_GPR_U32(ctx, 31, 0x209498u);
    ctx->pc = 0x209494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209490u;
    // 0x209494: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2089F0u, 0x209490u, 0x209498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209498u;
label_209498:
    // 0x209498: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20949c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2094a0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2094a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2094a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2094a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2094a8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2094a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2094ac: 0xc082216  jal         func_208858
    ctx->pc = 0x2094ACu;
    SET_GPR_U32(ctx, 31, 0x2094B4u);
    ctx->pc = 0x2094B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094ACu;
    // 0x2094b0: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208858u, 0x2094ACu, 0x2094B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094B4u;
label_2094b4:
    // 0x2094b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2094b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2094b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2094B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2094BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094B8u;
        // 0x2094bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2094C0u;
}
