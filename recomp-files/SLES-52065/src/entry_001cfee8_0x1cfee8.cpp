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

// Function: entry_001cfee8
// Address: 0x1cfee8 - 0x1cff04
void entry_001cfee8_0x1cfee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfee8_0x1cfee8");
#endif

    ctx->pc = 0x1cfee8u;

    // 0x1cfee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cfeec: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1cfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1cfef0: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x1cfef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cfef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFEF4u;
    {
        const bool branch_taken_0x1cfef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfef4) {
            ctx->pc = 0x1CFF04u;
            return;
        }
    }
    ctx->pc = 0x1CFEFCu;
    // 0x1cfefc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFEFCu;
    {
        const bool branch_taken_0x1cfefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEFCu;
        // 0x1cff00: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfefc) {
            ctx->pc = 0x1CFF14u;
            return;
        }
    }
    ctx->pc = 0x1CFF04u;
}
