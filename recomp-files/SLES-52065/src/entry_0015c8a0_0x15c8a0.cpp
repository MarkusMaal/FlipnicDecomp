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

// Function: entry_0015c8a0
// Address: 0x15c8a0 - 0x15c8b0
void entry_0015c8a0_0x15c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8a0_0x15c8a0");
#endif

    ctx->pc = 0x15c8a0u;

    // 0x15c8a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x15c8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x15c8a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8a8: 0xac207520  sw          $zero, 0x7520($at)
    ctx->pc = 0x15c8a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367520u, _value); } while (0);
    // 0x15c8ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c8b0u;
}
