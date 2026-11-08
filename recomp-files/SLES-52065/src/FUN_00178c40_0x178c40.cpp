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

// Function: FUN_00178c40
// Address: 0x178c40 - 0x178dfc
void FUN_00178c40_0x178c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178c40_0x178c40");
#endif

    switch (ctx->pc) {
        case 0x178c6cu: goto label_178c6c;
        case 0x178cf0u: goto label_178cf0;
        case 0x178d38u: goto label_178d38;
        case 0x178db0u: goto label_178db0;
        default: break;
    }

    ctx->pc = 0x178c40u;

    // 0x178c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178c48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x178c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x178c4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178c50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178c58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x178c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178c5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c60: 0x8c910450  lw          $s1, 0x450($a0)
    ctx->pc = 0x178c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x178c64: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x178C64u;
    {
        const bool branch_taken_0x178c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C64u;
        // 0x178c68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c64) {
            ctx->pc = 0x178D20u;
            goto label_178d20;
        }
    }
    ctx->pc = 0x178C6Cu;
label_178c6c:
    // 0x178c6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178c74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178c78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178c80: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x178c80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178c84: 0x0  nop
    ctx->pc = 0x178c84u;
    // NOP
    // 0x178c88: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x178C88u;
    {
        const bool branch_taken_0x178c88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C88u;
        // 0x178c8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c88) {
            ctx->pc = 0x178CE0u;
            goto label_178ce0;
        }
    }
    ctx->pc = 0x178C90u;
    // 0x178c90: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x178c94: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x178c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x178c98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x178c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178c9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178ca0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x178ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178ca4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178ca8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x178cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178cb0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x178cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cb4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x178cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178cbc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cc0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x178cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x178cc4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x178cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cc8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x178cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178cd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178cd4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x178cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x178cd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178CD8u;
    {
        const bool branch_taken_0x178cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CD8u;
        // 0x178cdc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cd8) {
            ctx->pc = 0x178CF0u;
            goto label_178cf0;
        }
    }
    ctx->pc = 0x178CE0u;
label_178ce0:
    // 0x178ce0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x178ce4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178ce8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x178CE8u;
    SET_GPR_U32(ctx, 31, 0x178CF0u);
    ctx->pc = 0x178CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178CE8u;
    // 0x178cec: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x178CE8u, 0x178CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178CF0u;
label_178cf0:
    // 0x178cf0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178cf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x178cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178cfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178d04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178d0c: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x178d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178d10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178D14u;
    {
        const bool branch_taken_0x178d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D14u;
        // 0x178d18: 0xac650040  sw          $a1, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d14) {
            ctx->pc = 0x178D20u;
            goto label_178d20;
        }
    }
    ctx->pc = 0x178D1Cu;
    // 0x178d1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d20:
    // 0x178d20: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x178d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178d24: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x178D24u;
    {
        const bool branch_taken_0x178d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D24u;
        // 0x178d28: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d24) {
            ctx->pc = 0x178C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178c6c;
        }
    }
    ctx->pc = 0x178D2Cu;
    // 0x178d2c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x178D30u;
    {
        const bool branch_taken_0x178d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D30u;
        // 0x178d34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d30) {
            ctx->pc = 0x178DCCu;
            goto label_178dcc;
        }
    }
    ctx->pc = 0x178D38u;
label_178d38:
    // 0x178d38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178d40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x178d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178d44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x178d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x178d48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178d4c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x178d4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178d50: 0x0  nop
    ctx->pc = 0x178d50u;
    // NOP
    // 0x178d54: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x178D54u;
    {
        const bool branch_taken_0x178d54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D54u;
        // 0x178d58: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d54) {
            ctx->pc = 0x178DA4u;
            goto label_178da4;
        }
    }
    ctx->pc = 0x178D5Cu;
    // 0x178d5c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x178d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178d60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178d64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x178d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178d6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178d70: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x178d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178d74: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x178d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178d78: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x178d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x178d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x178d80: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178d84: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x178d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x178d88: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x178d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178d8c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x178d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x178d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x178d94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178d98: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x178d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x178d9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178D9Cu;
    {
        const bool branch_taken_0x178d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D9Cu;
        // 0x178da0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d9c) {
            ctx->pc = 0x178DB0u;
            goto label_178db0;
        }
    }
    ctx->pc = 0x178DA4u;
label_178da4:
    // 0x178da4: 0x0  nop
    ctx->pc = 0x178da4u;
    // NOP
    // 0x178da8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x178DA8u;
    SET_GPR_U32(ctx, 31, 0x178DB0u);
    ctx->pc = 0x178DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DA8u;
    // 0x178dac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x178DA8u, 0x178DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DB0u;
label_178db0:
    // 0x178db0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x178db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178db4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178db8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178dbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178dc8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x178dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_178dcc:
    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
    // 0x178dd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x178dd4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x178dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178dd8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x178DD8u;
    {
        const bool branch_taken_0x178dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DD8u;
        // 0x178ddc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dd8) {
            ctx->pc = 0x178D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d38;
        }
    }
    ctx->pc = 0x178DE0u;
    // 0x178de0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178de4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178de8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x178de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178df4: 0x3e00008  jr          $ra
    ctx->pc = 0x178DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DF4u;
        // 0x178df8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DFCu;
}
