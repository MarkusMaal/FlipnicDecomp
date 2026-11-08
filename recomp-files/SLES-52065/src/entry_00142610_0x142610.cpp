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

// Function: entry_00142610
// Address: 0x142610 - 0x142648
void entry_00142610_0x142610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142610_0x142610");
#endif

    switch (ctx->pc) {
        case 0x142638u: goto label_142638;
        default: break;
    }

    ctx->pc = 0x142610u;

label_142610:
    // 0x142610: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x142610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x142614: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x142618: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x142618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14261c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x142620: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x142620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x142624: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x142624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x142628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14262c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142630: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x142630u;
    SET_GPR_U32(ctx, 31, 0x142638u);
    ctx->pc = 0x142634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142630u;
    // 0x142634: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x142630u, 0x142638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142638u;
label_142638:
    // 0x142638: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14263c: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x14263cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x142640: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142640) {
            ctx->pc = 0x142610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142610;
        }
    }
    ctx->pc = 0x142648u;
}
