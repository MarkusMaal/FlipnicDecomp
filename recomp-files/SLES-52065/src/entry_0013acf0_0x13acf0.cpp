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

// Function: entry_0013acf0
// Address: 0x13acf0 - 0x13ad14
void entry_0013acf0_0x13acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013acf0_0x13acf0");
#endif

    ctx->pc = 0x13acf0u;

    // 0x13acf0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13acf4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13ACF4u;
    {
        const bool branch_taken_0x13acf4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x13ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACF4u;
        // 0x13acf8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acf4) {
            ctx->pc = 0x13AD14u;
            return;
        }
    }
    ctx->pc = 0x13ACFCu;
    // 0x13acfc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ad00: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x13ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x13ad04: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13ad04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13ad08: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AD08u;
    {
        const bool branch_taken_0x13ad08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad08) {
            ctx->pc = 0x13AD20u;
            return;
        }
    }
    ctx->pc = 0x13AD10u;
    // 0x13ad10: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x13ad14u;
}
