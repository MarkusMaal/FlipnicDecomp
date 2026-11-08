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

// Function: entry_00209508
// Address: 0x209508 - 0x209518
void entry_00209508_0x209508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209508_0x209508");
#endif

    ctx->pc = 0x209508u;

    // 0x209508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20950c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x209510: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209510u;
    {
        const bool branch_taken_0x209510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209510u;
        // 0x209514: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209510) {
            ctx->pc = 0x2094F0u;
            return;
        }
    }
    ctx->pc = 0x209518u;
}
