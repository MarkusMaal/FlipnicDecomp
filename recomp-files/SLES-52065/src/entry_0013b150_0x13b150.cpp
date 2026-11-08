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

// Function: entry_0013b150
// Address: 0x13b150 - 0x13b16c
void entry_0013b150_0x13b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b150_0x13b150");
#endif

    ctx->pc = 0x13b150u;

    // 0x13b150: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x13b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x13b154: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x13b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x13b158: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b15c: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13b160: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x13b160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b164: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B164u;
    {
        const bool branch_taken_0x13b164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b164) {
            ctx->pc = 0x13B188u;
            return;
        }
    }
    ctx->pc = 0x13B16Cu;
}
