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

// Function: FUN_00125400
// Address: 0x125400 - 0x125500
void FUN_00125400_0x125400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125400_0x125400");
#endif

    switch (ctx->pc) {
        case 0x12542cu: goto label_12542c;
        case 0x12543cu: goto label_12543c;
        case 0x125454u: goto label_125454;
        case 0x12545cu: goto label_12545c;
        case 0x12546cu: goto label_12546c;
        case 0x125484u: goto label_125484;
        case 0x125490u: goto label_125490;
        case 0x125498u: goto label_125498;
        case 0x1254bcu: goto label_1254bc;
        case 0x1254dcu: goto label_1254dc;
        default: break;
    }

    ctx->pc = 0x125400u;

    // 0x125400: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x125400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x125404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x125408: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x125408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12540c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x125410: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125418: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x125418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125424: 0xc080748  jal         func_201D20
    ctx->pc = 0x125424u;
    SET_GPR_U32(ctx, 31, 0x12542Cu);
    ctx->pc = 0x125428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125424u;
    // 0x125428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x125424u, 0x12542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12542Cu;
label_12542c:
    // 0x12542c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12542cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125430: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125434: 0xc080702  jal         func_201C08
    ctx->pc = 0x125434u;
    SET_GPR_U32(ctx, 31, 0x12543Cu);
    ctx->pc = 0x125438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125434u;
    // 0x125438: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x125434u, 0x12543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12543Cu;
label_12543c:
    // 0x12543c: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x12543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x125440: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x125440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x125444: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x125444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x125448: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x125448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x12544c: 0xc080702  jal         func_201C08
    ctx->pc = 0x12544Cu;
    SET_GPR_U32(ctx, 31, 0x125454u);
    ctx->pc = 0x125450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12544Cu;
    // 0x125450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12544Cu, 0x125454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125454u;
label_125454:
    // 0x125454: 0xc080d98  jal         func_203660
    ctx->pc = 0x125454u;
    SET_GPR_U32(ctx, 31, 0x12545Cu);
    ctx->pc = 0x125458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125454u;
    // 0x125458: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x125454u, 0x12545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12545Cu;
label_12545c:
    // 0x12545c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12545cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x125460: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x125460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x125464: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x125464u;
    SET_GPR_U32(ctx, 31, 0x12546Cu);
    ctx->pc = 0x125468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125464u;
    // 0x125468: 0x24a5eaf8  addiu       $a1, $a1, -0x1508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x125464u, 0x12546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12546Cu;
label_12546c:
    // 0x12546c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12546Cu;
    {
        const bool branch_taken_0x12546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12546Cu;
        // 0x125470: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12546c) {
            ctx->pc = 0x125488u;
            goto label_125488;
        }
    }
    ctx->pc = 0x125474u;
    // 0x125474: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x125478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12547c: 0xc080702  jal         func_201C08
    ctx->pc = 0x12547Cu;
    SET_GPR_U32(ctx, 31, 0x125484u);
    ctx->pc = 0x125480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12547Cu;
    // 0x125480: 0x24a5eb00  addiu       $a1, $a1, -0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12547Cu, 0x125484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125484u;
label_125484:
    // 0x125484: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x125484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_125488:
    // 0x125488: 0xc080702  jal         func_201C08
    ctx->pc = 0x125488u;
    SET_GPR_U32(ctx, 31, 0x125490u);
    ctx->pc = 0x12548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125488u;
    // 0x12548c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x125488u, 0x125490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125490u;
label_125490:
    // 0x125490: 0xc047a50  jal         func_11E940
    ctx->pc = 0x125490u;
    SET_GPR_U32(ctx, 31, 0x125498u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x125490u, 0x125498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125498u;
label_125498:
    // 0x125498: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x125498u;
    {
        const bool branch_taken_0x125498 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125498u;
        // 0x12549c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125498) {
            ctx->pc = 0x1254C4u;
            goto label_1254c4;
        }
    }
    ctx->pc = 0x1254A0u;
    // 0x1254a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1254a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1254a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1254a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1254ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1254acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b4: 0xc047580  jal         func_11D600
    ctx->pc = 0x1254B4u;
    SET_GPR_U32(ctx, 31, 0x1254BCu);
    ctx->pc = 0x1254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254B4u;
    // 0x1254b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D600u, 0x1254B4u, 0x1254BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254BCu;
label_1254bc:
    // 0x1254bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1254BCu;
    {
        const bool branch_taken_0x1254bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254BCu;
        // 0x1254c0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254bc) {
            ctx->pc = 0x1254E0u;
            goto label_1254e0;
        }
    }
    ctx->pc = 0x1254C4u;
label_1254c4:
    // 0x1254c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1254c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1254c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1254cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1254d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d4: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x1254D4u;
    SET_GPR_U32(ctx, 31, 0x1254DCu);
    ctx->pc = 0x1254D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254D4u;
    // 0x1254d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x1254D4u, 0x1254DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254DCu;
label_1254dc:
    // 0x1254dc: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1254dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1254e0:
    // 0x1254e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1254e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1254e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1254e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1254e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1254ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1254ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1254f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1254f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1254f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1254f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1254F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1254FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254F8u;
        // 0x1254fc: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1254F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125500u;
}
