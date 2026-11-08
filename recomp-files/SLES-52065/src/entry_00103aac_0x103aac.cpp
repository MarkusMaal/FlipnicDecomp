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

// Function: entry_00103aac
// Address: 0x103aac - 0x103ab8
void entry_00103aac_0x103aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103aac_0x103aac");
#endif

    ctx->pc = 0x103aacu;

    // 0x103aac: 0x100005da  b           . + 4 + (0x5DA << 2)
    ctx->pc = 0x103AACu;
    {
        const bool branch_taken_0x103aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AACu;
        // 0x103ab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103aac) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103AB4u;
    // 0x103ab4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x103ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x103ab8u;
}
