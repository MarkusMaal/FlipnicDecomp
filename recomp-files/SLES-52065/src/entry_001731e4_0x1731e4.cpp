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

// Function: entry_001731e4
// Address: 0x1731e4 - 0x173204
void entry_001731e4_0x1731e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001731e4_0x1731e4");
#endif

    switch (ctx->pc) {
        case 0x1731ecu: goto label_1731ec;
        default: break;
    }

    ctx->pc = 0x1731e4u;

    // 0x1731e4: 0xc042118  jal         func_108460
    ctx->pc = 0x1731E4u;
    SET_GPR_U32(ctx, 31, 0x1731ECu);
    ctx->pc = 0x1731E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E4u;
    // 0x1731e8: 0x8e244024  lw          $a0, 0x4024($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1731E4u, 0x1731ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731ECu;
label_1731ec:
    // 0x1731ec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1731f0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1731f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1731F4u;
    {
        const bool branch_taken_0x1731f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F4u;
        // 0x1731f8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731f4) {
            ctx->pc = 0x173204u;
            return;
        }
    }
    ctx->pc = 0x1731FCu;
    // 0x1731fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1731FCu;
    {
        const bool branch_taken_0x1731fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731FCu;
        // 0x173200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731fc) {
            ctx->pc = 0x17321Cu;
            return;
        }
    }
    ctx->pc = 0x173204u;
}
