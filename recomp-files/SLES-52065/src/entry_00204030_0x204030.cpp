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

// Function: entry_00204030
// Address: 0x204030 - 0x204044
void entry_00204030_0x204030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204030_0x204030");
#endif

    ctx->pc = 0x204030u;

    // 0x204030: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204034u;
    {
        const bool branch_taken_0x204034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204034u;
        // 0x204038: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204034) {
            ctx->pc = 0x204044u;
            return;
        }
    }
    ctx->pc = 0x20403Cu;
    // 0x20403c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20403Cu;
    {
        const bool branch_taken_0x20403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20403Cu;
        // 0x204040: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20403c) {
            ctx->pc = 0x204054u;
            return;
        }
    }
    ctx->pc = 0x204044u;
}
