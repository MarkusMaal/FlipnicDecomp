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

// Function: FUN_00177db0
// Address: 0x177db0 - 0x177fa0
void FUN_00177db0_0x177db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177db0_0x177db0");
#endif

    switch (ctx->pc) {
        case 0x177de0u: goto label_177de0;
        case 0x177de8u: goto label_177de8;
        case 0x177e00u: goto label_177e00;
        case 0x177e78u: goto label_177e78;
        case 0x177ed8u: goto label_177ed8;
        case 0x177f50u: goto label_177f50;
        default: break;
    }

    ctx->pc = 0x177db0u;

    // 0x177db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x177db4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x177db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x177db8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x177db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x177dbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x177dc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177dc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x177dcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x177dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177dd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dd8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x177DD8u;
    {
        const bool branch_taken_0x177dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DD8u;
        // 0x177ddc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dd8) {
            ctx->pc = 0x177EBCu;
            goto label_177ebc;
        }
    }
    ctx->pc = 0x177DE0u;
label_177de0:
    // 0x177de0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x177DE0u;
    {
        const bool branch_taken_0x177de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DE0u;
        // 0x177de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177de0) {
            ctx->pc = 0x177E9Cu;
            goto label_177e9c;
        }
    }
    ctx->pc = 0x177DE8u;
label_177de8:
    // 0x177de8: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x177dec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x177decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x177df0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177df4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x177df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x177df8: 0xc05e0b8  jal         func_1782E0
    ctx->pc = 0x177DF8u;
    SET_GPR_U32(ctx, 31, 0x177E00u);
    ctx->pc = 0x177DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DF8u;
    // 0x177dfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1782E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1782E0u, 0x177DF8u, 0x177E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E00u;
label_177e00:
    // 0x177e00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x177e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177e08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177e0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x177e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177e10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x177e14: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177e14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177e18: 0x0  nop
    ctx->pc = 0x177e18u;
    // NOP
    // 0x177e1c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177E1Cu;
    {
        const bool branch_taken_0x177e1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E1Cu;
        // 0x177e20: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e1c) {
            ctx->pc = 0x177E6Cu;
            goto label_177e6c;
        }
    }
    ctx->pc = 0x177E24u;
    // 0x177e24: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177e2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177e34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e38: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177e3c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e40: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x177e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177e48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e4c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x177e50: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x177e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x177e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177e5c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e60: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x177e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177e64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177E64u;
    {
        const bool branch_taken_0x177e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E64u;
        // 0x177e68: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e64) {
            ctx->pc = 0x177E78u;
            goto label_177e78;
        }
    }
    ctx->pc = 0x177E6Cu;
label_177e6c:
    // 0x177e6c: 0x0  nop
    ctx->pc = 0x177e6cu;
    // NOP
    // 0x177e70: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x177E70u;
    SET_GPR_U32(ctx, 31, 0x177E78u);
    ctx->pc = 0x177E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E70u;
    // 0x177e74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x177E70u, 0x177E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E78u;
label_177e78:
    // 0x177e78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177e7c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x177e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177e80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177e84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x177e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177e88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x177e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x177e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177e98: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x177e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_177e9c:
    // 0x177e9c: 0x0  nop
    ctx->pc = 0x177e9cu;
    // NOP
    // 0x177ea0: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x177ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x177ea4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x177ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x177ea8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x177eac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177eb0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x177EB0u;
    {
        const bool branch_taken_0x177eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177eb0) {
            ctx->pc = 0x177DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177de8;
        }
    }
    ctx->pc = 0x177EB8u;
    // 0x177eb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_177ebc:
    // 0x177ebc: 0x0  nop
    ctx->pc = 0x177ebcu;
    // NOP
    // 0x177ec0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x177ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x177ec4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x177EC4u;
    {
        const bool branch_taken_0x177ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EC4u;
        // 0x177ec8: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ec4) {
            ctx->pc = 0x177DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177de0;
        }
    }
    ctx->pc = 0x177ECCu;
    // 0x177ecc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x177eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177ed0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x177ED0u;
    {
        const bool branch_taken_0x177ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ED0u;
        // 0x177ed4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ed0) {
            ctx->pc = 0x177F6Cu;
            goto label_177f6c;
        }
    }
    ctx->pc = 0x177ED8u;
label_177ed8:
    // 0x177ed8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x177ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177ee0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x177ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x177ee4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x177ee8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x177eec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177eecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177ef0: 0x0  nop
    ctx->pc = 0x177ef0u;
    // NOP
    // 0x177ef4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177EF4u;
    {
        const bool branch_taken_0x177ef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EF4u;
        // 0x177ef8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ef4) {
            ctx->pc = 0x177F44u;
            goto label_177f44;
        }
    }
    ctx->pc = 0x177EFCu;
    // 0x177efc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177f04: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177f0c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177f10: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177f14: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f18: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x177f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177f20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177f24: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x177f28: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x177f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177f2c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x177f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177f34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177f38: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x177f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177f3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177F3Cu;
    {
        const bool branch_taken_0x177f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F3Cu;
        // 0x177f40: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f3c) {
            ctx->pc = 0x177F50u;
            goto label_177f50;
        }
    }
    ctx->pc = 0x177F44u;
label_177f44:
    // 0x177f44: 0x0  nop
    ctx->pc = 0x177f44u;
    // NOP
    // 0x177f48: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x177F48u;
    SET_GPR_U32(ctx, 31, 0x177F50u);
    ctx->pc = 0x177F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F48u;
    // 0x177f4c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x177F48u, 0x177F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F50u;
label_177f50:
    // 0x177f50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177f54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x177f58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x177f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x177f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f68: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x177f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_177f6c:
    // 0x177f6c: 0x0  nop
    ctx->pc = 0x177f6cu;
    // NOP
    // 0x177f70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x177f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x177f74: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x177f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177f78: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x177F78u;
    {
        const bool branch_taken_0x177f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F78u;
        // 0x177f7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f78) {
            ctx->pc = 0x177ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177ed8;
        }
    }
    ctx->pc = 0x177F80u;
    // 0x177f80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x177f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177f84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177f88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177f8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177f90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f98: 0x3e00008  jr          $ra
    ctx->pc = 0x177F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F98u;
        // 0x177f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FA0u;
}
