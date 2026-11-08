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

// Function: entry_00104984
// Address: 0x104984 - 0x104990
void entry_00104984_0x104984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104984_0x104984");
#endif

    ctx->pc = 0x104984u;

    // 0x104984: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x104984u;
    {
        const bool branch_taken_0x104984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104984u;
        // 0x104988: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104984) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x10498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x104990u;
}
