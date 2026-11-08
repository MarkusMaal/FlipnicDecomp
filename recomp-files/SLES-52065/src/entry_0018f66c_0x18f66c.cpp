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

// Function: entry_0018f66c
// Address: 0x18f66c - 0x18f678
void entry_0018f66c_0x18f66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f66c_0x18f66c");
#endif

    ctx->pc = 0x18f66cu;

    // 0x18f66c: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F66Cu;
    {
        const bool branch_taken_0x18f66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f66c) {
            ctx->pc = 0x18F678u;
            return;
        }
    }
    ctx->pc = 0x18F674u;
    // 0x18f674: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x18f674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x18f678u;
}
