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

// Function: entry_001faef0
// Address: 0x1faef0 - 0x1faf00
void entry_001faef0_0x1faef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faef0_0x1faef0");
#endif

    ctx->pc = 0x1faef0u;

    // 0x1faef0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAEF0u;
    {
        const bool branch_taken_0x1faef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faef0) {
            ctx->pc = 0x1FAEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAEF0u;
            // 0x1faef4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF40u;
            return;
        }
    }
    ctx->pc = 0x1FAEF8u;
    // 0x1faef8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faefc: 0x0  nop
    ctx->pc = 0x1faefcu;
    // NOP
    ctx->pc = 0x1faf00u;
}
