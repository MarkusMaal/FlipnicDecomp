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

// Function: entry_00122a9c
// Address: 0x122a9c - 0x122aac
void entry_00122a9c_0x122a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a9c_0x122a9c");
#endif

    ctx->pc = 0x122a9cu;

    // 0x122a9c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x122a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x122aa0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x122aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122aa4: 0x93838044  lbu         $v1, -0x7FBC($gp)
    ctx->pc = 0x122aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934596)));
    // 0x122aa8: 0xa2a30004  sb          $v1, 0x4($s5)
    ctx->pc = 0x122aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x122aacu;
}
