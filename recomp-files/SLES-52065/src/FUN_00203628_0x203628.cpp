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

// Function: FUN_00203628
// Address: 0x203628 - 0x20365c
void FUN_00203628_0x203628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203628_0x203628");
#endif

    switch (ctx->pc) {
        case 0x203650u: goto label_203650;
        default: break;
    }

    ctx->pc = 0x203628u;

    // 0x203628: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x203628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20362c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x203630: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x203630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203638: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x203638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20363c: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x20363cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x203640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203644: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x203644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203648: 0xc080d02  jal         func_203408
    ctx->pc = 0x203648u;
    SET_GPR_U32(ctx, 31, 0x203650u);
    ctx->pc = 0x20364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203648u;
    // 0x20364c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203408u, 0x203648u, 0x203650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203650u;
label_203650:
    // 0x203650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203654: 0x3e00008  jr          $ra
    ctx->pc = 0x203654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20365Cu;
}
