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

// Function: entry_00187d40
// Address: 0x187d40 - 0x187d4c
void entry_00187d40_0x187d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d40_0x187d40");
#endif

    ctx->pc = 0x187d40u;

    // 0x187d40: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x187d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x187d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187D54u;
            return;
        }
    }
    ctx->pc = 0x187D4Cu;
}
