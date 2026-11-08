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

// Function: entry_0013a300
// Address: 0x13a300 - 0x13a370
void entry_0013a300_0x13a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a300_0x13a300");
#endif

    ctx->pc = 0x13a300u;

    // 0x13a300: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a308: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a30c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a310: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x13a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a314: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a318: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x13a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a31c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a320: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x13a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a324: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a328: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a32c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a330: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x13a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a334: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a338: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x13a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a33c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a340: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x13a340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13a344: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a348: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a34c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x13a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a350: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x13a350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a354: 0x0  nop
    ctx->pc = 0x13a354u;
    // NOP
    // 0x13a358: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13A358u;
    {
        const bool branch_taken_0x13a358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A358u;
        // 0x13a35c: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a358) {
            ctx->pc = 0x13A370u;
            return;
        }
    }
    ctx->pc = 0x13A360u;
    // 0x13a360: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13a360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13a364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a36c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x13a370u;
}
