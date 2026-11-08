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

// Function: entry_00209d64
// Address: 0x209d64 - 0x209d74
void entry_00209d64_0x209d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209d64_0x209d64");
#endif

    ctx->pc = 0x209d64u;

    // 0x209d64: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x209D64u;
    {
        const bool branch_taken_0x209d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x209D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D64u;
        // 0x209d68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d64) {
            ctx->pc = 0x209E20u;
            return;
        }
    }
    ctx->pc = 0x209D6Cu;
    // 0x209d6c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x209D6Cu;
    {
        const bool branch_taken_0x209d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D6Cu;
        // 0x209d70: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d6c) {
            ctx->pc = 0x209E84u;
            return;
        }
    }
    ctx->pc = 0x209D74u;
}
