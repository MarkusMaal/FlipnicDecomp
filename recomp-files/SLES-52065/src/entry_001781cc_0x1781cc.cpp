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

// Function: entry_001781cc
// Address: 0x1781cc - 0x1781e8
void entry_001781cc_0x1781cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781cc_0x1781cc");
#endif

    ctx->pc = 0x1781ccu;

    // 0x1781cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1781ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1781d0: 0x0  nop
    ctx->pc = 0x1781d0u;
    // NOP
    // 0x1781d4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1781d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1781d8: 0x0  nop
    ctx->pc = 0x1781d8u;
    // NOP
    // 0x1781dc: 0x0  nop
    ctx->pc = 0x1781dcu;
    // NOP
    // 0x1781e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1781E0u;
    {
        const bool branch_taken_0x1781e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e0) {
            ctx->pc = 0x178254u;
            return;
        }
    }
    ctx->pc = 0x1781E8u;
}
