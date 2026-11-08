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

// Function: entry_001c7758
// Address: 0x1c7758 - 0x1c7770
void entry_001c7758_0x1c7758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7758_0x1c7758");
#endif

    ctx->pc = 0x1c7758u;

    // 0x1c7758: 0x8e03022c  lw          $v1, 0x22C($s0)
    ctx->pc = 0x1c7758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1c775c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7760: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7760u;
    {
        const bool branch_taken_0x1c7760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7760u;
        // 0x1c7764: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7760) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7768u;
    // 0x1c7768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7768u;
    {
        const bool branch_taken_0x1c7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7768u;
        // 0x1c776c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7768) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7770u;
}
