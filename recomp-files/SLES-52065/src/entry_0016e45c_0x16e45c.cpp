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

// Function: entry_0016e45c
// Address: 0x16e45c - 0x16e478
void entry_0016e45c_0x16e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e45c_0x16e45c");
#endif

    ctx->pc = 0x16e45cu;

    // 0x16e45c: 0x0  nop
    ctx->pc = 0x16e45cu;
    // NOP
    // 0x16e460: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e464: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e468: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16E468u;
    {
        const bool branch_taken_0x16e468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e468) {
            ctx->pc = 0x16E408u;
            return;
        }
    }
    ctx->pc = 0x16E470u;
    // 0x16e470: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x16E470u;
    {
        const bool branch_taken_0x16e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E470u;
        // 0x16e474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e470) {
            ctx->pc = 0x16E724u;
            return;
        }
    }
    ctx->pc = 0x16E478u;
}
