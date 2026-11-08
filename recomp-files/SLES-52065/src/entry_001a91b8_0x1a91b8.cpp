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

// Function: entry_001a91b8
// Address: 0x1a91b8 - 0x1a91c0
void entry_001a91b8_0x1a91b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a91b8_0x1a91b8");
#endif

    ctx->pc = 0x1a91b8u;

    // 0x1a91b8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1a91bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x1a91c0u;
}
