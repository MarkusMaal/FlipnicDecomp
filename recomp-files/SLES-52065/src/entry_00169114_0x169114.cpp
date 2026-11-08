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

// Function: entry_00169114
// Address: 0x169114 - 0x16912c
void entry_00169114_0x169114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169114_0x169114");
#endif

    ctx->pc = 0x169114u;

    // 0x169114: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x169114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169118: 0x0  nop
    ctx->pc = 0x169118u;
    // NOP
    // 0x16911c: 0x0  nop
    ctx->pc = 0x16911cu;
    // NOP
    // 0x169120: 0x0  nop
    ctx->pc = 0x169120u;
    // NOP
    // 0x169124: 0x46000004  c1          0x4
    ctx->pc = 0x169124u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x169128: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x169128u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x16912cu;
}
