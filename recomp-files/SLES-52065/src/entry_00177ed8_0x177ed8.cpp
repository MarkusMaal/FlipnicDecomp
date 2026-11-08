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

// Function: entry_00177ed8
// Address: 0x177ed8 - 0x177f44
void entry_00177ed8_0x177ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ed8_0x177ed8");
#endif

    ctx->pc = 0x177ed8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x177F44u;
}
