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

// Function: entry_001b6e58
// Address: 0x1b6e58 - 0x1b6e6c
void entry_001b6e58_0x1b6e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e58_0x1b6e58");
#endif

    ctx->pc = 0x1b6e58u;

    // 0x1b6e58: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1b6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1b6e5c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b6e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b6e60: 0x90232ec0  lbu         $v1, 0x2EC0($at)
    ctx->pc = 0x1b6e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x212EC0u));
    // 0x1b6e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e68: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x1b6e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b6e6cu;
}
