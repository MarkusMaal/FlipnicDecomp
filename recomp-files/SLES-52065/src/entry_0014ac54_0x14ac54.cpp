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

// Function: entry_0014ac54
// Address: 0x14ac54 - 0x14ac70
void entry_0014ac54_0x14ac54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac54_0x14ac54");
#endif

    ctx->pc = 0x14ac54u;

    // 0x14ac54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ac58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ac5c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ac60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC60u;
    {
        const bool branch_taken_0x14ac60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC60u;
        // 0x14ac64: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac60) {
            ctx->pc = 0x14AC70u;
            return;
        }
    }
    ctx->pc = 0x14AC68u;
    // 0x14ac68: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ac6c: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14ac70u;
}
