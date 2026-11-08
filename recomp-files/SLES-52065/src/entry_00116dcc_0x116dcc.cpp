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

// Function: entry_00116dcc
// Address: 0x116dcc - 0x116de4
void entry_00116dcc_0x116dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116dcc_0x116dcc");
#endif

    ctx->pc = 0x116dccu;

    // 0x116dcc: 0x0  nop
    ctx->pc = 0x116dccu;
    // NOP
    // 0x116dd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x116dd4: 0x24ea0008  addiu       $t2, $a3, 0x8
    ctx->pc = 0x116dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x116dd8: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x116dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x116ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116DDCu;
    {
        const bool branch_taken_0x116ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DDCu;
        // 0x116de0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ddc) {
            ctx->pc = 0x116DF0u;
            return;
        }
    }
    ctx->pc = 0x116DE4u;
}
