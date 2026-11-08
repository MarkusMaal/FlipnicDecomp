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

// Function: entry_001204a4
// Address: 0x1204a4 - 0x1204b8
void entry_001204a4_0x1204a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001204a4_0x1204a4");
#endif

    ctx->pc = 0x1204a4u;

    // 0x1204a4: 0x0  nop
    ctx->pc = 0x1204a4u;
    // NOP
    // 0x1204a8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1204a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1204ac: 0x330182b  sltu        $v1, $t9, $s0
    ctx->pc = 0x1204acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1204b0: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1204B0u;
    {
        const bool branch_taken_0x1204b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204B0u;
        // 0x1204b4: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204b0) {
            ctx->pc = 0x120384u;
            return;
        }
    }
    ctx->pc = 0x1204B8u;
}
