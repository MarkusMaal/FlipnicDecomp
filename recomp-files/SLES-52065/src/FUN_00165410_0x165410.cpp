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

// Function: FUN_00165410
// Address: 0x165410 - 0x1654a4
void FUN_00165410_0x165410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165410_0x165410");
#endif

    switch (ctx->pc) {
        case 0x165450u: goto label_165450;
        case 0x165458u: goto label_165458;
        case 0x165460u: goto label_165460;
        case 0x16548cu: goto label_16548c;
        default: break;
    }

    ctx->pc = 0x165410u;

    // 0x165410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165424: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x165424u;
    {
        const bool branch_taken_0x165424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165424) {
            ctx->pc = 0x16548Cu;
            goto label_16548c;
        }
    }
    ctx->pc = 0x16542Cu;
    // 0x16542c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x165430: 0x24429b30  addiu       $v0, $v0, -0x64D0
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x165434: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x165434u;
    {
        const bool branch_taken_0x165434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165434u;
        // 0x165438: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165434) {
            ctx->pc = 0x165474u;
            goto label_165474;
        }
    }
    ctx->pc = 0x16543Cu;
    // 0x16543c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x165440: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x165444: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x165444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x165448: 0xc04018c  jal         func_100630
    ctx->pc = 0x165448u;
    SET_GPR_U32(ctx, 31, 0x165450u);
    ctx->pc = 0x16544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165448u;
    // 0x16544c: 0x8e24021c  lw          $a0, 0x21C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x165448u, 0x165450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165450u;
label_165450:
    // 0x165450: 0xc04018c  jal         func_100630
    ctx->pc = 0x165450u;
    SET_GPR_U32(ctx, 31, 0x165458u);
    ctx->pc = 0x165454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165450u;
    // 0x165454: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x165450u, 0x165458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165458u;
label_165458:
    // 0x165458: 0xc04018c  jal         func_100630
    ctx->pc = 0x165458u;
    SET_GPR_U32(ctx, 31, 0x165460u);
    ctx->pc = 0x16545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165458u;
    // 0x16545c: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x165458u, 0x165460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165460u;
label_165460:
    // 0x165460: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165460u;
        // 0x165464: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165460) {
            ctx->pc = 0x165478u;
            goto label_165478;
        }
    }
    ctx->pc = 0x165468u;
    // 0x165468: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x165468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16546c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x165470: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x165470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_165474:
    // 0x165474: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x165474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_165478:
    // 0x165478: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16547c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16547Cu;
    {
        const bool branch_taken_0x16547c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16547Cu;
        // 0x165480: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16547c) {
            ctx->pc = 0x165490u;
            goto label_165490;
        }
    }
    ctx->pc = 0x165484u;
    // 0x165484: 0xc0401a4  jal         func_100690
    ctx->pc = 0x165484u;
    SET_GPR_U32(ctx, 31, 0x16548Cu);
    ctx->pc = 0x165488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165484u;
    // 0x165488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x165484u, 0x16548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16548Cu;
label_16548c:
    // 0x16548c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16548cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165490:
    // 0x165490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16549c: 0x3e00008  jr          $ra
    ctx->pc = 0x16549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16549Cu;
        // 0x1654a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16549Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1654A4u;
}
