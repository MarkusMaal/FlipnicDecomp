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

// Function: caseD_5
// Address: 0x1a69cc - 0x1a69f0
void caseD_5_0x1a69cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a69cc");
#endif

    switch (ctx->pc) {
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        default: break;
    }

    ctx->pc = 0x1a69ccu;

label_1a69cc:
    // 0x1a69cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a69d0:
    // 0x1a69d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a69d4:
    // 0x1a69d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a69d8:
    // 0x1a69d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a69dc:
    // 0x1a69dc: 0x320f809  jalr        $t9
label_1a69e0:
    if (ctx->pc == 0x1A69E0u) {
        ctx->pc = 0x1A69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69DCu;
        // 0x1a69e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69E4u;
        goto label_1a69e4;
    }
    ctx->pc = 0x1A69DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A69E4u);
        ctx->pc = 0x1A69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69DCu;
        // 0x1a69e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69DCu, 0x1A69E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A69E4u;
label_1a69e4:
    // 0x1a69e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a69e8:
    // 0x1a69e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a69ec:
    // 0x1a69ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1a69f0u;
}
