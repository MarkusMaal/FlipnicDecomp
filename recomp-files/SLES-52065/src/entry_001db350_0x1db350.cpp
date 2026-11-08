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

// Function: entry_001db350
// Address: 0x1db350 - 0x1db35c
void entry_001db350_0x1db350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db350_0x1db350");
#endif

    ctx->pc = 0x1db350u;

    // 0x1db350: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x1db350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1db354: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DB354u;
    {
        const bool branch_taken_0x1db354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB354u;
        // 0x1db358: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db354) {
            ctx->pc = 0x1DB308u;
            return;
        }
    }
    ctx->pc = 0x1DB35Cu;
}
