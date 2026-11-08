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

// Function: entry_0017109c
// Address: 0x17109c - 0x1710b0
void entry_0017109c_0x17109c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017109c_0x17109c");
#endif

    ctx->pc = 0x17109cu;

    // 0x17109c: 0x8c82022c  lw          $v0, 0x22C($a0)
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1710a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1710A0u;
    {
        const bool branch_taken_0x1710a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1710a0) {
            ctx->pc = 0x1710B0u;
            return;
        }
    }
    ctx->pc = 0x1710A8u;
    // 0x1710a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1710a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1710ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1710acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x1710b0u;
}
