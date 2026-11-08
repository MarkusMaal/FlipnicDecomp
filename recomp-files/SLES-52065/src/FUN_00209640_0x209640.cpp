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

// Function: FUN_00209640
// Address: 0x209640 - 0x20971c
void FUN_00209640_0x209640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209640_0x209640");
#endif

    switch (ctx->pc) {
        case 0x209678u: goto label_209678;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e4u: goto label_2096e4;
        default: break;
    }

    ctx->pc = 0x209640u;

    // 0x209640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x209640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x209644: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209648: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x209648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x20964c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x20964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x209650: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x209650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x209654: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x209654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x209658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20965c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x20965cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x209660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209664: 0x2463de30  addiu       $v1, $v1, -0x21D0
    ctx->pc = 0x209664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958640));
    // 0x209668: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x20966c: 0x24c65c18  addiu       $a2, $a2, 0x5C18
    ctx->pc = 0x20966cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23576));
    // 0x209670: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x209674: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x209674u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_209678:
    // 0x209678: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x209678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20967c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20967Cu;
    {
        const bool branch_taken_0x20967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20967c) {
            ctx->pc = 0x209680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20967Cu;
            // 0x209680: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209684u;
    // 0x209684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209688: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x209688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x20968c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20968cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209690: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x209690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x209694: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x209694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x209698: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x209698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x20969c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x20969cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2096a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2096a4:
    // 0x2096a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2096a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2096a8: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2096A8u;
    {
        const bool branch_taken_0x2096a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096A8u;
        // 0x2096ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096a8) {
            ctx->pc = 0x209678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209678;
        }
    }
    ctx->pc = 0x2096B0u;
    // 0x2096b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2096b4: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x2096b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x2096b8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x2096b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x2096bc: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x2096bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x2096c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2096c0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2));
    // 0x2096c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2096c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096c8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2096cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x2096d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2096d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2096d4: 0xc082578  jal         func_2095E0
    ctx->pc = 0x2096D4u;
    SET_GPR_U32(ctx, 31, 0x2096DCu);
    ctx->pc = 0x2096D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096D4u;
    // 0x2096d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095E0u, 0x2096D4u, 0x2096DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096DCu;
label_2096dc:
    // 0x2096dc: 0xc0825c8  jal         func_209720
    ctx->pc = 0x2096DCu;
    SET_GPR_U32(ctx, 31, 0x2096E4u);
    ctx->pc = 0x2096E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096DCu;
    // 0x2096e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209720u, 0x2096DCu, 0x2096E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096E4u;
label_2096e4:
    // 0x2096e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2096e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2096e8: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2096E8u;
    {
        const bool branch_taken_0x2096e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2096ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096E8u;
        // 0x2096ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096e8) {
            ctx->pc = 0x209708u;
            goto label_209708;
        }
    }
    ctx->pc = 0x2096F0u;
    // 0x2096f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2096f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2096f4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x2096f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x2096f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2096f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x2096fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2096fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x209700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x209700u;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 2));
    // 0x209704: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x209704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209708:
    // 0x209708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20970c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x20970cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209710: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x209710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209714: 0x3e00008  jr          $ra
    ctx->pc = 0x209714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209714u;
        // 0x209718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20971Cu;
}
