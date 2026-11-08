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

// Function: entry_001ab290
// Address: 0x1ab290 - 0x1ab2bc
void entry_001ab290_0x1ab290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab290_0x1ab290");
#endif

    ctx->pc = 0x1ab290u;

    // 0x1ab290: 0x928306da  lbu         $v1, 0x6DA($s4)
    ctx->pc = 0x1ab290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1754)));
    // 0x1ab294: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x1AB294u;
    {
        const bool branch_taken_0x1ab294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab294) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB29Cu;
    // 0x1ab29c: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ab29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ab2a0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ab2a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ab2a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB2A4u;
    {
        const bool branch_taken_0x1ab2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2a4) {
            ctx->pc = 0x1AB2BCu;
            return;
        }
    }
    ctx->pc = 0x1AB2ACu;
    // 0x1ab2ac: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1ab2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1ab2b0: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x1ab2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ab2b4: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1AB2B4u;
    {
        const bool branch_taken_0x1ab2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2b4) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB2BCu;
}
