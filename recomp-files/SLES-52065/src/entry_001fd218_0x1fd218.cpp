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

// Function: entry_001fd218
// Address: 0x1fd218 - 0x1fd224
void entry_001fd218_0x1fd218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd218_0x1fd218");
#endif

    ctx->pc = 0x1fd218u;

    // 0x1fd218: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fd218u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd21c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1FD21Cu;
    {
        const bool branch_taken_0x1fd21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD21Cu;
        // 0x1fd220: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd21c) {
            ctx->pc = 0x1FD2D0u;
            return;
        }
    }
    ctx->pc = 0x1FD224u;
}
