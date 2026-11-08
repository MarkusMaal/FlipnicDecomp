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

// Function: entry_00179cb8
// Address: 0x179cb8 - 0x179ccc
void entry_00179cb8_0x179cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cb8_0x179cb8");
#endif

    ctx->pc = 0x179cb8u;

    // 0x179cb8: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x179cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x179cbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x179CBCu;
    {
        const bool branch_taken_0x179cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179cbc) {
            ctx->pc = 0x179CCCu;
            return;
        }
    }
    ctx->pc = 0x179CC4u;
    // 0x179cc4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x179cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cc8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x179cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179cccu;
}
