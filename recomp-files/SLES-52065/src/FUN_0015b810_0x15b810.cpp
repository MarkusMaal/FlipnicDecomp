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

// Function: FUN_0015b810
// Address: 0x15b810 - 0x15b888
void FUN_0015b810_0x15b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b810_0x15b810");
#endif

    switch (ctx->pc) {
        case 0x15b838u: goto label_15b838;
        case 0x15b85cu: goto label_15b85c;
        case 0x15b874u: goto label_15b874;
        default: break;
    }

    ctx->pc = 0x15b810u;

    // 0x15b810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15b818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b820: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b824: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15b828: 0xc48c01c0  lwc1        $f12, 0x1C0($a0)
    ctx->pc = 0x15b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b82c: 0xc60d0200  lwc1        $f13, 0x200($s0)
    ctx->pc = 0x15b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15b830: 0xc054e18  jal         func_153860
    ctx->pc = 0x15B830u;
    SET_GPR_U32(ctx, 31, 0x15B838u);
    ctx->pc = 0x15B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B830u;
    // 0x15b834: 0x24850300  addiu       $a1, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x15B830u, 0x15B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B838u;
label_15b838:
    // 0x15b838: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15b838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b83c: 0x0  nop
    ctx->pc = 0x15b83cu;
    // NOP
    // 0x15b840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15b840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b844: 0x0  nop
    ctx->pc = 0x15b844u;
    // NOP
    // 0x15b848: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x15B848u;
    {
        const bool branch_taken_0x15b848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B848u;
        // 0x15b84c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b848) {
            ctx->pc = 0x15B878u;
            goto label_15b878;
        }
    }
    ctx->pc = 0x15B850u;
    // 0x15b850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b854: 0xc042118  jal         func_108460
    ctx->pc = 0x15B854u;
    SET_GPR_U32(ctx, 31, 0x15B85Cu);
    ctx->pc = 0x15B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B854u;
    // 0x15b858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15B854u, 0x15B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B85Cu;
label_15b85c:
    // 0x15b85c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b860: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x15b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x15b864: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15b864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b868: 0x8045002b  lb          $a1, 0x2B($v0)
    ctx->pc = 0x15b868u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x15b86c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15B86Cu;
    SET_GPR_U32(ctx, 31, 0x15B874u);
    ctx->pc = 0x15B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B86Cu;
    // 0x15b870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B86Cu, 0x15B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b878:
    // 0x15b878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b880: 0x3e00008  jr          $ra
    ctx->pc = 0x15B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B880u;
        // 0x15b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B888u;
}
