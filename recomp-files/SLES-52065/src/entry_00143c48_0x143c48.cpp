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

// Function: entry_00143c48
// Address: 0x143c48 - 0x143c5c
void entry_00143c48_0x143c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c48_0x143c48");
#endif

    ctx->pc = 0x143c48u;

    // 0x143c48: 0x2951023  subu        $v0, $s4, $s5
    ctx->pc = 0x143c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x143c4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C4Cu;
    {
        const bool branch_taken_0x143c4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C4Cu;
        // 0x143c50: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c4c) {
            ctx->pc = 0x143C5Cu;
            return;
        }
    }
    ctx->pc = 0x143C54u;
    // 0x143c54: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x143c58: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x143c5cu;
}
