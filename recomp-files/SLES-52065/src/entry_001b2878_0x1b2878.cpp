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

// Function: entry_001b2878
// Address: 0x1b2878 - 0x1b288c
void entry_001b2878_0x1b2878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2878_0x1b2878");
#endif

    ctx->pc = 0x1b2878u;

    // 0x1b2878: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1b2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1b287c: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1b287cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2880: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2880u;
    {
        const bool branch_taken_0x1b2880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2880) {
            ctx->pc = 0x1B288Cu;
            return;
        }
    }
    ctx->pc = 0x1B2888u;
    // 0x1b2888: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1b2888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1b288cu;
}
