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

// Function: entry_0012f744
// Address: 0x12f744 - 0x12f754
void entry_0012f744_0x12f744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f744_0x12f744");
#endif

    ctx->pc = 0x12f744u;

    // 0x12f744: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12f744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12f748: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x12f748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x12f74c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12F74Cu;
    {
        const bool branch_taken_0x12f74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F74Cu;
        // 0x12f750: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f74c) {
            ctx->pc = 0x12F714u;
            return;
        }
    }
    ctx->pc = 0x12F754u;
}
