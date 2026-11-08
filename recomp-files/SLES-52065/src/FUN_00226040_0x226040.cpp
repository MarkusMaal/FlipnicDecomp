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

// Function: FUN_00226040
// Address: 0x226040 - 0x226094
void FUN_00226040_0x226040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226040_0x226040");
#endif

    switch (ctx->pc) {
        case 0x226050u: goto label_226050;
        case 0x226068u: goto label_226068;
        case 0x226070u: goto label_226070;
        case 0x226088u: goto label_226088;
        default: break;
    }

    ctx->pc = 0x226040u;

    // 0x226040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226048: 0xc078604  jal         func_1E1810
    ctx->pc = 0x226048u;
    SET_GPR_U32(ctx, 31, 0x226050u);
    ctx->pc = 0x22604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226048u;
    // 0x22604c: 0x27848414  addiu       $a0, $gp, -0x7BEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x226048u, 0x226050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x226054: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x226054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x226058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22605c: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x22605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
    // 0x226060: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226060u;
    SET_GPR_U32(ctx, 31, 0x226068u);
    ctx->pc = 0x226064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226060u;
    // 0x226064: 0x24c62cd0  addiu       $a2, $a2, 0x2CD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226060u, 0x226068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226068u;
label_226068:
    // 0x226068: 0xc07874c  jal         func_1E1D30
    ctx->pc = 0x226068u;
    SET_GPR_U32(ctx, 31, 0x226070u);
    ctx->pc = 0x22606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226068u;
    // 0x22606c: 0x27848418  addiu       $a0, $gp, -0x7BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1D30u, 0x226068u, 0x226070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226070u;
label_226070:
    // 0x226070: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x226074: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x226078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22607c: 0x24a52030  addiu       $a1, $a1, 0x2030
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
    // 0x226080: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226080u;
    SET_GPR_U32(ctx, 31, 0x226088u);
    ctx->pc = 0x226084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226080u;
    // 0x226084: 0x24c62ce0  addiu       $a2, $a2, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226080u, 0x226088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226088u;
label_226088:
    // 0x226088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22608c: 0x3e00008  jr          $ra
    ctx->pc = 0x22608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22608Cu;
        // 0x226090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226094u;
}
