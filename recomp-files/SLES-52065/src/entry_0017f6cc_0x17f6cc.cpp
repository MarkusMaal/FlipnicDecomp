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

// Function: entry_0017f6cc
// Address: 0x17f6cc - 0x17f6dc
void entry_0017f6cc_0x17f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6cc_0x17f6cc");
#endif

    ctx->pc = 0x17f6ccu;

    // 0x17f6cc: 0x0  nop
    ctx->pc = 0x17f6ccu;
    // NOP
    // 0x17f6d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f6d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f6dcu;
}
