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

// Function: entry_0019102c
// Address: 0x19102c - 0x19103c
void entry_0019102c_0x19102c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019102c_0x19102c");
#endif

    ctx->pc = 0x19102cu;

    // 0x19102c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191034: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191038: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19103cu;
}
