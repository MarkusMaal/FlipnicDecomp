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

// Function: entry_00197624
// Address: 0x197624 - 0x197660
void entry_00197624_0x197624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197624_0x197624");
#endif

    switch (ctx->pc) {
        case 0x19763cu: goto label_19763c;
        case 0x197658u: goto label_197658;
        default: break;
    }

    ctx->pc = 0x197624u;

label_197624:
    // 0x197624: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197628:
    // 0x197628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19762c:
    // 0x19762c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_197630:
    // 0x197630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197634:
    // 0x197634: 0xc064a64  jal         func_192990
label_197638:
    if (ctx->pc == 0x197638u) {
        ctx->pc = 0x197638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197634u;
        // 0x197638: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19763Cu;
        goto label_19763c;
    }
    ctx->pc = 0x197634u;
    SET_GPR_U32(ctx, 31, 0x19763Cu);
    ctx->pc = 0x197638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197634u;
    // 0x197638: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x197634u, 0x19763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19763Cu;
label_19763c:
    // 0x19763c: 0x12a001fe  beqz        $s5, . + 4 + (0x1FE << 2)
label_197640:
    if (ctx->pc == 0x197640u) {
        ctx->pc = 0x197644u;
        goto label_197644;
    }
    ctx->pc = 0x19763Cu;
    {
        const bool branch_taken_0x19763c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19763c) {
            ctx->pc = 0x197E38u;
            return;
        }
    }
    ctx->pc = 0x197644u;
label_197644:
    // 0x197644: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x197644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_197648:
    // 0x197648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19764c:
    // 0x19764c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19764cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_197650:
    // 0x197650: 0x320f809  jalr        $t9
label_197654:
    if (ctx->pc == 0x197654u) {
        ctx->pc = 0x197654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197650u;
        // 0x197654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197658u;
        goto label_197658;
    }
    ctx->pc = 0x197650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197658u);
        ctx->pc = 0x197654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197650u;
        // 0x197654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197650u, 0x197658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197658u;
label_197658:
    // 0x197658: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_19765c:
    if (ctx->pc == 0x19765Cu) {
        ctx->pc = 0x19765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197658u;
        // 0x19765c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197660u;
        goto label_fallthrough_0x197658;
    }
    ctx->pc = 0x197658u;
    {
        const bool branch_taken_0x197658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197658u;
        // 0x19765c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197658) {
            ctx->pc = 0x197E3Cu;
            return;
        }
    }
label_fallthrough_0x197658:
    ctx->pc = 0x197660u;
}
