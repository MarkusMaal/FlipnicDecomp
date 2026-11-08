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

// Function: entry_001e92e0
// Address: 0x1e92e0 - 0x1e92fc
void entry_001e92e0_0x1e92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92e0_0x1e92e0");
#endif

    ctx->pc = 0x1e92e0u;

    // 0x1e92e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e92e4: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
    // 0x1e92e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e92e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e92ec: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1e92ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1e92f0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x1e92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x1e92f4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1e92f8: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x1e92f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    ctx->pc = 0x1e92fcu;
}
