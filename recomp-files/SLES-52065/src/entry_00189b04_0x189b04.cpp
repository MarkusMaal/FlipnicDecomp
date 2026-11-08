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

// Function: entry_00189b04
// Address: 0x189b04 - 0x189b28
void entry_00189b04_0x189b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b04_0x189b04");
#endif

    ctx->pc = 0x189b04u;

    // 0x189b04: 0x0  nop
    ctx->pc = 0x189b04u;
    // NOP
    // 0x189b08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x189b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189b10: 0x0  nop
    ctx->pc = 0x189b10u;
    // NOP
    // 0x189b14: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x189b14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x189b18: 0x0  nop
    ctx->pc = 0x189b18u;
    // NOP
    // 0x189b1c: 0x0  nop
    ctx->pc = 0x189b1cu;
    // NOP
    // 0x189b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189B20u;
    {
        const bool branch_taken_0x189b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b20) {
            ctx->pc = 0x189B2Cu;
            return;
        }
    }
    ctx->pc = 0x189B28u;
}
