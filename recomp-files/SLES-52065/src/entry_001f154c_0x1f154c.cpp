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

// Function: entry_001f154c
// Address: 0x1f154c - 0x1f1568
void entry_001f154c_0x1f154c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f154c_0x1f154c");
#endif

    ctx->pc = 0x1f154cu;

    // 0x1f154c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1554: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1554u;
        // 0x1f1558: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F1590u;
            return;
        }
    }
    ctx->pc = 0x1F155Cu;
    // 0x1f155c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1560: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1564: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f1568u;
}
