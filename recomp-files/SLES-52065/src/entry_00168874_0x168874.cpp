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

// Function: entry_00168874
// Address: 0x168874 - 0x168894
void entry_00168874_0x168874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168874_0x168874");
#endif

    ctx->pc = 0x168874u;

    // 0x168874: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16887c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168880: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168884: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168884u;
    {
        const bool branch_taken_0x168884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x168884) {
            ctx->pc = 0x168894u;
            return;
        }
    }
    ctx->pc = 0x16888Cu;
    // 0x16888c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16888Cu;
    {
        const bool branch_taken_0x16888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16888c) {
            ctx->pc = 0x168898u;
            return;
        }
    }
    ctx->pc = 0x168894u;
}
