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

// Function: entry_0019e564
// Address: 0x19e564 - 0x19e570
void entry_0019e564_0x19e564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e564_0x19e564");
#endif

    ctx->pc = 0x19e564u;

    // 0x19e564: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19E564u;
    {
        const bool branch_taken_0x19e564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E564u;
        // 0x19e568: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e564) {
            ctx->pc = 0x19E5A8u;
            return;
        }
    }
    ctx->pc = 0x19E56Cu;
    // 0x19e56c: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19e56cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->pc = 0x19e570u;
}
