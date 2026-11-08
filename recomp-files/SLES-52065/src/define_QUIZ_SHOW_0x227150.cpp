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

// Function: define_QUIZ_SHOW
// Address: 0x227150 - 0x2271a0
void define_QUIZ_SHOW_0x227150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_QUIZ_SHOW_0x227150");
#endif

    switch (ctx->pc) {
        case 0x22717cu: goto label_22717c;
        case 0x227194u: goto label_227194;
        default: break;
    }

    ctx->pc = 0x227150u;

    // 0x227150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227154: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227158: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22715c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227160: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227168: 0x2484dcc0  addiu       $a0, $a0, -0x2340
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958272));
    // 0x22716c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227170: 0x24c60440  addiu       $a2, $a2, 0x440
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
    // 0x227174: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227174u;
    SET_GPR_U32(ctx, 31, 0x22717Cu);
    ctx->pc = 0x227178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227174u;
    // 0x227178: 0x24e709f0  addiu       $a3, $a3, 0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227174u, 0x22717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22717Cu;
label_22717c:
    // 0x22717c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227180: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227188: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22718c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22718Cu;
    SET_GPR_U32(ctx, 31, 0x227194u);
    ctx->pc = 0x227190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22718Cu;
    // 0x227190: 0x24c6dcb0  addiu       $a2, $a2, -0x2350 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22718Cu, 0x227194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227194u;
label_227194:
    // 0x227194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227198: 0x3e00008  jr          $ra
    ctx->pc = 0x227198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227198u;
        // 0x22719c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271A0u;
}
