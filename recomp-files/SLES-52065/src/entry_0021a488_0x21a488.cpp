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

// Function: entry_0021a488
// Address: 0x21a488 - 0x21a498
void entry_0021a488_0x21a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a488_0x21a488");
#endif

    ctx->pc = 0x21a488u;

    // 0x21a488: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x21a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a490: 0x24435300  addiu       $v1, $v0, 0x5300
    ctx->pc = 0x21a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x21a494: 0x0  nop
    ctx->pc = 0x21a494u;
    // NOP
    ctx->pc = 0x21a498u;
}
