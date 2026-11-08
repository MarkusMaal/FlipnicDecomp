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

// Function: entry_0016d4e4
// Address: 0x16d4e4 - 0x16d4f4
void entry_0016d4e4_0x16d4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d4e4_0x16d4e4");
#endif

    ctx->pc = 0x16d4e4u;

    // 0x16d4e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d4e8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D4E8u;
    {
        const bool branch_taken_0x16d4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4E8u;
        // 0x16d4ec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4e8) {
            ctx->pc = 0x16D4F4u;
            return;
        }
    }
    ctx->pc = 0x16D4F0u;
    // 0x16d4f0: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    ctx->pc = 0x16d4f4u;
}
