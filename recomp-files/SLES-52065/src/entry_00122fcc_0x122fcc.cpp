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

// Function: entry_00122fcc
// Address: 0x122fcc - 0x122fd8
void entry_00122fcc_0x122fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122fcc_0x122fcc");
#endif

    ctx->pc = 0x122fccu;

    // 0x122fcc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x122fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x122fd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122fd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x122fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x122fd8u;
}
