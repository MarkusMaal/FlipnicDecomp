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

// Function: caseD_2b
// Address: 0x203cf4 - 0x203cfc
void caseD_2b_0x203cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x203cf4");
#endif

    ctx->pc = 0x203cf4u;

    // 0x203cf4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cf8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x203cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->pc = 0x203cfcu;
}
