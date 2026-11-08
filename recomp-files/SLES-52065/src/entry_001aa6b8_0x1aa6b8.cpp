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

// Function: entry_001aa6b8
// Address: 0x1aa6b8 - 0x1aa6c4
void entry_001aa6b8_0x1aa6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa6b8_0x1aa6b8");
#endif

    ctx->pc = 0x1aa6b8u;

    // 0x1aa6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aa6c0: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
    ctx->pc = 0x1aa6c4u;
}
