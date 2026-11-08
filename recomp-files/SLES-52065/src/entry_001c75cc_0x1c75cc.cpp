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

// Function: entry_001c75cc
// Address: 0x1c75cc - 0x1c75e4
void entry_001c75cc_0x1c75cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c75cc_0x1c75cc");
#endif

    ctx->pc = 0x1c75ccu;

    // 0x1c75cc: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1c75d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c75d4: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C75D4u;
    {
        const bool branch_taken_0x1c75d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75D4u;
        // 0x1c75d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75d4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C75DCu;
    // 0x1c75dc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1C75DCu;
    {
        const bool branch_taken_0x1c75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75DCu;
        // 0x1c75e0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75dc) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C75E4u;
}
