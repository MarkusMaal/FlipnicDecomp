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

// Function: entry_00165ea4
// Address: 0x165ea4 - 0x165ec0
void entry_00165ea4_0x165ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ea4_0x165ea4");
#endif

    ctx->pc = 0x165ea4u;

    // 0x165ea4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x165ea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165eac: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x165eb0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x165EB0u;
    {
        const bool branch_taken_0x165eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x165eb0) {
            ctx->pc = 0x165EC0u;
            return;
        }
    }
    ctx->pc = 0x165EB8u;
    // 0x165eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165EB8u;
    {
        const bool branch_taken_0x165eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165eb8) {
            ctx->pc = 0x165EC4u;
            return;
        }
    }
    ctx->pc = 0x165EC0u;
}
