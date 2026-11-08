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

// Function: entry_001f62a0
// Address: 0x1f62a0 - 0x1f62b0
void entry_001f62a0_0x1f62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f62a0_0x1f62a0");
#endif

    ctx->pc = 0x1f62a0u;

    // 0x1f62a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f62a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f62a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F62A8u;
    {
        const bool branch_taken_0x1f62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62A8u;
        // 0x1f62ac: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62a8) {
            ctx->pc = 0x1F62C4u;
            return;
        }
    }
    ctx->pc = 0x1F62B0u;
}
