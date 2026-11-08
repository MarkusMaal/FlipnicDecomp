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

// Function: entry_00152804
// Address: 0x152804 - 0x15281c
void entry_00152804_0x152804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152804_0x152804");
#endif

    ctx->pc = 0x152804u;

    // 0x152804: 0x0  nop
    ctx->pc = 0x152804u;
    // NOP
    // 0x152808: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x152808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15280c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15280Cu;
    {
        const bool branch_taken_0x15280c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15280c) {
            ctx->pc = 0x15281Cu;
            return;
        }
    }
    ctx->pc = 0x152814u;
    // 0x152814: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152814u;
    {
        const bool branch_taken_0x152814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152814u;
        // 0x152818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152814) {
            ctx->pc = 0x15283Cu;
            return;
        }
    }
    ctx->pc = 0x15281Cu;
}
