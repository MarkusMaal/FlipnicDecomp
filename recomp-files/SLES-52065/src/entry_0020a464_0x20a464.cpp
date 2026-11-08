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

// Function: entry_0020a464
// Address: 0x20a464 - 0x20a478
void entry_0020a464_0x20a464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a464_0x20a464");
#endif

    ctx->pc = 0x20a464u;

    // 0x20a464: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x20a468: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x20a46c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x20a46cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a470: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x20a470u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x20a474: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x20a478u;
}
