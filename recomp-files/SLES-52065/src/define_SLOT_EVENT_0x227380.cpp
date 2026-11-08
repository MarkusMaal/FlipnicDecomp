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

// Function: define_SLOT_EVENT
// Address: 0x227380 - 0x2273d0
void define_SLOT_EVENT_0x227380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_SLOT_EVENT_0x227380");
#endif

    switch (ctx->pc) {
        case 0x2273acu: goto label_2273ac;
        case 0x2273c4u: goto label_2273c4;
        default: break;
    }

    ctx->pc = 0x227380u;

    // 0x227380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227384: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227388: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22738c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22738cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227390: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227398: 0x2484dec0  addiu       $a0, $a0, -0x2140
    ctx->pc = 0x227398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958784));
    // 0x22739c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2273a0: 0x24c604e8  addiu       $a2, $a2, 0x4E8
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1256));
    // 0x2273a4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2273A4u;
    SET_GPR_U32(ctx, 31, 0x2273ACu);
    ctx->pc = 0x2273A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273A4u;
    // 0x2273a8: 0x24e74a00  addiu       $a3, $a3, 0x4A00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2273A4u, 0x2273ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273ACu;
label_2273ac:
    // 0x2273ac: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2273acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2273b0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2273b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2273b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2273b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273b8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2273b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2273bc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2273BCu;
    SET_GPR_U32(ctx, 31, 0x2273C4u);
    ctx->pc = 0x2273C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273BCu;
    // 0x2273c0: 0x24c6deb0  addiu       $a2, $a2, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2273BCu, 0x2273C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273C4u;
label_2273c4:
    // 0x2273c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2273c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2273c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2273C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273C8u;
        // 0x2273cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2273D0u;
}
