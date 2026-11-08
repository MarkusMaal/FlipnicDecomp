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

// Function: FUN_00160d70
// Address: 0x160d70 - 0x160ed4
void FUN_00160d70_0x160d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160d70_0x160d70");
#endif

    switch (ctx->pc) {
        case 0x160dd8u: goto label_160dd8;
        default: break;
    }

    ctx->pc = 0x160d70u;

    // 0x160d70: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x160d74: 0x8c890020  lw          $t1, 0x20($a0)
    ctx->pc = 0x160d74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x160d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160d7c: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x160d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160d80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x160d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160d84: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x160d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x160d88: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x160d8c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x160d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x160d90: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x160d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160d94: 0x0  nop
    ctx->pc = 0x160d94u;
    // NOP
    // 0x160d98: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x160d98u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x160d9c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x160d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x160da0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x160da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x160da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160da8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x160dac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x160dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x160db0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x160db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160db4: 0x460d0800  add.s       $f0, $f1, $f13
    ctx->pc = 0x160db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x160db8: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x160db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160dbc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x160dbcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x160dc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x160dc4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x160dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x160dc8: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x160DC8u;
    {
        const bool branch_taken_0x160dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DC8u;
        // 0x160dcc: 0x24ab0001  addiu       $t3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dc8) {
            ctx->pc = 0x160E9Cu;
            goto label_160e9c;
        }
    }
    ctx->pc = 0x160DD0u;
    // 0x160dd0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x160dd0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dd4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x160dd4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160dd8:
    // 0x160dd8: 0xec7021  addu        $t6, $a3, $t4
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x160ddc: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x160de0: 0x85c60002  lh          $a2, 0x2($t6)
    ctx->pc = 0x160de0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x160de4: 0x24780028  addiu       $t8, $v1, 0x28
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x160de8: 0x85c50000  lh          $a1, 0x0($t6)
    ctx->pc = 0x160de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x160dec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x160decu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160df0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160df0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160df4: 0x0  nop
    ctx->pc = 0x160df4u;
    // NOP
    // 0x160df8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x160dfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x160e00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x160e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x160e04: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x160e08: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x160e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x160e0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x160e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x160e10: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x160e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x160e14: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x160e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x160e18: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x160e18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x160e1c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x160e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x160e20: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x160e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x160e24: 0x85c50006  lh          $a1, 0x6($t6)
    ctx->pc = 0x160e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 6)));
    // 0x160e28: 0x85c30004  lh          $v1, 0x4($t6)
    ctx->pc = 0x160e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x160e2c: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x160E2Cu;
    {
        const bool branch_taken_0x160e2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x160E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E2Cu;
        // 0x160e30: 0x25cf0002  addiu       $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e2c) {
            ctx->pc = 0x160E84u;
            goto label_160e84;
        }
    }
    ctx->pc = 0x160E34u;
    // 0x160e34: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x160e38: 0x1543000b  bne         $t2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x160E38u;
    {
        const bool branch_taken_0x160e38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x160e38) {
            ctx->pc = 0x160E68u;
            goto label_160e68;
        }
    }
    ctx->pc = 0x160E40u;
    // 0x160e40: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x160e44: 0x15630008  bne         $t3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x160E44u;
    {
        const bool branch_taken_0x160e44 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x160e44) {
            ctx->pc = 0x160E68u;
            goto label_160e68;
        }
    }
    ctx->pc = 0x160E4Cu;
    // 0x160e4c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160e50: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x160e54: 0x90630041  lbu         $v1, 0x41($v1)
    ctx->pc = 0x160e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x160e58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x160E58u;
    {
        const bool branch_taken_0x160e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e58) {
            ctx->pc = 0x160E84u;
            goto label_160e84;
        }
    }
    ctx->pc = 0x160E60u;
    // 0x160e60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x160E60u;
    {
        const bool branch_taken_0x160e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e60) {
            ctx->pc = 0x160ECCu;
            goto label_160ecc;
        }
    }
    ctx->pc = 0x160E68u;
label_160e68:
    // 0x160e68: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x160e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e6c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x160e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160e70: 0x0  nop
    ctx->pc = 0x160e70u;
    // NOP
    // 0x160e74: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x160E74u;
    {
        const bool branch_taken_0x160e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160e74) {
            ctx->pc = 0x160E84u;
            goto label_160e84;
        }
    }
    ctx->pc = 0x160E7Cu;
    // 0x160e7c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x160e7cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x160e80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e84:
    // 0x160e84: 0x0  nop
    ctx->pc = 0x160e84u;
    // NOP
    // 0x160e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160e8c: 0x49182a  slt         $v1, $v0, $t1
    ctx->pc = 0x160e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x160e90: 0x258c0050  addiu       $t4, $t4, 0x50
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x160e94: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x160E94u;
    {
        const bool branch_taken_0x160e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E94u;
        // 0x160e98: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e94) {
            ctx->pc = 0x160DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160dd8;
        }
    }
    ctx->pc = 0x160E9Cu;
label_160e9c:
    // 0x160e9c: 0x0  nop
    ctx->pc = 0x160e9cu;
    // NOP
    // 0x160ea0: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
    // 0x160ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160ea8: 0x0  nop
    ctx->pc = 0x160ea8u;
    // NOP
    // 0x160eac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x160eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160eb0: 0x0  nop
    ctx->pc = 0x160eb0u;
    // NOP
    // 0x160eb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x160EB4u;
    {
        const bool branch_taken_0x160eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160eb4) {
            ctx->pc = 0x160EC4u;
            goto label_160ec4;
        }
    }
    ctx->pc = 0x160EBCu;
    // 0x160ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160EBCu;
    {
        const bool branch_taken_0x160ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ebc) {
            ctx->pc = 0x160ECCu;
            goto label_160ecc;
        }
    }
    ctx->pc = 0x160EC4u;
label_160ec4:
    // 0x160ec4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160ec8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_160ecc:
    // 0x160ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x160ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160ED4u;
}
