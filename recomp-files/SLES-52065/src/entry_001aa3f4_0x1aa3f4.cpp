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

// Function: entry_001aa3f4
// Address: 0x1aa3f4 - 0x1aa414
void entry_001aa3f4_0x1aa3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3f4_0x1aa3f4");
#endif

    ctx->pc = 0x1aa3f4u;

    // 0x1aa3f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1aa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa3f8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aa3fc: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1aa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1aa400: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1aa404: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1aa404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1aa408: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA408u;
    {
        const bool branch_taken_0x1aa408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa408) {
            ctx->pc = 0x1AA414u;
            return;
        }
    }
    ctx->pc = 0x1AA410u;
    // 0x1aa410: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1aa410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aa414u;
}
