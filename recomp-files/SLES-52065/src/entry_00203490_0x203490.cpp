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

// Function: entry_00203490
// Address: 0x203490 - 0x20349c
void entry_00203490_0x203490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203490_0x203490");
#endif

    ctx->pc = 0x203490u;

    // 0x203490: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203490u;
    {
        const bool branch_taken_0x203490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x203490) {
            ctx->pc = 0x2034A0u;
            return;
        }
    }
    ctx->pc = 0x203498u;
    // 0x203498: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203498u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x20349cu;
}
