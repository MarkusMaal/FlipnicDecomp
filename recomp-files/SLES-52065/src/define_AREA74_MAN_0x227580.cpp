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

// Function: define_AREA74_MAN
// Address: 0x227580 - 0x2275d0
void define_AREA74_MAN_0x227580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_AREA74_MAN_0x227580");
#endif

    switch (ctx->pc) {
        case 0x2275acu: goto label_2275ac;
        case 0x2275c4u: goto label_2275c4;
        default: break;
    }

    ctx->pc = 0x227580u;

    // 0x227580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227584: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22758c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227590: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x227590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x227594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227598: 0x2484e0d0  addiu       $a0, $a0, -0x1F30
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959312));
    // 0x22759c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2275a0: 0x24c608b8  addiu       $a2, $a2, 0x8B8
    ctx->pc = 0x2275a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2232));
    // 0x2275a4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2275A4u;
    SET_GPR_U32(ctx, 31, 0x2275ACu);
    ctx->pc = 0x2275A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275A4u;
    // 0x2275a8: 0x24e7a430  addiu       $a3, $a3, -0x5BD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2275A4u, 0x2275ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275ACu;
label_2275ac:
    // 0x2275ac: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2275acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2275b0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2275b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2275b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275b8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2275b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2275bc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2275BCu;
    SET_GPR_U32(ctx, 31, 0x2275C4u);
    ctx->pc = 0x2275C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275BCu;
    // 0x2275c0: 0x24c6e0b8  addiu       $a2, $a2, -0x1F48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2275BCu, 0x2275C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275C4u;
label_2275c4:
    // 0x2275c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2275c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2275c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2275C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275C8u;
        // 0x2275cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2275D0u;
}
