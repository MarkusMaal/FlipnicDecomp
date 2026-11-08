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

// Function: FUN_0014f290
// Address: 0x14f290 - 0x14f330
void FUN_0014f290_0x14f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f290_0x14f290");
#endif

    switch (ctx->pc) {
        case 0x14f2c0u: goto label_14f2c0;
        case 0x14f2d8u: goto label_14f2d8;
        case 0x14f2fcu: goto label_14f2fc;
        case 0x14f310u: goto label_14f310;
        default: break;
    }

    ctx->pc = 0x14f290u;

    // 0x14f290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f298: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14f298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f29c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f2a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f2a4: 0xc78085dc  lwc1        $f0, -0x7A24($gp)
    ctx->pc = 0x14f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14f2a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f2ac: 0x0  nop
    ctx->pc = 0x14f2acu;
    // NOP
    // 0x14f2b0: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x14F2B0u;
    {
        const bool branch_taken_0x14f2b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B0u;
        // 0x14f2b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2b0) {
            ctx->pc = 0x14F31Cu;
            goto label_14f31c;
        }
    }
    ctx->pc = 0x14F2B8u;
    // 0x14f2b8: 0xc060908  jal         func_182420
    ctx->pc = 0x14F2B8u;
    SET_GPR_U32(ctx, 31, 0x14F2C0u);
    ctx->pc = 0x182420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182420u, 0x14F2B8u, 0x14F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C0u;
label_14f2c0:
    // 0x14f2c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14f2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14f2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2d0: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x14F2D0u;
    SET_GPR_U32(ctx, 31, 0x14F2D8u);
    ctx->pc = 0x14F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2D0u;
    // 0x14f2d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x14F2D0u, 0x14F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2D8u;
label_14f2d8:
    // 0x14f2d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f2dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f2e0: 0x0  nop
    ctx->pc = 0x14f2e0u;
    // NOP
    // 0x14f2e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14f2e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14f2e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f2ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14f2f0: 0xc78f85dc  lwc1        $f15, -0x7A24($gp)
    ctx->pc = 0x14f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14f2f4: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x14F2F4u;
    SET_GPR_U32(ctx, 31, 0x14F2FCu);
    ctx->pc = 0x14F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2F4u;
    // 0x14f2f8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x14F2F4u, 0x14F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2FCu;
label_14f2fc:
    // 0x14f2fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f300: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x14f300u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14f304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f308: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x14F308u;
    SET_GPR_U32(ctx, 31, 0x14F310u);
    ctx->pc = 0x14F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F308u;
    // 0x14f30c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x14F308u, 0x14F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F310u;
label_14f310:
    // 0x14f310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f314: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14f318: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14f318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_14f31c:
    // 0x14f31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f328: 0x3e00008  jr          $ra
    ctx->pc = 0x14F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F328u;
        // 0x14f32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F330u;
}
