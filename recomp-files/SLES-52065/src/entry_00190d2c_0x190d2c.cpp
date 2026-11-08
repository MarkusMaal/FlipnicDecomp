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

// Function: entry_00190d2c
// Address: 0x190d2c - 0x190d58
void entry_00190d2c_0x190d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d2c_0x190d2c");
#endif

    ctx->pc = 0x190d2cu;

label_190d2c:
    // 0x190d2c: 0x0  nop
    ctx->pc = 0x190d2cu;
    // NOP
    // 0x190d30: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x190d34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x190d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190d38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190D38u;
    {
        const bool branch_taken_0x190d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d38) {
            ctx->pc = 0x190D58u;
            return;
        }
    }
    ctx->pc = 0x190D40u;
    // 0x190d40: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x190d40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190d44: 0x1492821  addu        $a1, $t2, $t1
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x190d48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d4c: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x190d4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190d50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x190D50u;
    {
        const bool branch_taken_0x190d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D50u;
        // 0x190d54: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d50) {
            ctx->pc = 0x190D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d2c;
        }
    }
    ctx->pc = 0x190D58u;
}
