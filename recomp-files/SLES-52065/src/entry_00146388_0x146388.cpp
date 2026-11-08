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

// Function: entry_00146388
// Address: 0x146388 - 0x1463a8
void entry_00146388_0x146388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146388_0x146388");
#endif

    ctx->pc = 0x146388u;

    // 0x146388: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x146388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14638c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14638Cu;
    {
        const bool branch_taken_0x14638c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14638c) {
            ctx->pc = 0x1463A8u;
            return;
        }
    }
    ctx->pc = 0x146394u;
    // 0x146394: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x146398: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14639c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1463a0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1463A0u;
    {
        const bool branch_taken_0x1463a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463A0u;
        // 0x1463a4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463a0) {
            ctx->pc = 0x146444u;
            return;
        }
    }
    ctx->pc = 0x1463A8u;
}
