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

// Function: FUN_001b8750
// Address: 0x1b8750 - 0x1b87e4
void FUN_001b8750_0x1b8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8750_0x1b8750");
#endif

    switch (ctx->pc) {
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87c0u: goto label_1b87c0;
        default: break;
    }

    ctx->pc = 0x1b8750u;

    // 0x1b8750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8758: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b875c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8764: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1b8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1b8768: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b876c: 0xc06eb98  jal         func_1BAE60
    ctx->pc = 0x1B876Cu;
    SET_GPR_U32(ctx, 31, 0x1B8774u);
    ctx->pc = 0x1B8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B876Cu;
    // 0x1b8770: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE60u, 0x1B876Cu, 0x1B8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8774u;
label_1b8774:
    // 0x1b8774: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1b8774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b8778: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B8778u;
    SET_GPR_U32(ctx, 31, 0x1B8780u);
    ctx->pc = 0x1B877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8778u;
    // 0x1b877c: 0x8fb0002c  lw          $s0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B8778u, 0x1B8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8780u;
label_1b8780:
    // 0x1b8780: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8780u;
    {
        const bool branch_taken_0x1b8780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8780u;
        // 0x1b8784: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8780) {
            ctx->pc = 0x1B8790u;
            goto label_1b8790;
        }
    }
    ctx->pc = 0x1B8788u;
    // 0x1b8788: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B8788u;
    {
        const bool branch_taken_0x1b8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8788u;
        // 0x1b878c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8788) {
            ctx->pc = 0x1B87D4u;
            goto label_1b87d4;
        }
    }
    ctx->pc = 0x1B8790u;
label_1b8790:
    // 0x1b8790: 0x8022f2a8  lb          $v0, -0xD58($at)
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963880)));
    // 0x1b8794: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8794u;
    {
        const bool branch_taken_0x1b8794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8794) {
            ctx->pc = 0x1B87CCu;
            goto label_1b87cc;
        }
    }
    ctx->pc = 0x1B879Cu;
    // 0x1b879c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b87a0: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1B87A0u;
    SET_GPR_U32(ctx, 31, 0x1B87A8u);
    ctx->pc = 0x1B87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87A0u;
    // 0x1b87a4: 0x2484f2b0  addiu       $a0, $a0, -0xD50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1B87A0u, 0x1B87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87A8u;
label_1b87a8:
    // 0x1b87a8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b87ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b87b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b87b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87b4: 0x24a589b0  addiu       $a1, $a1, -0x7650
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
    // 0x1b87b8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B87B8u;
    SET_GPR_U32(ctx, 31, 0x1B87C0u);
    ctx->pc = 0x1B87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87B8u;
    // 0x1b87bc: 0x24c6f298  addiu       $a2, $a2, -0xD68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B87B8u, 0x1B87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87C0u;
label_1b87c0:
    // 0x1b87c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b87c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b87c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b87c8: 0xa022f2a8  sb          $v0, -0xD58($at)
    ctx->pc = 0x1b87c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F2A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F2A8u, _value); } while (0);
label_1b87cc:
    // 0x1b87cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b87d0: 0x2442f2b0  addiu       $v0, $v0, -0xD50
    ctx->pc = 0x1b87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963888));
label_1b87d4:
    // 0x1b87d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b87d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b87d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b87d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b87dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B87DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87DCu;
        // 0x1b87e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B87E4u;
}
