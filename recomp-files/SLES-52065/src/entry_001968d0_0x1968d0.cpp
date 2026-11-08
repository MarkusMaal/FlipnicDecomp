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

// Function: entry_001968d0
// Address: 0x1968d0 - 0x1968e4
void entry_001968d0_0x1968d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001968d0_0x1968d0");
#endif

    ctx->pc = 0x1968d0u;

    // 0x1968d0: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x1968d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    // 0x1968d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1968d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968d8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1968dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1968dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e0: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x1968e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1968e4u;
}
