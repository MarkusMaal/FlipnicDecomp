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

// Function: entry_00110470
// Address: 0x110470 - 0x110494
void entry_00110470_0x110470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110470_0x110470");
#endif

    ctx->pc = 0x110470u;

    // 0x110470: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110474: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110478: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x110478u;
    {
        const bool branch_taken_0x110478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110478) {
            ctx->pc = 0x110418u;
            return;
        }
    }
    ctx->pc = 0x110480u;
    // 0x110480: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x110480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x110484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11048c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11048Cu;
    {
        const bool branch_taken_0x11048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11048Cu;
        // 0x110490: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11048c) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x110494u;
}
