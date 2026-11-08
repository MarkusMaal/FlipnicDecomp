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

// Function: entry_001364a4
// Address: 0x1364a4 - 0x1364b4
void entry_001364a4_0x1364a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001364a4_0x1364a4");
#endif

    ctx->pc = 0x1364a4u;

    // 0x1364a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1364A4u;
    {
        const bool branch_taken_0x1364a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364a4) {
            ctx->pc = 0x1364B4u;
            return;
        }
    }
    ctx->pc = 0x1364ACu;
    // 0x1364ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1364b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1364b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1364b4u;
}
