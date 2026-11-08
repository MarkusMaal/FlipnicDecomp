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

// Function: entry_0014acf0
// Address: 0x14acf0 - 0x14ad14
void entry_0014acf0_0x14acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014acf0_0x14acf0");
#endif

    ctx->pc = 0x14acf0u;

    // 0x14acf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14acf4: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x14acf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14acf8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ACF8u;
    {
        const bool branch_taken_0x14acf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14acf8) {
            ctx->pc = 0x14AD14u;
            return;
        }
    }
    ctx->pc = 0x14AD00u;
    // 0x14ad00: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ad04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ad08: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD80u;
            return;
        }
    }
    ctx->pc = 0x14AD14u;
}
