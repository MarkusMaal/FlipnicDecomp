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

// Function: entry_001ca1e8
// Address: 0x1ca1e8 - 0x1ca200
void entry_001ca1e8_0x1ca1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca1e8_0x1ca1e8");
#endif

    ctx->pc = 0x1ca1e8u;

    // 0x1ca1e8: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x1ca1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1ec: 0xa2800008  sb          $zero, 0x8($s4)
    ctx->pc = 0x1ca1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1f0: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca1f4: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x1ca1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca1f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA1F8u;
    {
        const bool branch_taken_0x1ca1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F8u;
        // 0x1ca1fc: 0xa0400084  sb          $zero, 0x84($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1f8) {
            ctx->pc = 0x1CA260u;
            return;
        }
    }
    ctx->pc = 0x1CA200u;
}
