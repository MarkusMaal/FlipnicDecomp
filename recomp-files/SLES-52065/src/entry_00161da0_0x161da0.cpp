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

// Function: entry_00161da0
// Address: 0x161da0 - 0x161dd8
void entry_00161da0_0x161da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161da0_0x161da0");
#endif

    ctx->pc = 0x161da0u;

    // 0x161da0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x161da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161da4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x161da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x161da8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x161da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161dac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161db0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161db0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161db4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x161db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x161db8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x161db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x161dbc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x161dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161dc0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x161dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161dc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161dc8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x161dcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161dccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161dd0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x161dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x161dd4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x161dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x161dd8u;
}
