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

// Function: entry_001986d0
// Address: 0x1986d0 - 0x1986e0
void entry_001986d0_0x1986d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001986d0_0x1986d0");
#endif

    ctx->pc = 0x1986d0u;

    // 0x1986d0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1986d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986dc: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    ctx->pc = 0x1986e0u;
}
