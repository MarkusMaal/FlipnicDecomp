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

// Function: entry_0014ad14
// Address: 0x14ad14 - 0x14ad2c
void entry_0014ad14_0x14ad14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad14_0x14ad14");
#endif

    ctx->pc = 0x14ad14u;

    // 0x14ad14: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ad18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ad1c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AD1Cu;
    {
        const bool branch_taken_0x14ad1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD1Cu;
        // 0x14ad20: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad1c) {
            ctx->pc = 0x14AD2Cu;
            return;
        }
    }
    ctx->pc = 0x14AD24u;
    // 0x14ad24: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ad28: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14ad2cu;
}
