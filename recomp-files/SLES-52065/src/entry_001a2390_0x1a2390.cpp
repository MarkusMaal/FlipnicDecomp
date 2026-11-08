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

// Function: entry_001a2390
// Address: 0x1a2390 - 0x1a23a0
void entry_001a2390_0x1a2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2390_0x1a2390");
#endif

    ctx->pc = 0x1a2390u;

    // 0x1a2390: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a2394: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1a2394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a2398: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A2398u;
    {
        const bool branch_taken_0x1a2398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2398u;
        // 0x1a239c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2398) {
            ctx->pc = 0x1A2364u;
            return;
        }
    }
    ctx->pc = 0x1A23A0u;
}
