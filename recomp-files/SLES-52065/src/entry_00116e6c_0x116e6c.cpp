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

// Function: entry_00116e6c
// Address: 0x116e6c - 0x116e90
void entry_00116e6c_0x116e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e6c_0x116e6c");
#endif

    ctx->pc = 0x116e6cu;

    // 0x116e6c: 0x0  nop
    ctx->pc = 0x116e6cu;
    // NOP
    // 0x116e70: 0x91450000  lbu         $a1, 0x0($t2)
    ctx->pc = 0x116e70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116e74: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x116e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x116e78: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116E90u;
            return;
        }
    }
    ctx->pc = 0x116E80u;
    // 0x116e80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x116e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e84: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x116e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x116e88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116E88u;
    {
        const bool branch_taken_0x116e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E88u;
        // 0x116e8c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e88) {
            ctx->pc = 0x116EB0u;
            return;
        }
    }
    ctx->pc = 0x116E90u;
}
