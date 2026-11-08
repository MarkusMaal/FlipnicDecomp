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

// Function: entry_0013a4a4
// Address: 0x13a4a4 - 0x13a4f0
void entry_0013a4a4_0x13a4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4a4_0x13a4a4");
#endif

    ctx->pc = 0x13a4a4u;

    // 0x13a4a4: 0x0  nop
    ctx->pc = 0x13a4a4u;
    // NOP
    // 0x13a4a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a4b0: 0x0  nop
    ctx->pc = 0x13a4b0u;
    // NOP
    // 0x13a4b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13a4b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13a4b8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a4c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a4c4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a4c8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x13a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a4d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x13a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a4d4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a4dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a4e0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a4e4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x13a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a4ec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x13a4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x13a4f0u;
}
