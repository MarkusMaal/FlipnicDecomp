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

// Function: entry_00152288
// Address: 0x152288 - 0x152298
void entry_00152288_0x152288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152288_0x152288");
#endif

    ctx->pc = 0x152288u;

    // 0x152288: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x152288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152290: 0x0  nop
    ctx->pc = 0x152290u;
    // NOP
    // 0x152294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x152298u;
}
