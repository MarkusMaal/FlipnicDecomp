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

// Function: entry_001889bc
// Address: 0x1889bc - 0x1889e0
void entry_001889bc_0x1889bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889bc_0x1889bc");
#endif

    ctx->pc = 0x1889bcu;

    // 0x1889bc: 0x0  nop
    ctx->pc = 0x1889bcu;
    // NOP
    // 0x1889c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1889c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1889c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1889c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1889c8: 0x0  nop
    ctx->pc = 0x1889c8u;
    // NOP
    // 0x1889cc: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1889ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1889d0: 0x0  nop
    ctx->pc = 0x1889d0u;
    // NOP
    // 0x1889d4: 0x0  nop
    ctx->pc = 0x1889d4u;
    // NOP
    // 0x1889d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1889D8u;
    {
        const bool branch_taken_0x1889d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889d8) {
            ctx->pc = 0x1889E4u;
            return;
        }
    }
    ctx->pc = 0x1889E0u;
}
