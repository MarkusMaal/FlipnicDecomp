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

// Function: entry_0015bbc4
// Address: 0x15bbc4 - 0x15bbd8
void entry_0015bbc4_0x15bbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bbc4_0x15bbc4");
#endif

    ctx->pc = 0x15bbc4u;

    // 0x15bbc4: 0x82020029  lb          $v0, 0x29($s0)
    ctx->pc = 0x15bbc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15bbc8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15bbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15bbcc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BBCCu;
    {
        const bool branch_taken_0x15bbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbcc) {
            ctx->pc = 0x15BBD8u;
            return;
        }
    }
    ctx->pc = 0x15BBD4u;
    // 0x15bbd4: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15bbd8u;
}
