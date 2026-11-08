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

// Function: entry_001c28cc
// Address: 0x1c28cc - 0x1c28e4
void entry_001c28cc_0x1c28cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c28cc_0x1c28cc");
#endif

    ctx->pc = 0x1c28ccu;

    // 0x1c28cc: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c28d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c28d4: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1C28D4u;
    {
        const bool branch_taken_0x1c28d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28D4u;
        // 0x1c28d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28d4) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C28DCu;
    // 0x1c28dc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C28DCu;
    {
        const bool branch_taken_0x1c28dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28DCu;
        // 0x1c28e0: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28dc) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C28E4u;
}
