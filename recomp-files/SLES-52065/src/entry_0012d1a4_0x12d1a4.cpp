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

// Function: entry_0012d1a4
// Address: 0x12d1a4 - 0x12d1b4
void entry_0012d1a4_0x12d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d1a4_0x12d1a4");
#endif

    ctx->pc = 0x12d1a4u;

    // 0x12d1a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d1a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12D1A8u;
    {
        const bool branch_taken_0x12d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A8u;
        // 0x12d1ac: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1a8) {
            ctx->pc = 0x12D22Cu;
            return;
        }
    }
    ctx->pc = 0x12D1B0u;
    // 0x12d1b0: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x12d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    ctx->pc = 0x12d1b4u;
}
