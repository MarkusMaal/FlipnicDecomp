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

// Function: caseD_1
// Address: 0x11480c - 0x114820
void caseD_1_0x11480c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x11480c");
#endif

    ctx->pc = 0x11480cu;

    // 0x11480c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x114810: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x114810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114818: 0x8c442c10  lw          $a0, 0x2C10($v0)
    ctx->pc = 0x114818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x11481c: 0x0  nop
    ctx->pc = 0x11481cu;
    // NOP
    ctx->pc = 0x114820u;
}
