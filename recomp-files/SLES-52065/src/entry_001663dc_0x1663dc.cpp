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

// Function: entry_001663dc
// Address: 0x1663dc - 0x166404
void entry_001663dc_0x1663dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001663dc_0x1663dc");
#endif

    switch (ctx->pc) {
        case 0x1663f8u: goto label_1663f8;
        default: break;
    }

    ctx->pc = 0x1663dcu;

    // 0x1663dc: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663e0: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x1663e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1663e4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1663e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663e8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1663E8u;
    {
        const bool branch_taken_0x1663e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E8u;
        // 0x1663ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e8) {
            ctx->pc = 0x166404u;
            return;
        }
    }
    ctx->pc = 0x1663F0u;
    // 0x1663f0: 0xc042118  jal         func_108460
    ctx->pc = 0x1663F0u;
    SET_GPR_U32(ctx, 31, 0x1663F8u);
    ctx->pc = 0x1663F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663F0u;
    // 0x1663f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1663F0u, 0x1663F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663F8u;
label_1663f8:
    // 0x1663f8: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166400: 0xa6020220  sh          $v0, 0x220($s0)
    ctx->pc = 0x166400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x166404u;
}
