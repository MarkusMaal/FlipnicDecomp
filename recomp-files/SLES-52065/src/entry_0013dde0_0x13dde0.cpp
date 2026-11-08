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

// Function: entry_0013dde0
// Address: 0x13dde0 - 0x13ddec
void entry_0013dde0_0x13dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dde0_0x13dde0");
#endif

    ctx->pc = 0x13dde0u;

    // 0x13dde0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dde4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13DDE4u;
    {
        const bool branch_taken_0x13dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDE4u;
        // 0x13dde8: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dde4) {
            ctx->pc = 0x13DE20u;
            return;
        }
    }
    ctx->pc = 0x13DDECu;
}
