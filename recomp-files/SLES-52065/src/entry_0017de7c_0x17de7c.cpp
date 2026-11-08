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

// Function: entry_0017de7c
// Address: 0x17de7c - 0x17de88
void entry_0017de7c_0x17de7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017de7c_0x17de7c");
#endif

    ctx->pc = 0x17de7cu;

    // 0x17de7c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE7Cu;
    {
        const bool branch_taken_0x17de7c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE7Cu;
        // 0x17de80: 0x2a010021  slti        $at, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de7c) {
            ctx->pc = 0x17DE88u;
            return;
        }
    }
    ctx->pc = 0x17DE84u;
    // 0x17de84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17de84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17de88u;
}
