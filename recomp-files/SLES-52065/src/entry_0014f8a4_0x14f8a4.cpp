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

// Function: entry_0014f8a4
// Address: 0x14f8a4 - 0x14f8b4
void entry_0014f8a4_0x14f8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f8a4_0x14f8a4");
#endif

    ctx->pc = 0x14f8a4u;

    // 0x14f8a4: 0x152d0003  bne         $t1, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F8A4u;
    {
        const bool branch_taken_0x14f8a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        ctx->pc = 0x14F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A4u;
        // 0x14f8a8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8a4) {
            ctx->pc = 0x14F8B4u;
            return;
        }
    }
    ctx->pc = 0x14F8ACu;
    // 0x14f8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F8ACu;
    {
        const bool branch_taken_0x14f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8ac) {
            ctx->pc = 0x14F8BCu;
            return;
        }
    }
    ctx->pc = 0x14F8B4u;
}
