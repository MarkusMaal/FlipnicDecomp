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

// Function: entry_00176ab8
// Address: 0x176ab8 - 0x176ac0
void entry_00176ab8_0x176ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ab8_0x176ab8");
#endif

    ctx->pc = 0x176ab8u;

    // 0x176ab8: 0x38420040  xori        $v0, $v0, 0x40
    ctx->pc = 0x176ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)64);
    // 0x176abc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x176abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x176ac0u;
}
