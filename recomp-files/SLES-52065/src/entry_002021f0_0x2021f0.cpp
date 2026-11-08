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

// Function: entry_002021f0
// Address: 0x2021f0 - 0x202208
void entry_002021f0_0x2021f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002021f0_0x2021f0");
#endif

    ctx->pc = 0x2021f0u;

    // 0x2021f0: 0x1060fffd  beqz        $v1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2021F0u;
    {
        const bool branch_taken_0x2021f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021F0u;
        // 0x2021f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021f0) {
            ctx->pc = 0x2021E8u;
            return;
        }
    }
    ctx->pc = 0x2021F8u;
    // 0x2021f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2021fc: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2021FCu;
    {
        const bool branch_taken_0x2021fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2021fc) {
            ctx->pc = 0x202200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2021FCu;
            // 0x202200: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202228u;
            return;
        }
    }
    ctx->pc = 0x202204u;
    // 0x202204: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x202204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x202208u;
}
