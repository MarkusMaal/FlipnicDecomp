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

// Function: entry_001b17c4
// Address: 0x1b17c4 - 0x1b17e8
void entry_001b17c4_0x1b17c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17c4_0x1b17c4");
#endif

    ctx->pc = 0x1b17c4u;

    // 0x1b17c4: 0x0  nop
    ctx->pc = 0x1b17c4u;
    // NOP
    // 0x1b17c8: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x1b17c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b17cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1b17ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1b17d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b17d4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1b17d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b17d8: 0x90a80001  lbu         $t0, 0x1($a1)
    ctx->pc = 0x1b17d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b17dc: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x1b17dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b17e0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b17e4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1b17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x1b17e8u;
}
