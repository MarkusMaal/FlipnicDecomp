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

// Function: entry_001b93cc
// Address: 0x1b93cc - 0x1b9420
void entry_001b93cc_0x1b93cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b93cc_0x1b93cc");
#endif

    ctx->pc = 0x1b93ccu;

    // 0x1b93cc: 0x920300c4  lbu         $v1, 0xC4($s0)
    ctx->pc = 0x1b93ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1b93d0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B93D0u;
    {
        const bool branch_taken_0x1b93d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93d0) {
            ctx->pc = 0x1B947Cu;
            return;
        }
    }
    ctx->pc = 0x1B93D8u;
    // 0x1b93d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b93d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b93dc: 0xc420f450  lwc1        $f0, -0xBB0($at)
    ctx->pc = 0x1b93dcu;
    { uint32_t bits = FAST_READ32(0x36F450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93e0: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1b93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b93e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b93e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b93e8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b93ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b93ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b93f0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1b93f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b93f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b93f8: 0xc4212f58  lwc1        $f1, 0x2F58($at)
    ctx->pc = 0x1b93f8u;
    { uint32_t bits = FAST_READ32(0x212F58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b93fc: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1b93fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9404: 0x0  nop
    ctx->pc = 0x1b9404u;
    // NOP
    // 0x1b9408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9408u;
    {
        const bool branch_taken_0x1b9408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9408u;
        // 0x1b940c: 0x27a3007c  addiu       $v1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9408) {
            ctx->pc = 0x1B9420u;
            return;
        }
    }
    ctx->pc = 0x1B9410u;
    // 0x1b9410: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b9410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b9414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9414u;
    {
        const bool branch_taken_0x1b9414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9414u;
        // 0x1b9418: 0x24632f58  addiu       $v1, $v1, 0x2F58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9414) {
            ctx->pc = 0x1B9420u;
            return;
        }
    }
    ctx->pc = 0x1B941Cu;
    // 0x1b941c: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->pc = 0x1b9420u;
}
