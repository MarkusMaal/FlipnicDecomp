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

// Function: FUN_0015a130
// Address: 0x15a130 - 0x15a1b8
void FUN_0015a130_0x15a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a130_0x15a130");
#endif

    switch (ctx->pc) {
        case 0x15a16cu: goto label_15a16c;
        case 0x15a180u: goto label_15a180;
        case 0x15a194u: goto label_15a194;
        default: break;
    }

    ctx->pc = 0x15a130u;

    // 0x15a130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a138: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a148: 0xc4a002f0  lwc1        $f0, 0x2F0($a1)
    ctx->pc = 0x15a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a14c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a14cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a150: 0x0  nop
    ctx->pc = 0x15a150u;
    // NOP
    // 0x15a154: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A154u;
    {
        const bool branch_taken_0x15a154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A154u;
        // 0x15a158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a154) {
            ctx->pc = 0x15A164u;
            goto label_15a164;
        }
    }
    ctx->pc = 0x15A15Cu;
    // 0x15a15c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15A15Cu;
    {
        const bool branch_taken_0x15a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A15Cu;
        // 0x15a160: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a15c) {
            ctx->pc = 0x15A1A4u;
            goto label_15a1a4;
        }
    }
    ctx->pc = 0x15A164u;
label_15a164:
    // 0x15a164: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x15A164u;
    SET_GPR_U32(ctx, 31, 0x15A16Cu);
    ctx->pc = 0x15AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC00u, 0x15A164u, 0x15A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A16Cu;
label_15a16c:
    // 0x15a16c: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15a16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15a170: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15A170u;
    {
        const bool branch_taken_0x15a170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A170u;
        // 0x15a174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a170) {
            ctx->pc = 0x15A1A0u;
            goto label_15a1a0;
        }
    }
    ctx->pc = 0x15A178u;
    // 0x15a178: 0xc055c40  jal         func_157100
    ctx->pc = 0x15A178u;
    SET_GPR_U32(ctx, 31, 0x15A180u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x15A178u, 0x15A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A180u;
label_15a180:
    // 0x15a180: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x15a180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x15a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a18c: 0xc042118  jal         func_108460
    ctx->pc = 0x15A18Cu;
    SET_GPR_U32(ctx, 31, 0x15A194u);
    ctx->pc = 0x15A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A18Cu;
    // 0x15a190: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A18Cu, 0x15A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A194u;
label_15a194:
    // 0x15a194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A198u;
    {
        const bool branch_taken_0x15a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A198u;
        // 0x15a19c: 0xae220210  sw          $v0, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a198) {
            ctx->pc = 0x15A1A4u;
            goto label_15a1a4;
        }
    }
    ctx->pc = 0x15A1A0u;
label_15a1a0:
    // 0x15a1a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a1a4:
    // 0x15a1a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a1a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1B0u;
        // 0x15a1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A1B8u;
}
