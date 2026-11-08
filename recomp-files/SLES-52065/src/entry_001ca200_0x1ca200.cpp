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

// Function: entry_001ca200
// Address: 0x1ca200 - 0x1ca218
void entry_001ca200_0x1ca200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca200_0x1ca200");
#endif

    ctx->pc = 0x1ca200u;

    // 0x1ca200: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x1ca200u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca204: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca204u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca208: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca20c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1ca20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca210: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA210u;
    {
        const bool branch_taken_0x1ca210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA210u;
        // 0x1ca214: 0xa0430084  sb          $v1, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca210) {
            ctx->pc = 0x1CA260u;
            return;
        }
    }
    ctx->pc = 0x1CA218u;
}
