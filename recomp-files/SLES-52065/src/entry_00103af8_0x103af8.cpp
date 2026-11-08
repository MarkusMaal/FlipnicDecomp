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

// Function: entry_00103af8
// Address: 0x103af8 - 0x103b04
void entry_00103af8_0x103af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103af8_0x103af8");
#endif

    ctx->pc = 0x103af8u;

    // 0x103af8: 0x100005c7  b           . + 4 + (0x5C7 << 2)
    ctx->pc = 0x103AF8u;
    {
        const bool branch_taken_0x103af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AF8u;
        // 0x103afc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103af8) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103B00u;
    // 0x103b00: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x103b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->pc = 0x103b04u;
}
