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

// Function: FUN_00179670
// Address: 0x179670 - 0x17977c
void FUN_00179670_0x179670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179670_0x179670");
#endif

    switch (ctx->pc) {
        case 0x1796a4u: goto label_1796a4;
        case 0x179724u: goto label_179724;
        default: break;
    }

    ctx->pc = 0x179670u;

    // 0x179670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179674: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x179674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x179678: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x179678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17967c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x179680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179684: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x179688: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x179688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17968c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x179690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179694: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x179694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x179698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17969c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17969Cu;
    {
        const bool branch_taken_0x17969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17969Cu;
        // 0x1796a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17969c) {
            ctx->pc = 0x179744u;
            goto label_179744;
        }
    }
    ctx->pc = 0x1796A4u;
label_1796a4:
    // 0x1796a4: 0x90420838  lbu         $v0, 0x838($v0)
    ctx->pc = 0x1796a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2104)));
    // 0x1796a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1796A8u;
    {
        const bool branch_taken_0x1796a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1796a8) {
            ctx->pc = 0x179738u;
            goto label_179738;
        }
    }
    ctx->pc = 0x1796B0u;
    // 0x1796b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1796b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1796b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1796b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1796b8: 0x0  nop
    ctx->pc = 0x1796b8u;
    // NOP
    // 0x1796bc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1796bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1796c0: 0x0  nop
    ctx->pc = 0x1796c0u;
    // NOP
    // 0x1796c4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1796C4u;
    {
        const bool branch_taken_0x1796c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796C4u;
        // 0x1796c8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796c4) {
            ctx->pc = 0x179718u;
            goto label_179718;
        }
    }
    ctx->pc = 0x1796CCu;
    // 0x1796cc: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1796d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1796d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1796d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796d8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1796d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1796dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1796e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1796e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1796e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1796e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1796e8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1796e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796ec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1796ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1796f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1796f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1796f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1796f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1796f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1796fc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1796fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179700: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x179700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179708: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17970c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x179710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179710u;
    {
        const bool branch_taken_0x179710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179710u;
        // 0x179714: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179710) {
            ctx->pc = 0x179724u;
            goto label_179724;
        }
    }
    ctx->pc = 0x179718u;
label_179718:
    // 0x179718: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x179718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x17971c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17971Cu;
    SET_GPR_U32(ctx, 31, 0x179724u);
    ctx->pc = 0x179720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17971Cu;
    // 0x179720: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17971Cu, 0x179724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179724u;
label_179724:
    // 0x179724: 0x0  nop
    ctx->pc = 0x179724u;
    // NOP
    // 0x179728: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17972c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179730: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179734: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x179734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_179738:
    // 0x179738: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x17973c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x179740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_179744:
    // 0x179744: 0x0  nop
    ctx->pc = 0x179744u;
    // NOP
    // 0x179748: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x179748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17974c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17974cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179750: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x179750u;
    {
        const bool branch_taken_0x179750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179750u;
        // 0x179754: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179750) {
            ctx->pc = 0x1796A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1796a4;
        }
    }
    ctx->pc = 0x179758u;
    // 0x179758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x179758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17975c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179760: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x179760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179768: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x179768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17976c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17976cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179774: 0x3e00008  jr          $ra
    ctx->pc = 0x179774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179774u;
        // 0x179778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17977Cu;
}
