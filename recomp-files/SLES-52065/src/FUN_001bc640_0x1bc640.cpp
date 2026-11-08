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

// Function: FUN_001bc640
// Address: 0x1bc640 - 0x1bc6c8
void FUN_001bc640_0x1bc640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc640_0x1bc640");
#endif

    switch (ctx->pc) {
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b8u: goto label_1bc6b8;
        default: break;
    }

    ctx->pc = 0x1bc640u;

    // 0x1bc640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc644: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1bc648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc650: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BC650u;
    SET_GPR_U32(ctx, 31, 0x1BC658u);
    ctx->pc = 0x1BC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC650u;
    // 0x1bc654: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BC650u, 0x1BC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC658u;
label_1bc658:
    // 0x1bc658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC658u;
    {
        const bool branch_taken_0x1bc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc658) {
            ctx->pc = 0x1BC680u;
            goto label_1bc680;
        }
    }
    ctx->pc = 0x1BC660u;
    // 0x1bc660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc668: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1bc668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bc66c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bc670: 0xc06dfc4  jal         func_1B7F10
    ctx->pc = 0x1BC670u;
    SET_GPR_U32(ctx, 31, 0x1BC678u);
    ctx->pc = 0x1BC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC670u;
    // 0x1bc674: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F10u, 0x1BC670u, 0x1BC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC678u;
label_1bc678:
    // 0x1bc678: 0xc060014  jal         func_180050
    ctx->pc = 0x1BC678u;
    SET_GPR_U32(ctx, 31, 0x1BC680u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1BC678u, 0x1BC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC680u;
label_1bc680:
    // 0x1bc680: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1BC680u;
    SET_GPR_U32(ctx, 31, 0x1BC688u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1BC680u, 0x1BC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC688u;
label_1bc688:
    // 0x1bc688: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC688u;
    {
        const bool branch_taken_0x1bc688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC688u;
        // 0x1bc68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc688) {
            ctx->pc = 0x1BC6B0u;
            goto label_1bc6b0;
        }
    }
    ctx->pc = 0x1BC690u;
    // 0x1bc690: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x1bc690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bc694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc698: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC698u;
    {
        const bool branch_taken_0x1bc698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc698) {
            ctx->pc = 0x1BC6ACu;
            goto label_1bc6ac;
        }
    }
    ctx->pc = 0x1BC6A0u;
    // 0x1bc6a0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bc6a4: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1BC6A4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ACu);
    ctx->pc = 0x1BC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6A4u;
    // 0x1bc6a8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1BC6A4u, 0x1BC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6ACu;
label_1bc6ac:
    // 0x1bc6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc6b0:
    // 0x1bc6b0: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BC6B0u;
    SET_GPR_U32(ctx, 31, 0x1BC6B8u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BC6B0u, 0x1BC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6B8u;
label_1bc6b8:
    // 0x1bc6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6C0u;
        // 0x1bc6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC6C8u;
}
