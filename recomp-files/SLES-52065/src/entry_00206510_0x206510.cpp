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

// Function: entry_00206510
// Address: 0x206510 - 0x206520
void entry_00206510_0x206510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206510_0x206510");
#endif

    ctx->pc = 0x206510u;

    // 0x206510: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206514: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206518: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20651c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x20651cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x206520u;
}
