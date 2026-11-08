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

// Function: entry_00102618
// Address: 0x102618 - 0x102678
void entry_00102618_0x102618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102618_0x102618");
#endif

    switch (ctx->pc) {
        case 0x102668u: goto label_102668;
        default: break;
    }

    ctx->pc = 0x102618u;

label_102618:
    // 0x102618: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x102618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10261c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x10261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102620: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102624: 0x8e822c1c  lw          $v0, 0x2C1C($s4)
    ctx->pc = 0x102624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11292)));
    // 0x102628: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10262c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x102630: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x102634: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x102638: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x102638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10263c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102640: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x102640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102644: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x102648: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10264c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102650: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102658: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x10265c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102660: 0xc05fa70  jal         func_17E9C0
    ctx->pc = 0x102660u;
    SET_GPR_U32(ctx, 31, 0x102668u);
    ctx->pc = 0x102664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102660u;
    // 0x102664: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E9C0u, 0x102660u, 0x102668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102668u;
label_102668:
    // 0x102668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10266c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102670: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x102670u;
    {
        const bool branch_taken_0x102670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102670) {
            ctx->pc = 0x102618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102618;
        }
    }
    ctx->pc = 0x102678u;
}
