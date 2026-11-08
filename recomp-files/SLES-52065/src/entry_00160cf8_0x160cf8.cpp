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

// Function: entry_00160cf8
// Address: 0x160cf8 - 0x160d08
void entry_00160cf8_0x160cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160cf8_0x160cf8");
#endif

    ctx->pc = 0x160cf8u;

    // 0x160cf8: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cfc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x160CFCu;
    {
        const bool branch_taken_0x160cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CFCu;
        // 0x160d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cfc) {
            ctx->pc = 0x160D30u;
            return;
        }
    }
    ctx->pc = 0x160D04u;
    // 0x160d04: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x160d08u;
}
