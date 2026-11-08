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

// Function: entry_0019cb40
// Address: 0x19cb40 - 0x19cb7c
void entry_0019cb40_0x19cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb40_0x19cb40");
#endif

    switch (ctx->pc) {
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb68u: goto label_19cb68;
        default: break;
    }

    ctx->pc = 0x19cb40u;

label_19cb40:
    // 0x19cb40: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cb44:
    // 0x19cb44: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19cb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19cb48:
    // 0x19cb48: 0x320f809  jalr        $t9
label_19cb4c:
    if (ctx->pc == 0x19CB4Cu) {
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB50u;
        goto label_19cb50;
    }
    ctx->pc = 0x19CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CB50u);
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB48u, 0x19CB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CB50u;
label_19cb50:
    // 0x19cb50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19cb54:
    if (ctx->pc == 0x19CB54u) {
        ctx->pc = 0x19CB58u;
        goto label_19cb58;
    }
    ctx->pc = 0x19CB50u;
    {
        const bool branch_taken_0x19cb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cb50) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CB58u;
label_19cb58:
    // 0x19cb58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19cb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cb5c:
    // 0x19cb5c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19cb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19cb60:
    // 0x19cb60: 0x320f809  jalr        $t9
label_19cb64:
    if (ctx->pc == 0x19CB64u) {
        ctx->pc = 0x19CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB60u;
        // 0x19cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB68u;
        goto label_19cb68;
    }
    ctx->pc = 0x19CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CB68u);
        ctx->pc = 0x19CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB60u;
        // 0x19cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB60u, 0x19CB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CB68u;
label_19cb68:
    // 0x19cb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb6c:
    // 0x19cb6c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_19cb70:
    if (ctx->pc == 0x19CB70u) {
        ctx->pc = 0x19CB74u;
        goto label_19cb74;
    }
    ctx->pc = 0x19CB6Cu;
    {
        const bool branch_taken_0x19cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19cb6c) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CB74u;
label_19cb74:
    // 0x19cb74: 0xae40068c  sw          $zero, 0x68C($s2)
    ctx->pc = 0x19cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
label_19cb78:
    // 0x19cb78: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
    ctx->pc = 0x19cb7cu;
}
