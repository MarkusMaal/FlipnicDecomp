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

// Function: entry_00168ea8
// Address: 0x168ea8 - 0x168ec4
void entry_00168ea8_0x168ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168ea8_0x168ea8");
#endif

    ctx->pc = 0x168ea8u;

    // 0x168ea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168eac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168eb0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168eb4: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168EB4u;
    {
        const bool branch_taken_0x168eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x168eb4) {
            ctx->pc = 0x168EC4u;
            return;
        }
    }
    ctx->pc = 0x168EBCu;
    // 0x168ebc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x168EC8u;
            return;
        }
    }
    ctx->pc = 0x168EC4u;
}
