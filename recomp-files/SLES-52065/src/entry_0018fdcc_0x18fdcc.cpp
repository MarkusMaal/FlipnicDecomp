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

// Function: entry_0018fdcc
// Address: 0x18fdcc - 0x18fdd8
void entry_0018fdcc_0x18fdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fdcc_0x18fdcc");
#endif

    ctx->pc = 0x18fdccu;

    // 0x18fdcc: 0x0  nop
    ctx->pc = 0x18fdccu;
    // NOP
    // 0x18fdd0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18FDD0u;
    {
        const bool branch_taken_0x18fdd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fdd0) {
            ctx->pc = 0x18FDA8u;
            return;
        }
    }
    ctx->pc = 0x18FDD8u;
}
