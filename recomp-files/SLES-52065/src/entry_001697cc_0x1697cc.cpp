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

// Function: entry_001697cc
// Address: 0x1697cc - 0x1697ec
void entry_001697cc_0x1697cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697cc_0x1697cc");
#endif

    ctx->pc = 0x1697ccu;

    // 0x1697cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1697ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1697d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1697d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1697d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1697d8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1697dc: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x1697ECu;
            return;
        }
    }
    ctx->pc = 0x1697E4u;
    // 0x1697e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1697E4u;
    {
        const bool branch_taken_0x1697e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697e4) {
            ctx->pc = 0x1697F0u;
            return;
        }
    }
    ctx->pc = 0x1697ECu;
}
