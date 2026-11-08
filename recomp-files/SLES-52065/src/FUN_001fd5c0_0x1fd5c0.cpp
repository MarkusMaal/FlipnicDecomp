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

// Function: FUN_001fd5c0
// Address: 0x1fd5c0 - 0x1fd6a0
void FUN_001fd5c0_0x1fd5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd5c0_0x1fd5c0");
#endif

    switch (ctx->pc) {
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5f0u: goto label_1fd5f0;
        case 0x1fd5f4u: goto label_1fd5f4;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd634u: goto label_1fd634;
        default: break;
    }

    ctx->pc = 0x1fd5c0u;

    // 0x1fd5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd5c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fd5c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd5cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd5d4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1fd5d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD5D8u;
    {
        const bool branch_taken_0x1fd5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5D8u;
        // 0x1fd5dc: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5d8) {
            ctx->pc = 0x1FD5F8u;
            goto label_1fd5f8;
        }
    }
    ctx->pc = 0x1FD5E0u;
    // 0x1fd5e0: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x1FD5E0u;
    SET_GPR_U32(ctx, 31, 0x1FD5E8u);
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FD5E0u, 0x1FD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5E8u;
label_1fd5e8:
    // 0x1fd5e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD5E8u;
    {
        const bool branch_taken_0x1fd5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5E8u;
        // 0x1fd5ec: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5e8) {
            ctx->pc = 0x1FD5FCu;
            goto label_1fd5fc;
        }
    }
    ctx->pc = 0x1FD5F0u;
label_1fd5f0:
    // 0x1fd5f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5f4:
    // 0x1fd5f4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1fd5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5f8:
    // 0x1fd5f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fd5fc:
    // 0x1fd5fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd600: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD600u;
    {
        const bool branch_taken_0x1fd600 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD600u;
        // 0x1fd604: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd600) {
            ctx->pc = 0x1FD61Cu;
            goto label_1fd61c;
        }
    }
    ctx->pc = 0x1FD608u;
label_1fd608:
    // 0x1fd608: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x1fd608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd60c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD60Cu;
    {
        const bool branch_taken_0x1fd60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD60Cu;
        // 0x1fd610: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd60c) {
            ctx->pc = 0x1FD64Cu;
            goto label_1fd64c;
        }
    }
    ctx->pc = 0x1FD614u;
    // 0x1fd614: 0x461fffc  bgez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd608;
        }
    }
    ctx->pc = 0x1FD61Cu;
label_1fd61c:
    // 0x1fd61c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd620: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FD620u;
    {
        const bool branch_taken_0x1fd620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD620u;
        // 0x1fd624: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd620) {
            ctx->pc = 0x1FD5F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd5f4;
        }
    }
    ctx->pc = 0x1FD628u;
    // 0x1fd628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd62c: 0xc07f554  jal         func_1FD550
    ctx->pc = 0x1FD62Cu;
    SET_GPR_U32(ctx, 31, 0x1FD634u);
    ctx->pc = 0x1FD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD62Cu;
    // 0x1fd630: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD550u, 0x1FD62Cu, 0x1FD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD634u;
label_1fd634:
    // 0x1fd634: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FD634u;
    {
        const bool branch_taken_0x1fd634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD634u;
        // 0x1fd638: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd634) {
            ctx->pc = 0x1FD5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd5f0;
        }
    }
    ctx->pc = 0x1FD63Cu;
    // 0x1fd63c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1fd63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fd640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd644: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD644u;
    {
        const bool branch_taken_0x1fd644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD644u;
        // 0x1fd648: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd644) {
            ctx->pc = 0x1FD68Cu;
            goto label_1fd68c;
        }
    }
    ctx->pc = 0x1FD64Cu;
label_1fd64c:
    // 0x1fd64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd654: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1fd654u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fd658: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1fd658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fd65c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd660: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x1fd660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x1fd664: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd668: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1fd668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fd66c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fd670: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fd670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1fd674: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1fd674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fd678: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fd678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fd67c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1fd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1fd680: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1fd680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1fd684: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1fd684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1fd688: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1fd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_1fd68c:
    // 0x1fd68c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd698: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD698u;
        // 0x1fd69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD6A0u;
}
