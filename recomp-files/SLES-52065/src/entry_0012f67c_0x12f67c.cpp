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

// Function: entry_0012f67c
// Address: 0x12f67c - 0x12f6ac
void entry_0012f67c_0x12f67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f67c_0x12f67c");
#endif

    switch (ctx->pc) {
        case 0x12f698u: goto label_12f698;
        default: break;
    }

    ctx->pc = 0x12f67cu;

label_12f67c:
    // 0x12f67c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f680:
    // 0x12f680: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_12f684:
    // 0x12f684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f688:
    // 0x12f688: 0x24650920  addiu       $a1, $v1, 0x920
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
label_12f68c:
    // 0x12f68c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f690:
    // 0x12f690: 0x320f809  jalr        $t9
label_12f694:
    if (ctx->pc == 0x12F694u) {
        ctx->pc = 0x12F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F690u;
        // 0x12f694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F698u;
        goto label_12f698;
    }
    ctx->pc = 0x12F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F698u);
        ctx->pc = 0x12F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F690u;
        // 0x12f694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F690u, 0x12F698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F698u;
label_12f698:
    // 0x12f698: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12f69c:
    // 0x12f69c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f6a0:
    // 0x12f6a0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x12f6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_12f6a4:
    // 0x12f6a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_12f6a8:
    if (ctx->pc == 0x12F6A8u) {
        ctx->pc = 0x12F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6A4u;
        // 0x12f6a8: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6ACu;
        goto label_fallthrough_0x12f6a4;
    }
    ctx->pc = 0x12F6A4u;
    {
        const bool branch_taken_0x12f6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6A4u;
        // 0x12f6a8: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6a4) {
            ctx->pc = 0x12F658u;
            return;
        }
    }
label_fallthrough_0x12f6a4:
    ctx->pc = 0x12F6ACu;
}
