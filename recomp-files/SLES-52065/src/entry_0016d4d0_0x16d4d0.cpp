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

// Function: entry_0016d4d0
// Address: 0x16d4d0 - 0x16d4e4
void entry_0016d4d0_0x16d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d4d0_0x16d4d0");
#endif

    ctx->pc = 0x16d4d0u;

    // 0x16d4d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D4D0u;
    {
        const bool branch_taken_0x16d4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d4d0) {
            ctx->pc = 0x16D4E4u;
            return;
        }
    }
    ctx->pc = 0x16D4D8u;
    // 0x16d4d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d4dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D4DCu;
    {
        const bool branch_taken_0x16d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4DCu;
        // 0x16d4e0: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4dc) {
            ctx->pc = 0x16D4F4u;
            return;
        }
    }
    ctx->pc = 0x16D4E4u;
}
