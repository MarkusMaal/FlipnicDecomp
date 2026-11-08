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

// Function: entry_0011b400
// Address: 0x11b400 - 0x11b414
void entry_0011b400_0x11b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b400_0x11b400");
#endif

    ctx->pc = 0x11b400u;

    // 0x11b400: 0x8c910534  lw          $s1, 0x534($a0)
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1332)));
    // 0x11b404: 0x162d0003  bne         $s1, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B404u;
    {
        const bool branch_taken_0x11b404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 13));
        if (branch_taken_0x11b404) {
            ctx->pc = 0x11B414u;
            return;
        }
    }
    ctx->pc = 0x11B40Cu;
    // 0x11b40c: 0x172b0008  bne         $t9, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B40Cu;
    {
        const bool branch_taken_0x11b40c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 11));
        if (branch_taken_0x11b40c) {
            ctx->pc = 0x11B430u;
            return;
        }
    }
    ctx->pc = 0x11B414u;
}
