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

// Function: entry_0019dd68
// Address: 0x19dd68 - 0x19dd78
void entry_0019dd68_0x19dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd68_0x19dd68");
#endif

    ctx->pc = 0x19dd68u;

    // 0x19dd68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19dd6c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x19dd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19dd70: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19DD70u;
    {
        const bool branch_taken_0x19dd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd70) {
            ctx->pc = 0x19DD3Cu;
            return;
        }
    }
    ctx->pc = 0x19DD78u;
}
