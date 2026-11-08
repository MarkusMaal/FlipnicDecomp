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

// Function: entry_00188238
// Address: 0x188238 - 0x188244
void entry_00188238_0x188238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188238_0x188238");
#endif

    ctx->pc = 0x188238u;

    // 0x188238: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x188238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x18823c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18823Cu;
    {
        const bool branch_taken_0x18823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18823Cu;
        // 0x188240: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18823c) {
            ctx->pc = 0x18824Cu;
            return;
        }
    }
    ctx->pc = 0x188244u;
}
