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

// Function: entry_00158f64
// Address: 0x158f64 - 0x158f78
void entry_00158f64_0x158f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158f64_0x158f64");
#endif

    ctx->pc = 0x158f64u;

    // 0x158f64: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x158f68: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x158f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158f6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F6Cu;
    {
        const bool branch_taken_0x158f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f6c) {
            ctx->pc = 0x158F78u;
            return;
        }
    }
    ctx->pc = 0x158F74u;
    // 0x158f74: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x158f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x158f78u;
}
