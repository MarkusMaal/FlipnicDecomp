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

// Function: entry_001425b4
// Address: 0x1425b4 - 0x1425e0
void entry_001425b4_0x1425b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001425b4_0x1425b4");
#endif

    ctx->pc = 0x1425b4u;

    // 0x1425b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1425b8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1425bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1425c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1425c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1425C4u;
    {
        const bool branch_taken_0x1425c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425c4) {
            ctx->pc = 0x1425E0u;
            return;
        }
    }
    ctx->pc = 0x1425CCu;
    // 0x1425cc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1425d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1425d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1425d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1425d8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1425D8u;
    SET_GPR_U32(ctx, 31, 0x1425E0u);
    ctx->pc = 0x1425DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425D8u;
    // 0x1425dc: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1425D8u, 0x1425E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425E0u;
}
