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

// Function: entry_0011a3cc
// Address: 0x11a3cc - 0x11a3e4
void entry_0011a3cc_0x11a3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3cc_0x11a3cc");
#endif

    ctx->pc = 0x11a3ccu;

    // 0x11a3cc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x11a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x11a3d0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11a3d4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a3d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A3D8u;
    {
        const bool branch_taken_0x11a3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3d8) {
            ctx->pc = 0x11A3E4u;
            return;
        }
    }
    ctx->pc = 0x11A3E0u;
    // 0x11a3e0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x11a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    ctx->pc = 0x11a3e4u;
}
