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

// Function: FUN_001f3990
// Address: 0x1f3990 - 0x1f39c8
void FUN_001f3990_0x1f3990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3990_0x1f3990");
#endif

    switch (ctx->pc) {
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39b8u: goto label_1f39b8;
        default: break;
    }

    ctx->pc = 0x1f3990u;

    // 0x1f3990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3998: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1F3998u;
    SET_GPR_U32(ctx, 31, 0x1F39A0u);
    ctx->pc = 0x1F399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3998u;
    // 0x1f399c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1F3998u, 0x1F39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39A0u;
label_1f39a0:
    // 0x1f39a0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1f39a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f39a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f39a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F39A8u;
    {
        const bool branch_taken_0x1f39a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A8u;
        // 0x1f39ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39a8) {
            ctx->pc = 0x1F39BCu;
            goto label_1f39bc;
        }
    }
    ctx->pc = 0x1F39B0u;
    // 0x1f39b0: 0xc07aea8  jal         func_1EBAA0
    ctx->pc = 0x1F39B0u;
    SET_GPR_U32(ctx, 31, 0x1F39B8u);
    ctx->pc = 0x1EBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBAA0u, 0x1F39B0u, 0x1F39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39B8u;
label_1f39b8:
    // 0x1f39b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f39bc:
    // 0x1f39bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f39bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f39c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F39C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39C0u;
        // 0x1f39c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F39C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F39C8u;
}
