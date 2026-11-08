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

// Function: entry_001b7618
// Address: 0x1b7618 - 0x1b7630
void entry_001b7618_0x1b7618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7618_0x1b7618");
#endif

    ctx->pc = 0x1b7618u;

    // 0x1b7618: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b7618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b761c: 0xb4082a  slt         $at, $a1, $s4
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b7620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7620u;
    {
        const bool branch_taken_0x1b7620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7620u;
        // 0x1b7624: 0x265082a  slt         $at, $s3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7620) {
            ctx->pc = 0x1B7630u;
            return;
        }
    }
    ctx->pc = 0x1B7628u;
    // 0x1b7628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7628u;
    {
        const bool branch_taken_0x1b7628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7628u;
        // 0x1b762c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7628) {
            ctx->pc = 0x1B763Cu;
            return;
        }
    }
    ctx->pc = 0x1B7630u;
}
