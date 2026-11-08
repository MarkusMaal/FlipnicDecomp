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

// Function: entry_00178634
// Address: 0x178634 - 0x1786a0
void entry_00178634_0x178634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178634_0x178634");
#endif

    ctx->pc = 0x178634u;

    // 0x178634: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x178634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17863c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178644: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178648: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x178648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17864c: 0x0  nop
    ctx->pc = 0x17864cu;
    // NOP
    // 0x178650: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x178650u;
    {
        const bool branch_taken_0x178650 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178650u;
        // 0x178654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178650) {
            ctx->pc = 0x1786A0u;
            return;
        }
    }
    ctx->pc = 0x178658u;
    // 0x178658: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x178658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17865c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178660: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x178660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178664: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x178664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178668: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17866c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x17866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x178670: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x178670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178674: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x178674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x178678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17867c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17867cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178680: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x178680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x178684: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x178684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178688: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x178688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17868c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17868cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x178690: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x178690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x178694: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x178694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x178698: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178698u;
    {
        const bool branch_taken_0x178698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178698u;
        // 0x17869c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178698) {
            ctx->pc = 0x1786A8u;
            return;
        }
    }
    ctx->pc = 0x1786A0u;
}
