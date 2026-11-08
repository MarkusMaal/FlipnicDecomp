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

// Function: entry_001fd2d4
// Address: 0x1fd2d4 - 0x1fd2e0
void entry_001fd2d4_0x1fd2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2d4_0x1fd2d4");
#endif

    ctx->pc = 0x1fd2d4u;

    // 0x1fd2d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD2D4u;
    {
        const bool branch_taken_0x1fd2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2D4u;
        // 0x1fd2d8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2d4) {
            ctx->pc = 0x1FD2ECu;
            return;
        }
    }
    ctx->pc = 0x1FD2DCu;
    // 0x1fd2dc: 0x0  nop
    ctx->pc = 0x1fd2dcu;
    // NOP
    ctx->pc = 0x1fd2e0u;
}
