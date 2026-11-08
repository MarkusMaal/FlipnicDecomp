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

// Function: entry_0016107c
// Address: 0x16107c - 0x1610bc
void entry_0016107c_0x16107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016107c_0x16107c");
#endif

    ctx->pc = 0x16107cu;

    // 0x16107c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16107cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161080: 0x0  nop
    ctx->pc = 0x161080u;
    // NOP
    // 0x161084: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x161084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161088: 0x0  nop
    ctx->pc = 0x161088u;
    // NOP
    // 0x16108c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16108Cu;
    {
        const bool branch_taken_0x16108c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16108c) {
            ctx->pc = 0x1610BCu;
            return;
        }
    }
    ctx->pc = 0x161094u;
    // 0x161094: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161098: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610BCu;
            return;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1610a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1610a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1610a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1610a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1610ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1610b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1610b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1610b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1610b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1610b8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1610b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1610bcu;
}
