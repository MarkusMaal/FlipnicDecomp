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

// Function: entry_001ab9d8
// Address: 0x1ab9d8 - 0x1aba04
void entry_001ab9d8_0x1ab9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab9d8_0x1ab9d8");
#endif

    ctx->pc = 0x1ab9d8u;

    // 0x1ab9d8: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1ab9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1ab9dc: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1ab9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1ab9e0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ab9e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab9e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ab9ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab9f0: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1ab9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ab9f4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB9F4u;
    {
        const bool branch_taken_0x1ab9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ab9f4) {
            ctx->pc = 0x1ABA04u;
            return;
        }
    }
    ctx->pc = 0x1AB9FCu;
    // 0x1ab9fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB9FCu;
    {
        const bool branch_taken_0x1ab9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab9fc) {
            ctx->pc = 0x1ABA08u;
            return;
        }
    }
    ctx->pc = 0x1ABA04u;
}
