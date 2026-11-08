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

// Function: entry_00203300
// Address: 0x203300 - 0x203308
void entry_00203300_0x203300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203300_0x203300");
#endif

    ctx->pc = 0x203300u;

    // 0x203300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203300u;
    {
        const bool branch_taken_0x203300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203300u;
        // 0x203304: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203300) {
            ctx->pc = 0x203314u;
            return;
        }
    }
    ctx->pc = 0x203308u;
}
