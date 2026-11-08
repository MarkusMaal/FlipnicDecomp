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

// Function: entry_00100718
// Address: 0x100718 - 0x10072c
void entry_00100718_0x100718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100718_0x100718");
#endif

    ctx->pc = 0x100718u;

    // 0x100718: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100718u;
    {
        const bool branch_taken_0x100718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x100718) {
            ctx->pc = 0x10072Cu;
            return;
        }
    }
    ctx->pc = 0x100720u;
    // 0x100720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100724u;
    {
        const bool branch_taken_0x100724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100724) {
            ctx->pc = 0x100758u;
            return;
        }
    }
    ctx->pc = 0x10072Cu;
}
