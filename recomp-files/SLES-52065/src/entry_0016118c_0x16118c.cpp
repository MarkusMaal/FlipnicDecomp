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

// Function: entry_0016118c
// Address: 0x16118c - 0x1611a4
void entry_0016118c_0x16118c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016118c_0x16118c");
#endif

    ctx->pc = 0x16118cu;

    // 0x16118c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161198: 0x0  nop
    ctx->pc = 0x161198u;
    // NOP
    // 0x16119c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1611a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1611a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x1611a4u;
}
