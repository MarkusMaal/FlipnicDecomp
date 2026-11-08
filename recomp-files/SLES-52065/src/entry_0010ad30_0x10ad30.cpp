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

// Function: entry_0010ad30
// Address: 0x10ad30 - 0x10ad70
void entry_0010ad30_0x10ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ad30_0x10ad30");
#endif

    switch (ctx->pc) {
        case 0x10ad64u: goto label_10ad64;
        case 0x10ad6cu: goto label_10ad6c;
        default: break;
    }

    ctx->pc = 0x10ad30u;

label_10ad30:
    // 0x10ad30: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10ad34:
    // 0x10ad34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10ad38:
    // 0x10ad38: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_10ad3c:
    if (ctx->pc == 0x10AD3Cu) {
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD40u;
        goto label_10ad40;
    }
    ctx->pc = 0x10AD38u;
    {
        const bool branch_taken_0x10ad38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad38) {
            ctx->pc = 0x10AD70u;
            return;
        }
    }
    ctx->pc = 0x10AD40u;
label_10ad40:
    // 0x10ad40: 0x8603024e  lh          $v1, 0x24E($s0)
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10ad44:
    // 0x10ad44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ad48:
    // 0x10ad48: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_10ad4c:
    if (ctx->pc == 0x10AD4Cu) {
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD50u;
        goto label_10ad50;
    }
    ctx->pc = 0x10AD48u;
    {
        const bool branch_taken_0x10ad48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad48) {
            ctx->pc = 0x10AD70u;
            return;
        }
    }
    ctx->pc = 0x10AD50u;
label_10ad50:
    // 0x10ad50: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10ad50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ad54:
    // 0x10ad54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ad58:
    // 0x10ad58: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ad58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ad5c:
    // 0x10ad5c: 0x320f809  jalr        $t9
label_10ad60:
    if (ctx->pc == 0x10AD60u) {
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD64u;
        goto label_10ad64;
    }
    ctx->pc = 0x10AD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AD64u);
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD5Cu, 0x10AD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AD64u;
label_10ad64:
    // 0x10ad64: 0xc043114  jal         func_10C450
label_10ad68:
    if (ctx->pc == 0x10AD68u) {
        ctx->pc = 0x10AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD64u;
        // 0x10ad68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD6Cu;
        goto label_10ad6c;
    }
    ctx->pc = 0x10AD64u;
    SET_GPR_U32(ctx, 31, 0x10AD6Cu);
    ctx->pc = 0x10AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD64u;
    // 0x10ad68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10AD64u, 0x10AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD6Cu;
label_10ad6c:
    // 0x10ad6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10ad70u;
}
