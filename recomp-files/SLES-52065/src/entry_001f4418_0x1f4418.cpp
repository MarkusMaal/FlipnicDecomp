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

// Function: entry_001f4418
// Address: 0x1f4418 - 0x1f4428
void entry_001f4418_0x1f4418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4418_0x1f4418");
#endif

    ctx->pc = 0x1f4418u;

    // 0x1f4418: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1f4418u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1f441c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F441Cu;
    {
        const bool branch_taken_0x1f441c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F441Cu;
        // 0x1f4420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f441c) {
            ctx->pc = 0x1F4448u;
            return;
        }
    }
    ctx->pc = 0x1F4424u;
    // 0x1f4424: 0x0  nop
    ctx->pc = 0x1f4424u;
    // NOP
    ctx->pc = 0x1f4428u;
}
