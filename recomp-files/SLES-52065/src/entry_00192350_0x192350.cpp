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

// Function: entry_00192350
// Address: 0x192350 - 0x192364
void entry_00192350_0x192350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192350_0x192350");
#endif

    ctx->pc = 0x192350u;

    // 0x192350: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x192354: 0x8c4204d0  lw          $v0, 0x4D0($v0)
    ctx->pc = 0x192354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x192358: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192358u;
    {
        const bool branch_taken_0x192358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x192358) {
            ctx->pc = 0x192364u;
            return;
        }
    }
    ctx->pc = 0x192360u;
    // 0x192360: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x192364u;
}
