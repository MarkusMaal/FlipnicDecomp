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

// Function: entry_00175fb4
// Address: 0x175fb4 - 0x176020
void entry_00175fb4_0x175fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175fb4_0x175fb4");
#endif

    ctx->pc = 0x175fb4u;

    // 0x175fb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175fbc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x175fc0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x175fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x175fc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x175fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175fc8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x175fc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175fcc: 0x0  nop
    ctx->pc = 0x175fccu;
    // NOP
    // 0x175fd0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x176020u;
            return;
        }
    }
    ctx->pc = 0x175FD8u;
    // 0x175fd8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x175fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175fe0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x175fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175fe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175fe8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x175fec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x175fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x175ff0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x175ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ff4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x175ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ff8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x175ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x175ffc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x175ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176000: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176004: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x176004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176008: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x176008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17600c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17600cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176010: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176014: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176018u;
    {
        const bool branch_taken_0x176018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176018u;
        // 0x17601c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176018) {
            ctx->pc = 0x176028u;
            return;
        }
    }
    ctx->pc = 0x176020u;
}
