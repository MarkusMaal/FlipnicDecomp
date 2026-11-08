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

// Function: entry_001e58dc
// Address: 0x1e58dc - 0x1e5940
void entry_001e58dc_0x1e58dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e58dc_0x1e58dc");
#endif

    switch (ctx->pc) {
        case 0x1e590cu: goto label_1e590c;
        default: break;
    }

    ctx->pc = 0x1e58dcu;

label_1e58dc:
    // 0x1e58dc: 0x0  nop
    ctx->pc = 0x1e58dcu;
    // NOP
label_1e58e0:
    // 0x1e58e0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e58e4:
    // 0x1e58e4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1e58e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e58e8:
    // 0x1e58e8: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x1e58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_1e58ec:
    // 0x1e58ec: 0xd23821  addu        $a3, $a2, $s2
    ctx->pc = 0x1e58ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e58f0:
    // 0x1e58f0: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x1e58f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e58f4:
    // 0x1e58f4: 0x27a9006f  addiu       $t1, $sp, 0x6F
    ctx->pc = 0x1e58f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
label_1e58f8:
    // 0x1e58f8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1e58f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e58fc:
    // 0x1e58fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5900:
    // 0x1e5900: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5904:
    // 0x1e5904: 0x320f809  jalr        $t9
label_1e5908:
    if (ctx->pc == 0x1E5908u) {
        ctx->pc = 0x1E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5904u;
        // 0x1e5908: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E590Cu;
        goto label_1e590c;
    }
    ctx->pc = 0x1E5904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E590Cu);
        ctx->pc = 0x1E5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5904u;
        // 0x1e5908: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5904u, 0x1E590Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E590Cu;
label_1e590c:
    // 0x1e590c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5910:
    // 0x1e5910: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1e5914:
    if (ctx->pc == 0x1E5914u) {
        ctx->pc = 0x1E5918u;
        goto label_1e5918;
    }
    ctx->pc = 0x1E5910u;
    {
        const bool branch_taken_0x1e5910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5910) {
            ctx->pc = 0x1E5954u;
            return;
        }
    }
    ctx->pc = 0x1E5918u;
label_1e5918:
    // 0x1e5918: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e591c:
    // 0x1e591c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e5920:
    if (ctx->pc == 0x1E5920u) {
        ctx->pc = 0x1E5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E591Cu;
        // 0x1e5920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5924u;
        goto label_1e5924;
    }
    ctx->pc = 0x1E591Cu;
    {
        const bool branch_taken_0x1e591c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E591Cu;
        // 0x1e5920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e591c) {
            ctx->pc = 0x1E594Cu;
            return;
        }
    }
    ctx->pc = 0x1E5924u;
label_1e5924:
    // 0x1e5924: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e5928:
    if (ctx->pc == 0x1E5928u) {
        ctx->pc = 0x1E592Cu;
        goto label_1e592c;
    }
    ctx->pc = 0x1E5924u;
    {
        const bool branch_taken_0x1e5924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5924) {
            ctx->pc = 0x1E5940u;
            return;
        }
    }
    ctx->pc = 0x1E592Cu;
label_1e592c:
    // 0x1e592c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5930:
    // 0x1e5930: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e5934:
    if (ctx->pc == 0x1E5934u) {
        ctx->pc = 0x1E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5930u;
        // 0x1e5934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5938u;
        goto label_1e5938;
    }
    ctx->pc = 0x1E5930u;
    {
        const bool branch_taken_0x1e5930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5930u;
        // 0x1e5934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5930) {
            ctx->pc = 0x1E5944u;
            return;
        }
    }
    ctx->pc = 0x1E5938u;
label_1e5938:
    // 0x1e5938: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e593c:
    if (ctx->pc == 0x1E593Cu) {
        ctx->pc = 0x1E5940u;
        goto label_fallthrough_0x1e5938;
    }
    ctx->pc = 0x1E5938u;
    {
        const bool branch_taken_0x1e5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5938) {
            ctx->pc = 0x1E5954u;
            return;
        }
    }
label_fallthrough_0x1e5938:
    ctx->pc = 0x1E5940u;
}
