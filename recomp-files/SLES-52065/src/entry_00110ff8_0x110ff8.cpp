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

// Function: entry_00110ff8
// Address: 0x110ff8 - 0x111008
void entry_00110ff8_0x110ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ff8_0x110ff8");
#endif

    ctx->pc = 0x110ff8u;

    // 0x110ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x110ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x111000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111000u;
    {
        const bool branch_taken_0x111000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111000u;
        // 0x111004: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111000) {
            ctx->pc = 0x11100Cu;
            return;
        }
    }
    ctx->pc = 0x111008u;
}
