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

// Function: entry_0017de88
// Address: 0x17de88 - 0x17de94
void entry_0017de88_0x17de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017de88_0x17de88");
#endif

    ctx->pc = 0x17de88u;

    // 0x17de88: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE88u;
    {
        const bool branch_taken_0x17de88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17de88) {
            ctx->pc = 0x17DE94u;
            return;
        }
    }
    ctx->pc = 0x17DE90u;
    // 0x17de90: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x17de90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x17de94u;
}
