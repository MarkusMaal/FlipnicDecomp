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

// Function: entry_0013a370
// Address: 0x13a370 - 0x13a3a4
void entry_0013a370_0x13a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a370_0x13a370");
#endif

    ctx->pc = 0x13a370u;

    // 0x13a370: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a374: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a37c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a380: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x13a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a388: 0x0  nop
    ctx->pc = 0x13a388u;
    // NOP
    // 0x13a38c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13A38Cu;
    {
        const bool branch_taken_0x13a38c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A38Cu;
        // 0x13a390: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a38c) {
            ctx->pc = 0x13A3A4u;
            return;
        }
    }
    ctx->pc = 0x13A394u;
    // 0x13a394: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a39c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a3a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x13a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x13a3a4u;
}
