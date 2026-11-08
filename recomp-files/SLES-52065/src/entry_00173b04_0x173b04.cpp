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

// Function: entry_00173b04
// Address: 0x173b04 - 0x173b18
void entry_00173b04_0x173b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173b04_0x173b04");
#endif

    ctx->pc = 0x173b04u;

    // 0x173b04: 0x93828614  lbu         $v0, -0x79EC($gp)
    ctx->pc = 0x173b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936084)));
    // 0x173b08: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x173B08u;
    {
        const bool branch_taken_0x173b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B08u;
        // 0x173b0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b08) {
            ctx->pc = 0x173BE4u;
            return;
        }
    }
    ctx->pc = 0x173B10u;
    // 0x173b10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x173B10u;
    {
        const bool branch_taken_0x173b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b10) {
            ctx->pc = 0x173BCCu;
            return;
        }
    }
    ctx->pc = 0x173B18u;
}
