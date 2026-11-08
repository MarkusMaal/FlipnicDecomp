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

// Function: entry_00191940
// Address: 0x191940 - 0x19194c
void entry_00191940_0x191940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191940_0x191940");
#endif

    ctx->pc = 0x191940u;

    // 0x191940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191944: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x191944u;
    {
        const bool branch_taken_0x191944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191944u;
        // 0x191948: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191944) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x19194Cu;
}
