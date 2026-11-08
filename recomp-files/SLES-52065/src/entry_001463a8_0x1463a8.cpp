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

// Function: entry_001463a8
// Address: 0x1463a8 - 0x1463c4
void entry_001463a8_0x1463a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001463a8_0x1463a8");
#endif

    ctx->pc = 0x1463a8u;

    // 0x1463a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1463ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1463b0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1463b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1463b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1463B4u;
    {
        const bool branch_taken_0x1463b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1463B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463B4u;
        // 0x1463b8: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463b4) {
            ctx->pc = 0x1463C4u;
            return;
        }
    }
    ctx->pc = 0x1463BCu;
    // 0x1463bc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1463c0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1463c4u;
}
