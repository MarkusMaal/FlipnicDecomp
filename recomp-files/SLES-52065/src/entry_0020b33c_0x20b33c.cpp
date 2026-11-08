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

// Function: entry_0020b33c
// Address: 0x20b33c - 0x20b34c
void entry_0020b33c_0x20b33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b33c_0x20b33c");
#endif

    ctx->pc = 0x20b33cu;

    // 0x20b33c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b340: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x20b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x20b344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x20b348: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    ctx->pc = 0x20b34cu;
}
