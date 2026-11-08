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

// Function: entry_001ee9f4
// Address: 0x1ee9f4 - 0x1eea08
void entry_001ee9f4_0x1ee9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee9f4_0x1ee9f4");
#endif

    ctx->pc = 0x1ee9f4u;

    // 0x1ee9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9f8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ee9fc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE9FCu;
    {
        const bool branch_taken_0x1ee9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9fc) {
            ctx->pc = 0x1EEA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE9FCu;
            // 0x1eea00: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEA28u;
            return;
        }
    }
    ctx->pc = 0x1EEA04u;
    // 0x1eea04: 0x0  nop
    ctx->pc = 0x1eea04u;
    // NOP
    ctx->pc = 0x1eea08u;
}
