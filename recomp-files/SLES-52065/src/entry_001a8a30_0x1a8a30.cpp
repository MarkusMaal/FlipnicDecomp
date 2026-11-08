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

// Function: entry_001a8a30
// Address: 0x1a8a30 - 0x1a8a40
void entry_001a8a30_0x1a8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a30_0x1a8a30");
#endif

    ctx->pc = 0x1a8a30u;

    // 0x1a8a30: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8A30u;
    {
        const bool branch_taken_0x1a8a30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8a30) {
            ctx->pc = 0x1A8A40u;
            return;
        }
    }
    ctx->pc = 0x1A8A38u;
    // 0x1a8a38: 0x11980b  movn        $s3, $zero, $s1
    ctx->pc = 0x1a8a38u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1a8a3c: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x1a8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    ctx->pc = 0x1a8a40u;
}
