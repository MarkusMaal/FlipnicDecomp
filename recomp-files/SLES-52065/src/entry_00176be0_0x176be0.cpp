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

// Function: entry_00176be0
// Address: 0x176be0 - 0x176c7c
void entry_00176be0_0x176be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176be0_0x176be0");
#endif

    ctx->pc = 0x176be0u;

    // 0x176be0: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176be4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x176be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176be8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x176BE8u;
    {
        const bool branch_taken_0x176be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BE8u;
        // 0x176bec: 0x212a021  addu        $s4, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176be8) {
            ctx->pc = 0x176B18u;
            return;
        }
    }
    ctx->pc = 0x176BF0u;
    // 0x176bf0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x176bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x176bf4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x176bf8: 0x27b30074  addiu       $s3, $sp, 0x74
    ctx->pc = 0x176bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x176bfc: 0x27b40078  addiu       $s4, $sp, 0x78
    ctx->pc = 0x176bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x176c00: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x176c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x176c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176c0c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x176c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x176c10: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x176c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x176c14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x176c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176c18: 0x8e040c20  lw          $a0, 0xC20($s0)
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176c1c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x176c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176c20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176c24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x176c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176c30: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x176C30u;
    {
        const bool branch_taken_0x176c30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C30u;
        // 0x176c34: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c30) {
            ctx->pc = 0x176C7Cu;
            return;
        }
    }
    ctx->pc = 0x176C38u;
    // 0x176c38: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c3c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c48: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176c4c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x176c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c50: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c58: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c5c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176c60: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x176c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c64: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x176c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c70: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176C74u;
    {
        const bool branch_taken_0x176c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C74u;
        // 0x176c78: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c74) {
            ctx->pc = 0x176C84u;
            return;
        }
    }
    ctx->pc = 0x176C7Cu;
}
