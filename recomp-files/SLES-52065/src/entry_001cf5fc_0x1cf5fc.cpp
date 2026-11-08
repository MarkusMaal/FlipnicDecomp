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

// Function: entry_001cf5fc
// Address: 0x1cf5fc - 0x1cf620
void entry_001cf5fc_0x1cf5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf5fc_0x1cf5fc");
#endif

    ctx->pc = 0x1cf5fcu;

    // 0x1cf5fc: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf600: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf608: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cf60c: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x1cf610: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x1cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1cf614: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF620u;
            return;
        }
    }
    ctx->pc = 0x1CF61Cu;
    // 0x1cf61c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1cf620u;
}
