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

// Function: entry_001b2864
// Address: 0x1b2864 - 0x1b2878
void entry_001b2864_0x1b2864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2864_0x1b2864");
#endif

    ctx->pc = 0x1b2864u;

    // 0x1b2864: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1b2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1b2868: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b2868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b286c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B286Cu;
    {
        const bool branch_taken_0x1b286c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b286c) {
            ctx->pc = 0x1B2878u;
            return;
        }
    }
    ctx->pc = 0x1B2874u;
    // 0x1b2874: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1b2874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1b2878u;
}
