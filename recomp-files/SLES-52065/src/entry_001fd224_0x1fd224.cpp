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

// Function: entry_001fd224
// Address: 0x1fd224 - 0x1fd22c
void entry_001fd224_0x1fd224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd224_0x1fd224");
#endif

    ctx->pc = 0x1fd224u;

    // 0x1fd224: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FD224u;
    {
        const bool branch_taken_0x1fd224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD224u;
        // 0x1fd228: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd224) {
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD22Cu;
}
