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

// Function: FUN_00226460
// Address: 0x226460 - 0x2264c4
void FUN_00226460_0x226460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226460_0x226460");
#endif

    switch (ctx->pc) {
        case 0x226474u: goto label_226474;
        case 0x226490u: goto label_226490;
        case 0x22649cu: goto label_22649c;
        case 0x2264b8u: goto label_2264b8;
        default: break;
    }

    ctx->pc = 0x226460u;

    // 0x226460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226464: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x226464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x226468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22646c: 0xc0544a0  jal         func_151280
    ctx->pc = 0x22646Cu;
    SET_GPR_U32(ctx, 31, 0x226474u);
    ctx->pc = 0x226470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22646Cu;
    // 0x226470: 0x24847410  addiu       $a0, $a0, 0x7410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151280u, 0x22646Cu, 0x226474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226474u;
label_226474:
    // 0x226474: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x226474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x226478: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x226478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x22647c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x226480: 0x24847410  addiu       $a0, $a0, 0x7410
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
    // 0x226484: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x226484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x226488: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226488u;
    SET_GPR_U32(ctx, 31, 0x226490u);
    ctx->pc = 0x22648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226488u;
    // 0x22648c: 0x24c67400  addiu       $a2, $a2, 0x7400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226488u, 0x226490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226490u;
label_226490:
    // 0x226490: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x226490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x226494: 0xc04c998  jal         func_132660
    ctx->pc = 0x226494u;
    SET_GPR_U32(ctx, 31, 0x22649Cu);
    ctx->pc = 0x226498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226494u;
    // 0x226498: 0x24847430  addiu       $a0, $a0, 0x7430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132660u, 0x226494u, 0x22649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22649Cu;
label_22649c:
    // 0x22649c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x2264a0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2264a4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x2264a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x2264a8: 0x24847430  addiu       $a0, $a0, 0x7430
    ctx->pc = 0x2264a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    // 0x2264ac: 0x24a512a0  addiu       $a1, $a1, 0x12A0
    ctx->pc = 0x2264acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4768));
    // 0x2264b0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2264B0u;
    SET_GPR_U32(ctx, 31, 0x2264B8u);
    ctx->pc = 0x2264B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264B0u;
    // 0x2264b4: 0x24c67420  addiu       $a2, $a2, 0x7420 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2264B0u, 0x2264B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264B8u;
label_2264b8:
    // 0x2264b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2264b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2264bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2264BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264BCu;
        // 0x2264c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2264BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2264C4u;
}
