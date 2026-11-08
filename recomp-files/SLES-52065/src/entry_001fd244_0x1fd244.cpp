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

// Function: entry_001fd244
// Address: 0x1fd244 - 0x1fd250
void entry_001fd244_0x1fd244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd244_0x1fd244");
#endif

    ctx->pc = 0x1fd244u;

    // 0x1fd244: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD244u;
    {
        const bool branch_taken_0x1fd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD244u;
        // 0x1fd248: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd244) {
            ctx->pc = 0x1FD26Cu;
            return;
        }
    }
    ctx->pc = 0x1FD24Cu;
    // 0x1fd24c: 0x0  nop
    ctx->pc = 0x1fd24cu;
    // NOP
    ctx->pc = 0x1fd250u;
}
