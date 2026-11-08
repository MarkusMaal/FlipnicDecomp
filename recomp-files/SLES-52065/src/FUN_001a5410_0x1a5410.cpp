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

// Function: FUN_001a5410
// Address: 0x1a5410 - 0x1a54d8
void FUN_001a5410_0x1a5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5410_0x1a5410");
#endif

    switch (ctx->pc) {
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54a8u: goto label_1a54a8;
        case 0x1a54c0u: goto label_1a54c0;
        default: break;
    }

    ctx->pc = 0x1a5410u;

    // 0x1a5410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5424: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A5424u;
    {
        const bool branch_taken_0x1a5424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5424u;
        // 0x1a5428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5424) {
            ctx->pc = 0x1A54C0u;
            goto label_1a54c0;
        }
    }
    ctx->pc = 0x1A542Cu;
    // 0x1a542c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a542cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a5430: 0x26220950  addiu       $v0, $s1, 0x950
    ctx->pc = 0x1a5430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
    // 0x1a5434: 0x2463b3f0  addiu       $v1, $v1, -0x4C10
    ctx->pc = 0x1a5434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947824));
    // 0x1a5438: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5438u;
    {
        const bool branch_taken_0x1a5438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5438u;
        // 0x1a543c: 0xae23031c  sw          $v1, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5438) {
            ctx->pc = 0x1A5478u;
            goto label_1a5478;
        }
    }
    ctx->pc = 0x1A5440u;
    // 0x1a5440: 0x26240970  addiu       $a0, $s1, 0x970
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
    // 0x1a5444: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A5444u;
    SET_GPR_U32(ctx, 31, 0x1A544Cu);
    ctx->pc = 0x1A5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5444u;
    // 0x1a5448: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A5444u, 0x1A544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A544Cu;
label_1a544c:
    // 0x1a544c: 0x26240950  addiu       $a0, $s1, 0x950
    ctx->pc = 0x1a544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
    // 0x1a5450: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5450u;
    {
        const bool branch_taken_0x1a5450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5450u;
        // 0x1a5454: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5450) {
            ctx->pc = 0x1A5478u;
            goto label_1a5478;
        }
    }
    ctx->pc = 0x1A5458u;
    // 0x1a5458: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1a545c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A545Cu;
    {
        const bool branch_taken_0x1a545c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A545Cu;
        // 0x1a5460: 0xae22095c  sw          $v0, 0x95C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a545c) {
            ctx->pc = 0x1A5478u;
            goto label_1a5478;
        }
    }
    ctx->pc = 0x1A5464u;
    // 0x1a5464: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a5468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a546c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1a546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1a5470: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1A5470u;
    SET_GPR_U32(ctx, 31, 0x1A5478u);
    ctx->pc = 0x1A5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5470u;
    // 0x1a5474: 0xae22095c  sw          $v0, 0x95C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1A5470u, 0x1A5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5478u;
label_1a5478:
    // 0x1a5478: 0x26240930  addiu       $a0, $s1, 0x930
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
    // 0x1a547c: 0xc0699c8  jal         func_1A6720
    ctx->pc = 0x1A547Cu;
    SET_GPR_U32(ctx, 31, 0x1A5484u);
    ctx->pc = 0x1A5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A547Cu;
    // 0x1a5480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6720u, 0x1A547Cu, 0x1A5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5484u;
label_1a5484:
    // 0x1a5484: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x1a5484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x1a5488: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A5488u;
    SET_GPR_U32(ctx, 31, 0x1A5490u);
    ctx->pc = 0x1A548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5488u;
    // 0x1a548c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A5488u, 0x1A5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5490u;
label_1a5490:
    // 0x1a5490: 0x262407f0  addiu       $a0, $s1, 0x7F0
    ctx->pc = 0x1a5490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2032));
    // 0x1a5494: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A5494u;
    SET_GPR_U32(ctx, 31, 0x1A549Cu);
    ctx->pc = 0x1A5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5494u;
    // 0x1a5498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A5494u, 0x1A549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A549Cu;
label_1a549c:
    // 0x1a549c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54a0: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A54A0u;
    SET_GPR_U32(ctx, 31, 0x1A54A8u);
    ctx->pc = 0x1A54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54A0u;
    // 0x1a54a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A54A0u, 0x1A54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54A8u;
label_1a54a8:
    // 0x1a54a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a54a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a54ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a54acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a54b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A54B0u;
    {
        const bool branch_taken_0x1a54b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B0u;
        // 0x1a54b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54b0) {
            ctx->pc = 0x1A54C4u;
            goto label_1a54c4;
        }
    }
    ctx->pc = 0x1A54B8u;
    // 0x1a54b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A54B8u;
    SET_GPR_U32(ctx, 31, 0x1A54C0u);
    ctx->pc = 0x1A54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54B8u;
    // 0x1a54bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A54B8u, 0x1A54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54C0u;
label_1a54c0:
    // 0x1a54c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a54c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a54c4:
    // 0x1a54c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a54c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a54c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a54c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a54cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a54ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a54d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D0u;
        // 0x1a54d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54D8u;
}
