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

// Function: entry_001746b8
// Address: 0x1746b8 - 0x174724
void entry_001746b8_0x1746b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001746b8_0x1746b8");
#endif

    ctx->pc = 0x1746b8u;

    // 0x1746b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1746b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1746bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1746bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1746c0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1746c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1746c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1746c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1746c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1746cc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1746ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746d0: 0x0  nop
    ctx->pc = 0x1746d0u;
    // NOP
    // 0x1746d4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1746D4u;
    {
        const bool branch_taken_0x1746d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1746D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746D4u;
        // 0x1746d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746d4) {
            ctx->pc = 0x174724u;
            return;
        }
    }
    ctx->pc = 0x1746DCu;
    // 0x1746dc: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1746dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1746e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1746e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1746e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1746e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1746ec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1746ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1746f0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1746f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1746f4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1746f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1746f8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1746f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1746fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174700: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174704: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174708: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17470c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174710: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174714: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174718: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17471c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17471Cu;
    {
        const bool branch_taken_0x17471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17471Cu;
        // 0x174720: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17471c) {
            ctx->pc = 0x174730u;
            return;
        }
    }
    ctx->pc = 0x174724u;
}
