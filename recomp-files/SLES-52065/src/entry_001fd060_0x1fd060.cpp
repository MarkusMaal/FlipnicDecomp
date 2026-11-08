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

// Function: entry_001fd060
// Address: 0x1fd060 - 0x1fd070
void entry_001fd060_0x1fd060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd060_0x1fd060");
#endif

    ctx->pc = 0x1fd060u;

    // 0x1fd060: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd064: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FD064u;
    {
        const bool branch_taken_0x1fd064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD064u;
        // 0x1fd068: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd064) {
            ctx->pc = 0x1FD0E8u;
            return;
        }
    }
    ctx->pc = 0x1FD06Cu;
    // 0x1fd06c: 0x0  nop
    ctx->pc = 0x1fd06cu;
    // NOP
    ctx->pc = 0x1fd070u;
}
