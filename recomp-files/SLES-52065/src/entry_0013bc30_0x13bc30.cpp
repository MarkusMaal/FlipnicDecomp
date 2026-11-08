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

// Function: entry_0013bc30
// Address: 0x13bc30 - 0x13bc40
void entry_0013bc30_0x13bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc30_0x13bc30");
#endif

    ctx->pc = 0x13bc30u;

    // 0x13bc30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC30u;
    {
        const bool branch_taken_0x13bc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc30) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BC38u;
    // 0x13bc38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bc3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13bc40u;
}
