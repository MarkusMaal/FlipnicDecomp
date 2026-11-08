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

// Function: entry_001fad58
// Address: 0x1fad58 - 0x1fad60
void entry_001fad58_0x1fad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad58_0x1fad58");
#endif

    ctx->pc = 0x1fad58u;

    // 0x1fad58: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1fad5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fad5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fad60u;
}
