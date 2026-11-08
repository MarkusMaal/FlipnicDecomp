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

// Function: entry_001631cc
// Address: 0x1631cc - 0x16322c
void entry_001631cc_0x1631cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001631cc_0x1631cc");
#endif

    ctx->pc = 0x1631ccu;

    // 0x1631cc: 0x0  nop
    ctx->pc = 0x1631ccu;
    // NOP
    // 0x1631d0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1631d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1631d4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1631D4u;
    {
        const bool branch_taken_0x1631d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1631d4) {
            ctx->pc = 0x1631B0u;
            return;
        }
    }
    ctx->pc = 0x1631DCu;
    // 0x1631dc: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x1631e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1631e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1631e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1631e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1631f0: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x1631f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1631f4: 0xe461fffc  swc1        $f1, -0x4($v1)
    ctx->pc = 0x1631f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x1631f8: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1631fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x163200: 0xac64fffc  sw          $a0, -0x4($v1)
    ctx->pc = 0x163200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
    // 0x163204: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163208: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16320c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x16320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163210: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163218: 0x0  nop
    ctx->pc = 0x163218u;
    // NOP
    // 0x16321c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16321Cu;
    {
        const bool branch_taken_0x16321c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16321Cu;
        // 0x163220: 0xe621022c  swc1        $f1, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16321c) {
            ctx->pc = 0x16322Cu;
            return;
        }
    }
    ctx->pc = 0x163224u;
    // 0x163224: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x163224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163228: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x163228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    ctx->pc = 0x16322cu;
}
