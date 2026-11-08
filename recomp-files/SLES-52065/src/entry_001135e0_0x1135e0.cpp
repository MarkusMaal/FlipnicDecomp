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

// Function: entry_001135e0
// Address: 0x1135e0 - 0x113600
void entry_001135e0_0x1135e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001135e0_0x1135e0");
#endif

    ctx->pc = 0x1135e0u;

    // 0x1135e0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1135e4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1135e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1135e8: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1135E8u;
    {
        const bool branch_taken_0x1135e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1135e8) {
            ctx->pc = 0x113574u;
            return;
        }
    }
    ctx->pc = 0x1135F0u;
    // 0x1135f0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1135f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1135f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1135f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1135f8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1135f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1135fc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1135fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x113600u;
}
