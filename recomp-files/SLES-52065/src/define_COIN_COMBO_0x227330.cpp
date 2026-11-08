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

// Function: define_COIN_COMBO
// Address: 0x227330 - 0x227380
void define_COIN_COMBO_0x227330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_COIN_COMBO_0x227330");
#endif

    switch (ctx->pc) {
        case 0x22735cu: goto label_22735c;
        case 0x227374u: goto label_227374;
        default: break;
    }

    ctx->pc = 0x227330u;

    // 0x227330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227334: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227338: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22733c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22733cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227340: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227348: 0x2484de80  addiu       $a0, $a0, -0x2180
    ctx->pc = 0x227348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    // 0x22734c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227350: 0x24c604d8  addiu       $a2, $a2, 0x4D8
    ctx->pc = 0x227350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1240));
    // 0x227354: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227354u;
    SET_GPR_U32(ctx, 31, 0x22735Cu);
    ctx->pc = 0x227358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227354u;
    // 0x227358: 0x24e73e20  addiu       $a3, $a3, 0x3E20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227354u, 0x22735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22735Cu;
label_22735c:
    // 0x22735c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22735cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227360: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227368: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22736c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22736Cu;
    SET_GPR_U32(ctx, 31, 0x227374u);
    ctx->pc = 0x227370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22736Cu;
    // 0x227370: 0x24c6de70  addiu       $a2, $a2, -0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22736Cu, 0x227374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227374u;
label_227374:
    // 0x227374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227378: 0x3e00008  jr          $ra
    ctx->pc = 0x227378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227378u;
        // 0x22737c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227380u;
}
