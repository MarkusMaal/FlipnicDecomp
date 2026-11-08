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

// Function: FUN_00118720
// Address: 0x118720 - 0x118768
void FUN_00118720_0x118720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118720_0x118720");
#endif

    switch (ctx->pc) {
        case 0x118730u: goto label_118730;
        case 0x118738u: goto label_118738;
        case 0x118740u: goto label_118740;
        case 0x118748u: goto label_118748;
        case 0x118750u: goto label_118750;
        default: break;
    }

    ctx->pc = 0x118720u;

    // 0x118720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118728: 0xc04c2b4  jal         func_130AD0
    ctx->pc = 0x118728u;
    SET_GPR_U32(ctx, 31, 0x118730u);
    ctx->pc = 0x130AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AD0u, 0x118728u, 0x118730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0xc04c2a8  jal         func_130AA0
    ctx->pc = 0x118730u;
    SET_GPR_U32(ctx, 31, 0x118738u);
    ctx->pc = 0x130AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AA0u, 0x118730u, 0x118738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118738u;
label_118738:
    // 0x118738: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x118738u;
    SET_GPR_U32(ctx, 31, 0x118740u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x118738u, 0x118740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118740u;
label_118740:
    // 0x118740: 0xc04a07c  jal         func_1281F0
    ctx->pc = 0x118740u;
    SET_GPR_U32(ctx, 31, 0x118748u);
    ctx->pc = 0x118744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118740u;
    // 0x118744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281F0u, 0x118740u, 0x118748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118748u;
label_118748:
    // 0x118748: 0xc060774  jal         func_181DD0
    ctx->pc = 0x118748u;
    SET_GPR_U32(ctx, 31, 0x118750u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x118748u, 0x118750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118750u;
label_118750:
    // 0x118750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x118754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118758: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x118758u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x11875c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11875cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118760: 0x3e00008  jr          $ra
    ctx->pc = 0x118760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118760u;
        // 0x118764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118768u;
}
