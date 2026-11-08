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

// Function: entry_0016171c
// Address: 0x16171c - 0x16173c
void entry_0016171c_0x16171c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016171c_0x16171c");
#endif

    ctx->pc = 0x16171cu;

    // 0x16171c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x16171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x161720: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161724: 0xc4620090  lwc1        $f2, 0x90($v1)
    ctx->pc = 0x161724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161728: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16172c: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x16172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161730: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x161730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x161734: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x161734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161738: 0xe44001e0  swc1        $f0, 0x1E0($v0)
    ctx->pc = 0x161738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 480), bits); }
    ctx->pc = 0x16173cu;
}
