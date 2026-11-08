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

// Function: entry_001ad350
// Address: 0x1ad350 - 0x1ad360
void entry_001ad350_0x1ad350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad350_0x1ad350");
#endif

    ctx->pc = 0x1ad350u;

    // 0x1ad350: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
    // 0x1ad354: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD354u;
    {
        const bool branch_taken_0x1ad354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad354) {
            ctx->pc = 0x1AD360u;
            return;
        }
    }
    ctx->pc = 0x1AD35Cu;
    // 0x1ad35c: 0xae3206cc  sw          $s2, 0x6CC($s1)
    ctx->pc = 0x1ad35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 18));
    ctx->pc = 0x1ad360u;
}
