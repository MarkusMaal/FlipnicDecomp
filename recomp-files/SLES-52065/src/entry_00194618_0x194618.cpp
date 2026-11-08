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

// Function: entry_00194618
// Address: 0x194618 - 0x194628
void entry_00194618_0x194618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194618_0x194618");
#endif

    ctx->pc = 0x194618u;

    // 0x194618: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x194618u;
    {
        const bool branch_taken_0x194618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x194618) {
            ctx->pc = 0x194628u;
            return;
        }
    }
    ctx->pc = 0x194620u;
    // 0x194620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194620u;
    {
        const bool branch_taken_0x194620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194620) {
            ctx->pc = 0x194634u;
            return;
        }
    }
    ctx->pc = 0x194628u;
}
