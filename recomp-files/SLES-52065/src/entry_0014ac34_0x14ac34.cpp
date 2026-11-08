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

// Function: entry_0014ac34
// Address: 0x14ac34 - 0x14ac54
void entry_0014ac34_0x14ac34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac34_0x14ac34");
#endif

    ctx->pc = 0x14ac34u;

    // 0x14ac34: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x14ac34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ac38: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AC38u;
    {
        const bool branch_taken_0x14ac38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac38) {
            ctx->pc = 0x14AC54u;
            return;
        }
    }
    ctx->pc = 0x14AC40u;
    // 0x14ac40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ac44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ac48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ac4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14AC4Cu;
    {
        const bool branch_taken_0x14ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC4Cu;
        // 0x14ac50: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac4c) {
            ctx->pc = 0x14ACB8u;
            return;
        }
    }
    ctx->pc = 0x14AC54u;
}
