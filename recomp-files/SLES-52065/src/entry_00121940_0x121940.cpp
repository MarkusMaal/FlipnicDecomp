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

// Function: entry_00121940
// Address: 0x121940 - 0x121954
void entry_00121940_0x121940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121940_0x121940");
#endif

    ctx->pc = 0x121940u;

    // 0x121940: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x121940u;
    {
        const bool branch_taken_0x121940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x121940) {
            ctx->pc = 0x121954u;
            return;
        }
    }
    ctx->pc = 0x121948u;
    // 0x121948: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x121948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12194c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12194Cu;
    {
        const bool branch_taken_0x12194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12194Cu;
        // 0x121950: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12194c) {
            ctx->pc = 0x121970u;
            return;
        }
    }
    ctx->pc = 0x121954u;
}
