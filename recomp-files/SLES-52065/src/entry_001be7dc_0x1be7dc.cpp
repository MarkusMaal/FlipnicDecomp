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

// Function: entry_001be7dc
// Address: 0x1be7dc - 0x1be7ec
void entry_001be7dc_0x1be7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be7dc_0x1be7dc");
#endif

    ctx->pc = 0x1be7dcu;

    // 0x1be7dc: 0x0  nop
    ctx->pc = 0x1be7dcu;
    // NOP
    // 0x1be7e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1be7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1be7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be7ecu;
}
