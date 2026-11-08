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

// Function: entry_0015a1f4
// Address: 0x15a1f4 - 0x15a208
void entry_0015a1f4_0x15a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a1f4_0x15a1f4");
#endif

    ctx->pc = 0x15a1f4u;

    // 0x15a1f4: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15a1f8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15a1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a1fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A1FCu;
    {
        const bool branch_taken_0x15a1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1fc) {
            ctx->pc = 0x15A208u;
            return;
        }
    }
    ctx->pc = 0x15A204u;
    // 0x15a204: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x15a204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15a208u;
}
