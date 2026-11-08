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

// Function: entry_00149b00
// Address: 0x149b00 - 0x149b0c
void entry_00149b00_0x149b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b00_0x149b00");
#endif

    ctx->pc = 0x149b00u;

    // 0x149b00: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x149b04: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x149b04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x149b08: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x149b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->pc = 0x149b0cu;
}
