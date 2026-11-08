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

// Function: entry_001071ec
// Address: 0x1071ec - 0x1071fc
void entry_001071ec_0x1071ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001071ec_0x1071ec");
#endif

    ctx->pc = 0x1071ecu;

    // 0x1071ec: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1071f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1071f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071f8: 0x24502cd8  addiu       $s0, $v0, 0x2CD8
    ctx->pc = 0x1071f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    ctx->pc = 0x1071fcu;
}
