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

// Function: entry_0012f614
// Address: 0x12f614 - 0x12f644
void entry_0012f614_0x12f614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f614_0x12f614");
#endif

    switch (ctx->pc) {
        case 0x12f630u: goto label_12f630;
        default: break;
    }

    ctx->pc = 0x12f614u;

label_12f614:
    // 0x12f614: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12f614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12f618:
    // 0x12f618: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_12f61c:
    // 0x12f61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f620:
    // 0x12f620: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12f624:
    // 0x12f624: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_12f628:
    // 0x12f628: 0x320f809  jalr        $t9
label_12f62c:
    if (ctx->pc == 0x12F62Cu) {
        ctx->pc = 0x12F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F628u;
        // 0x12f62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F630u;
        goto label_12f630;
    }
    ctx->pc = 0x12F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F630u);
        ctx->pc = 0x12F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F628u;
        // 0x12f62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F628u, 0x12F630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F630u;
label_12f630:
    // 0x12f630: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f634:
    // 0x12f634: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12f638:
    // 0x12f638: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_12f63c:
    // 0x12f63c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_12f640:
    if (ctx->pc == 0x12F640u) {
        ctx->pc = 0x12F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F63Cu;
        // 0x12f640: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F644u;
        goto label_fallthrough_0x12f63c;
    }
    ctx->pc = 0x12F63Cu;
    {
        const bool branch_taken_0x12f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F63Cu;
        // 0x12f640: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f63c) {
            ctx->pc = 0x12F5F0u;
            return;
        }
    }
label_fallthrough_0x12f63c:
    ctx->pc = 0x12F644u;
}
