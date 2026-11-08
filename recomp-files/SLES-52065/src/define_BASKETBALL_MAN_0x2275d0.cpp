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

// Function: define_BASKETBALL_MAN
// Address: 0x2275d0 - 0x227620
void define_BASKETBALL_MAN_0x2275d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_BASKETBALL_MAN_0x2275d0");
#endif

    switch (ctx->pc) {
        case 0x2275fcu: goto label_2275fc;
        case 0x227614u: goto label_227614;
        default: break;
    }

    ctx->pc = 0x2275d0u;

    // 0x2275d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2275d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2275d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2275d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2275d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2275dc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2275dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2275e0: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x2275e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2275e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2275e8: 0x2484e110  addiu       $a0, $a0, -0x1EF0
    ctx->pc = 0x2275e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959376));
    // 0x2275ec: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2275ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2275f0: 0x24c60968  addiu       $a2, $a2, 0x968
    ctx->pc = 0x2275f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2408));
    // 0x2275f4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2275F4u;
    SET_GPR_U32(ctx, 31, 0x2275FCu);
    ctx->pc = 0x2275F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275F4u;
    // 0x2275f8: 0x24e7aa50  addiu       $a3, $a3, -0x55B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2275F4u, 0x2275FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275FCu;
label_2275fc:
    // 0x2275fc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227600: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227608: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22760c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22760Cu;
    SET_GPR_U32(ctx, 31, 0x227614u);
    ctx->pc = 0x227610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22760Cu;
    // 0x227610: 0x24c6e100  addiu       $a2, $a2, -0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22760Cu, 0x227614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227614u;
label_227614:
    // 0x227614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227618: 0x3e00008  jr          $ra
    ctx->pc = 0x227618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227618u;
        // 0x22761c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227620u;
}
