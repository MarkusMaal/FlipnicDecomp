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

// Function: entry_001fd9a8
// Address: 0x1fd9a8 - 0x1fd9b8
void entry_001fd9a8_0x1fd9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd9a8_0x1fd9a8");
#endif

    ctx->pc = 0x1fd9a8u;

    // 0x1fd9a8: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1fd9ac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1fd9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9b0: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1fd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x1fd9b4: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1fd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x1fd9b8u;
}
