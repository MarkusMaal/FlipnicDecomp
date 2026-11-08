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

// Function: entry_001c2a44
// Address: 0x1c2a44 - 0x1c2a5c
void entry_001c2a44_0x1c2a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2a44_0x1c2a44");
#endif

    ctx->pc = 0x1c2a44u;

    // 0x1c2a44: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2a48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2a4c: 0x14620088  bne         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C2A4Cu;
    {
        const bool branch_taken_0x1c2a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A4Cu;
        // 0x1c2a50: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a4c) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2A54u;
    // 0x1c2a54: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1C2A54u;
    {
        const bool branch_taken_0x1c2a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A54u;
        // 0x1c2a58: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a54) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2A5Cu;
}
