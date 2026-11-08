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

// Function: entry_00159f24
// Address: 0x159f24 - 0x159f34
void entry_00159f24_0x159f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159f24_0x159f24");
#endif

    ctx->pc = 0x159f24u;

    // 0x159f24: 0x86030236  lh          $v1, 0x236($s0)
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x159f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f2c: 0x0  nop
    ctx->pc = 0x159f2cu;
    // NOP
    // 0x159f30: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x159f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x159f34u;
}
