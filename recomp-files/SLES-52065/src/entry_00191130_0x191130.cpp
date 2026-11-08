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

// Function: entry_00191130
// Address: 0x191130 - 0x191148
void entry_00191130_0x191130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191130_0x191130");
#endif

    ctx->pc = 0x191130u;

    // 0x191130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191138: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x191138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19113c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191140: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x191144: 0x0  nop
    ctx->pc = 0x191144u;
    // NOP
    ctx->pc = 0x191148u;
}
