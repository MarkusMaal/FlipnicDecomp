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

// Function: entry_001fd2e0
// Address: 0x1fd2e0 - 0x1fd2ec
void entry_001fd2e0_0x1fd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2e0_0x1fd2e0");
#endif

    ctx->pc = 0x1fd2e0u;

    // 0x1fd2e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2e4: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2E4u;
    {
        const bool branch_taken_0x1fd2e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E4u;
        // 0x1fd2e8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2e4) {
            ctx->pc = 0x1FD304u;
            return;
        }
    }
    ctx->pc = 0x1FD2ECu;
}
