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

// Function: entry_0018f5fc
// Address: 0x18f5fc - 0x18f624
void entry_0018f5fc_0x18f5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f5fc_0x18f5fc");
#endif

    ctx->pc = 0x18f5fcu;

    // 0x18f5fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18f600: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F600u;
    {
        const bool branch_taken_0x18f600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f600) {
            ctx->pc = 0x18F64Cu;
            return;
        }
    }
    ctx->pc = 0x18F608u;
    // 0x18f608: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f60c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18f610: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x18f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F614u;
    {
        const bool branch_taken_0x18f614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F614u;
        // 0x18f618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f614) {
            ctx->pc = 0x18F624u;
            return;
        }
    }
    ctx->pc = 0x18F61Cu;
    // 0x18f61c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18f620: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18f620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x18f624u;
}
