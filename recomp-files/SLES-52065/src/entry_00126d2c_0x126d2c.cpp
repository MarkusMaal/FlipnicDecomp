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

// Function: entry_00126d2c
// Address: 0x126d2c - 0x126d44
void entry_00126d2c_0x126d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126d2c_0x126d2c");
#endif

    ctx->pc = 0x126d2cu;

    // 0x126d2c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x126d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x126d30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126d38: 0x0  nop
    ctx->pc = 0x126d38u;
    // NOP
    // 0x126d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126d40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x126d44u;
}
