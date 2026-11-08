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

// Function: entry_00161328
// Address: 0x161328 - 0x161340
void entry_00161328_0x161328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161328_0x161328");
#endif

    ctx->pc = 0x161328u;

    // 0x161328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16132c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161334: 0x0  nop
    ctx->pc = 0x161334u;
    // NOP
    // 0x161338: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x161338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16133c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16133cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x161340u;
}
