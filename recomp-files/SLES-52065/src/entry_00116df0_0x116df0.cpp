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

// Function: entry_00116df0
// Address: 0x116df0 - 0x116e04
void entry_00116df0_0x116df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116df0_0x116df0");
#endif

    ctx->pc = 0x116df0u;

    // 0x116df0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116df0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116df4: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116DE4u;
            return;
        }
    }
    ctx->pc = 0x116DFCu;
    // 0x116dfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116DFCu;
    {
        const bool branch_taken_0x116dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DFCu;
        // 0x116e00: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dfc) {
            ctx->pc = 0x116E14u;
            return;
        }
    }
    ctx->pc = 0x116E04u;
}
