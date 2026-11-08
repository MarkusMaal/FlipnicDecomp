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

// Function: entry_00178d38
// Address: 0x178d38 - 0x178da4
void entry_00178d38_0x178d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d38_0x178d38");
#endif

    ctx->pc = 0x178d38u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x178DA4u;
}
