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

// Function: entry_00149990
// Address: 0x149990 - 0x14999c
void entry_00149990_0x149990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149990_0x149990");
#endif

    ctx->pc = 0x149990u;

    // 0x149990: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x149990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149994: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x149994u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x149998: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x149998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x14999cu;
}
