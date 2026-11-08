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

// Function: entry_0016628c
// Address: 0x16628c - 0x16629c
void entry_0016628c_0x16628c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016628c_0x16628c");
#endif

    ctx->pc = 0x16628cu;

    // 0x16628c: 0x86020232  lh          $v0, 0x232($s0)
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x166290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166294: 0x0  nop
    ctx->pc = 0x166294u;
    // NOP
    // 0x166298: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x166298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x16629cu;
}
