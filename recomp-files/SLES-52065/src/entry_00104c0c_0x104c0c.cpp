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

// Function: entry_00104c0c
// Address: 0x104c0c - 0x104c18
void entry_00104c0c_0x104c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c0c_0x104c0c");
#endif

    ctx->pc = 0x104c0cu;

    // 0x104c0c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x104C0Cu;
    {
        const bool branch_taken_0x104c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C0Cu;
        // 0x104c10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c0c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104C14u;
    // 0x104c14: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x104c18u;
}
