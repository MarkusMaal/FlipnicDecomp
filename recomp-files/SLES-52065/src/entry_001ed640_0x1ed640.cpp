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

// Function: entry_001ed640
// Address: 0x1ed640 - 0x1ed64c
void entry_001ed640_0x1ed640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed640_0x1ed640");
#endif

    ctx->pc = 0x1ed640u;

    // 0x1ed640: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed644: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x1ED644u;
    {
        const bool branch_taken_0x1ed644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED644u;
        // 0x1ed648: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed644) {
            ctx->pc = 0x1ED0D8u;
            return;
        }
    }
    ctx->pc = 0x1ED64Cu;
}
