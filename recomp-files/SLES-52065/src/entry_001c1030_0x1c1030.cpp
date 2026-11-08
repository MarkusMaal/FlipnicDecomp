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

// Function: entry_001c1030
// Address: 0x1c1030 - 0x1c1048
void entry_001c1030_0x1c1030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1030_0x1c1030");
#endif

    ctx->pc = 0x1c1030u;

    // 0x1c1030: 0xa2630008  sb          $v1, 0x8($s3)
    ctx->pc = 0x1c1030u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c1034: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1c1034u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1038: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c103c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1c103cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1040: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1040u;
    {
        const bool branch_taken_0x1c1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1040u;
        // 0x1c1044: 0xa0430084  sb          $v1, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1040) {
            ctx->pc = 0x1C1090u;
            return;
        }
    }
    ctx->pc = 0x1C1048u;
}
