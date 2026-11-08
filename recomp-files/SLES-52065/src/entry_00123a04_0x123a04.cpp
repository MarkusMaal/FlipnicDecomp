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

// Function: entry_00123a04
// Address: 0x123a04 - 0x123a3c
void entry_00123a04_0x123a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a04_0x123a04");
#endif

    ctx->pc = 0x123a04u;

    // 0x123a04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123a08: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123a0c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123a14: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x123a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x123a18: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x123a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x123a1c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x123a20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a24: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x123a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x123a28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123a2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x123A2Cu;
    {
        const bool branch_taken_0x123a2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x123a2c) {
            ctx->pc = 0x123A3Cu;
            return;
        }
    }
    ctx->pc = 0x123A34u;
    // 0x123a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123A34u;
    {
        const bool branch_taken_0x123a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A34u;
        // 0x123a38: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a34) {
            ctx->pc = 0x123A40u;
            return;
        }
    }
    ctx->pc = 0x123A3Cu;
}
