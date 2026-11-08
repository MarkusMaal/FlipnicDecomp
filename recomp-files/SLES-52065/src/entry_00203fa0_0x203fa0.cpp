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

// Function: entry_00203fa0
// Address: 0x203fa0 - 0x203fb0
void entry_00203fa0_0x203fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203fa0_0x203fa0");
#endif

    ctx->pc = 0x203fa0u;

    // 0x203fa0: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x203fa4: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x203fa8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x203fa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fac: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x203facu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    ctx->pc = 0x203fb0u;
}
