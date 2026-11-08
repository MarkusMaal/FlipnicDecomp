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

// Function: entry_001487b8
// Address: 0x1487b8 - 0x1487f0
void entry_001487b8_0x1487b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001487b8_0x1487b8");
#endif

    ctx->pc = 0x1487b8u;

    // 0x1487b8: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x1487b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1487bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1487c0: 0xadf00000  sw          $s0, 0x0($t7)
    ctx->pc = 0x1487c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 16));
    // 0x1487c4: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1487c8: 0x26190004  addiu       $t9, $s0, 0x4
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1487cc: 0xadd90000  sw          $t9, 0x0($t6)
    ctx->pc = 0x1487ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 25));
    // 0x1487d0: 0x8fb10020  lw          $s1, 0x20($sp)
    ctx->pc = 0x1487d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1487d4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1487d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1487d8: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1487d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1487dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1487dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1487e0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1487e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1487e4: 0x17300002  bne         $t9, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1487E4u;
    {
        const bool branch_taken_0x1487e4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 16));
        if (branch_taken_0x1487e4) {
            ctx->pc = 0x1487F0u;
            return;
        }
    }
    ctx->pc = 0x1487ECu;
    // 0x1487ec: 0xadd10000  sw          $s1, 0x0($t6)
    ctx->pc = 0x1487ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x1487f0u;
}
