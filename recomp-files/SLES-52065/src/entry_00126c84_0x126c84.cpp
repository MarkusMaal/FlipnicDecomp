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

// Function: entry_00126c84
// Address: 0x126c84 - 0x126c9c
void entry_00126c84_0x126c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126c84_0x126c84");
#endif

    ctx->pc = 0x126c84u;

    // 0x126c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x126c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x126c88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126c90: 0x0  nop
    ctx->pc = 0x126c90u;
    // NOP
    // 0x126c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126c98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x126c9cu;
}
