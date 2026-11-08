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

// Function: FUN_00137520
// Address: 0x137520 - 0x137570
void FUN_00137520_0x137520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137520_0x137520");
#endif

    switch (ctx->pc) {
        case 0x137540u: goto label_137540;
        default: break;
    }

    ctx->pc = 0x137520u;

    // 0x137520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137528: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x137528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13752c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137530: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x137530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x137534: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x137534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x137538: 0xc04e5d4  jal         func_139750
    ctx->pc = 0x137538u;
    SET_GPR_U32(ctx, 31, 0x137540u);
    ctx->pc = 0x13753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137538u;
    // 0x13753c: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139750u, 0x137538u, 0x137540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137540u;
label_137540:
    // 0x137540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137544: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x137544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x137548: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13754c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x13754cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x137550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137554: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x137554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x137558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13755c: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x13755cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x137560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x137560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137568: 0x3e00008  jr          $ra
    ctx->pc = 0x137568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137568u;
        // 0x13756c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137570u;
}
