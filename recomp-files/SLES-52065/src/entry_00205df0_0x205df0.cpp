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

// Function: entry_00205df0
// Address: 0x205df0 - 0x205e00
void entry_00205df0_0x205df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205df0_0x205df0");
#endif

    ctx->pc = 0x205df0u;

    // 0x205df0: 0x11020018  beq         $t0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x205DF0u;
    {
        const bool branch_taken_0x205df0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x205DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF0u;
        // 0x205df4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205df0) {
            ctx->pc = 0x205E54u;
            return;
        }
    }
    ctx->pc = 0x205DF8u;
    // 0x205df8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x205DF8u;
    {
        const bool branch_taken_0x205df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DF8u;
        // 0x205dfc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205df8) {
            ctx->pc = 0x205DBCu;
            return;
        }
    }
    ctx->pc = 0x205E00u;
}
