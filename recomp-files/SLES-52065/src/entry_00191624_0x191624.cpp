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

// Function: entry_00191624
// Address: 0x191624 - 0x191634
void entry_00191624_0x191624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191624_0x191624");
#endif

    ctx->pc = 0x191624u;

    // 0x191624: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x191624u;
    {
        const bool branch_taken_0x191624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191624) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19162Cu;
    // 0x19162c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19162Cu;
    {
        const bool branch_taken_0x19162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19162Cu;
        // 0x191630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19162c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191634u;
}
