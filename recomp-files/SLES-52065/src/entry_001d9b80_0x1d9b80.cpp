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

// Function: entry_001d9b80
// Address: 0x1d9b80 - 0x1d9b8c
void entry_001d9b80_0x1d9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9b80_0x1d9b80");
#endif

    ctx->pc = 0x1d9b80u;

    // 0x1d9b80: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1d9b80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1d9b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b88: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1d9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    ctx->pc = 0x1d9b8cu;
}
