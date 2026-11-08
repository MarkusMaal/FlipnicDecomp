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

// Function: entry_0011f3e0
// Address: 0x11f3e0 - 0x11f404
void entry_0011f3e0_0x11f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3e0_0x11f3e0");
#endif

    ctx->pc = 0x11f3e0u;

    // 0x11f3e0: 0xae002024  sw          $zero, 0x2024($s0)
    ctx->pc = 0x11f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8228), GPR_U32(ctx, 0));
    // 0x11f3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3e8: 0xae002028  sw          $zero, 0x2028($s0)
    ctx->pc = 0x11f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8232), GPR_U32(ctx, 0));
    // 0x11f3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f0: 0xae00201c  sw          $zero, 0x201C($s0)
    ctx->pc = 0x11f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8220), GPR_U32(ctx, 0));
    // 0x11f3f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f3f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f8: 0xae002020  sw          $zero, 0x2020($s0)
    ctx->pc = 0x11f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8224), GPR_U32(ctx, 0));
    // 0x11f3fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11f400: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11f400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x11f404u;
}
