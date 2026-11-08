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

// Function: entry_00207a30
// Address: 0x207a30 - 0x207a40
void entry_00207a30_0x207a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207a30_0x207a30");
#endif

    ctx->pc = 0x207a30u;

    // 0x207a30: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x207a34: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207a38: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207a3c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x207a3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207a40u;
}
