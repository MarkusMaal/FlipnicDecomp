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

// Function: entry_00162390
// Address: 0x162390 - 0x1623a0
void entry_00162390_0x162390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162390_0x162390");
#endif

    ctx->pc = 0x162390u;

    // 0x162390: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x162390u;
    {
        const bool branch_taken_0x162390 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x162394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162390u;
        // 0x162394: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162390) {
            ctx->pc = 0x1623A0u;
            return;
        }
    }
    ctx->pc = 0x162398u;
    // 0x162398: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x162398u;
    {
        const bool branch_taken_0x162398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162398u;
        // 0x16239c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162398) {
            ctx->pc = 0x162E00u;
            return;
        }
    }
    ctx->pc = 0x1623A0u;
}
