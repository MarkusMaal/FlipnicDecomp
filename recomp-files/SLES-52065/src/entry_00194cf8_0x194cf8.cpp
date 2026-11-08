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

// Function: entry_00194cf8
// Address: 0x194cf8 - 0x194d14
void entry_00194cf8_0x194cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194cf8_0x194cf8");
#endif

    ctx->pc = 0x194cf8u;

    // 0x194cf8: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194cfc: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x194CFCu;
    {
        const bool branch_taken_0x194cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cfc) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D04u;
    // 0x194d04: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x194D04u;
    {
        const bool branch_taken_0x194d04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d04) {
            ctx->pc = 0x194D14u;
            return;
        }
    }
    ctx->pc = 0x194D0Cu;
    // 0x194d0c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x194D0Cu;
    {
        const bool branch_taken_0x194d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D0Cu;
        // 0x194d10: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d0c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D14u;
}
