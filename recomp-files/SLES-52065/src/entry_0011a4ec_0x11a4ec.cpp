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

// Function: entry_0011a4ec
// Address: 0x11a4ec - 0x11a504
void entry_0011a4ec_0x11a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a4ec_0x11a4ec");
#endif

    ctx->pc = 0x11a4ecu;

    // 0x11a4ec: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x11a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11a4f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11a4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11a4f4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a4f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a4f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A4F8u;
    {
        const bool branch_taken_0x11a4f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a4f8) {
            ctx->pc = 0x11A504u;
            return;
        }
    }
    ctx->pc = 0x11A500u;
    // 0x11a500: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x11a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    ctx->pc = 0x11a504u;
}
