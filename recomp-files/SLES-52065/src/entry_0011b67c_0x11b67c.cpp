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

// Function: entry_0011b67c
// Address: 0x11b67c - 0x11b698
void entry_0011b67c_0x11b67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b67c_0x11b67c");
#endif

    ctx->pc = 0x11b67cu;

    // 0x11b67c: 0x0  nop
    ctx->pc = 0x11b67cu;
    // NOP
    // 0x11b680: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11b684: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b688: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B688u;
    {
        const bool branch_taken_0x11b688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B688u;
        // 0x11b68c: 0x28830061  slti        $v1, $a0, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b688) {
            ctx->pc = 0x11B698u;
            return;
        }
    }
    ctx->pc = 0x11B690u;
    // 0x11b690: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11B690u;
    {
        const bool branch_taken_0x11b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B690u;
        // 0x11b694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b690) {
            ctx->pc = 0x11B6F8u;
            return;
        }
    }
    ctx->pc = 0x11B698u;
}
