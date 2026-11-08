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

// Function: entry_0010a8cc
// Address: 0x10a8cc - 0x10a8f0
void entry_0010a8cc_0x10a8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8cc_0x10a8cc");
#endif

    ctx->pc = 0x10a8ccu;

    // 0x10a8cc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a8d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a8d4: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x10a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x10a8d8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a8dc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x10a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x10a8e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10a8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10a8e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A8E4u;
    {
        const bool branch_taken_0x10a8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a8e4) {
            ctx->pc = 0x10A8F0u;
            return;
        }
    }
    ctx->pc = 0x10A8ECu;
    // 0x10a8ec: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x10a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x10a8f0u;
}
