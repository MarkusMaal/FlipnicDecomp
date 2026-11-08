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

// Function: FUN_00136620
// Address: 0x136620 - 0x136670
void FUN_00136620_0x136620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136620_0x136620");
#endif

    switch (ctx->pc) {
        case 0x13663cu: goto label_13663c;
        case 0x136654u: goto label_136654;
        default: break;
    }

    ctx->pc = 0x136620u;

    // 0x136620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136628: 0x83828540  lb          $v0, -0x7AC0($gp)
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935872)));
    // 0x13662c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13662Cu;
    {
        const bool branch_taken_0x13662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13662Cu;
        // 0x136630: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13662c) {
            ctx->pc = 0x13665Cu;
            goto label_13665c;
        }
    }
    ctx->pc = 0x136634u;
    // 0x136634: 0xc04d99c  jal         func_136670
    ctx->pc = 0x136634u;
    SET_GPR_U32(ctx, 31, 0x13663Cu);
    ctx->pc = 0x136638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136634u;
    // 0x136638: 0x24846390  addiu       $a0, $a0, 0x6390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136670u, 0x136634u, 0x13663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13663Cu;
label_13663c:
    // 0x13663c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x13663cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x136640: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x136644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136648: 0x24a56770  addiu       $a1, $a1, 0x6770
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    // 0x13664c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13664Cu;
    SET_GPR_U32(ctx, 31, 0x136654u);
    ctx->pc = 0x136650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13664Cu;
    // 0x136650: 0x24c66380  addiu       $a2, $a2, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13664Cu, 0x136654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136654u;
label_136654:
    // 0x136654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136658: 0xa3828540  sb          $v0, -0x7AC0($gp)
    ctx->pc = 0x136658u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935872), (uint8_t)GPR_U32(ctx, 2));
label_13665c:
    // 0x13665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136660: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x136660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x136664: 0x24426390  addiu       $v0, $v0, 0x6390
    ctx->pc = 0x136664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25488));
    // 0x136668: 0x3e00008  jr          $ra
    ctx->pc = 0x136668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136668u;
        // 0x13666c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136670u;
}
