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

// Function: entry_001528cc
// Address: 0x1528cc - 0x1528dc
void entry_001528cc_0x1528cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001528cc_0x1528cc");
#endif

    ctx->pc = 0x1528ccu;

    // 0x1528cc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1528d0: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1528d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1528d4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1528D4u;
    {
        const bool branch_taken_0x1528d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528D4u;
        // 0x1528d8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528d4) {
            ctx->pc = 0x15289Cu;
            return;
        }
    }
    ctx->pc = 0x1528DCu;
}
