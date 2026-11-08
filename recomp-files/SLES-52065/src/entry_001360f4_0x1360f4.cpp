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

// Function: entry_001360f4
// Address: 0x1360f4 - 0x13610c
void entry_001360f4_0x1360f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360f4_0x1360f4");
#endif

    ctx->pc = 0x1360f4u;

    // 0x1360f4: 0x0  nop
    ctx->pc = 0x1360f4u;
    // NOP
    // 0x1360f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1360fc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x136100: 0x69082b  sltu        $at, $v1, $t1
    ctx->pc = 0x136100u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x136104: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x136104u;
    {
        const bool branch_taken_0x136104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136104) {
            ctx->pc = 0x136128u;
            return;
        }
    }
    ctx->pc = 0x13610Cu;
}
