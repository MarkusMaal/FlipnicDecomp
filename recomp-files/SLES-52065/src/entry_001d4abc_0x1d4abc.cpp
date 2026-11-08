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

// Function: entry_001d4abc
// Address: 0x1d4abc - 0x1d4acc
void entry_001d4abc_0x1d4abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4abc_0x1d4abc");
#endif

    ctx->pc = 0x1d4abcu;

    // 0x1d4abc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ac0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1d4ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d4ac4: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x1d4ac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x1d4ac8: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x1d4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
    ctx->pc = 0x1d4accu;
}
