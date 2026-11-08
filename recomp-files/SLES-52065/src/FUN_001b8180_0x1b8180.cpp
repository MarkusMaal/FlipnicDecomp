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

// Function: FUN_001b8180
// Address: 0x1b8180 - 0x1b81e4
void FUN_001b8180_0x1b8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8180_0x1b8180");
#endif

    switch (ctx->pc) {
        case 0x1b819cu: goto label_1b819c;
        case 0x1b81a8u: goto label_1b81a8;
        default: break;
    }

    ctx->pc = 0x1b8180u;

    // 0x1b8180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8188: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b818c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1b818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1b8190: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1b8190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b8194: 0xc06ee30  jal         func_1BB8C0
    ctx->pc = 0x1B8194u;
    SET_GPR_U32(ctx, 31, 0x1B819Cu);
    ctx->pc = 0x1B8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8194u;
    // 0x1b8198: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x1B8194u, 0x1B819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B819Cu;
label_1b819c:
    // 0x1b819c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81a0: 0xc06ef50  jal         func_1BBD40
    ctx->pc = 0x1B81A0u;
    SET_GPR_U32(ctx, 31, 0x1B81A8u);
    ctx->pc = 0x1B81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81A0u;
    // 0x1b81a4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD40u, 0x1B81A0u, 0x1B81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81A8u;
label_1b81a8:
    // 0x1b81a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b81b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b81b4: 0xac22f278  sw          $v0, -0xD88($at)
    ctx->pc = 0x1b81b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F278u, _value); } while (0);
    // 0x1b81b8: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x1b81b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b81bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81c0: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x1b81c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b81c4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81c8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1b81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1b81cc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81d0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1b81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1b81d4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1b81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b81d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b81d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b81dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B81DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81DCu;
        // 0x1b81e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B81DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B81E4u;
}
