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

// Function: entry_00174d40
// Address: 0x174d40 - 0x174da0
void entry_00174d40_0x174d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d40_0x174d40");
#endif

    ctx->pc = 0x174d40u;

    // 0x174d40: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x174d44: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x174d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x174d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174d4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174d50: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x174d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174d54: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x174d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174d58: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x174d5c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x174d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174d60: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x174d64: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x174d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x174d68: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174d6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x174d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x174d70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174d78: 0x0  nop
    ctx->pc = 0x174d78u;
    // NOP
    // 0x174d7c: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x174d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x174d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x174D80u;
    {
        const bool branch_taken_0x174d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D80u;
        // 0x174d84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d80) {
            ctx->pc = 0x174DA0u;
            return;
        }
    }
    ctx->pc = 0x174D88u;
    // 0x174d88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174d8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x174d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x174d90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174d98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DC4u;
            return;
        }
    }
    ctx->pc = 0x174DA0u;
}
