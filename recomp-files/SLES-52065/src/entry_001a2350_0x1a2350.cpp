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

// Function: entry_001a2350
// Address: 0x1a2350 - 0x1a2364
void entry_001a2350_0x1a2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2350_0x1a2350");
#endif

    ctx->pc = 0x1a2350u;

    // 0x1a2350: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a2354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a235c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1a235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1a2360: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1a2364u;
}
