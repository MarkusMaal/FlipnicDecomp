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

// Function: FUN_001060b0
// Address: 0x1060b0 - 0x10615c
void FUN_001060b0_0x1060b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001060b0_0x1060b0");
#endif

    switch (ctx->pc) {
        case 0x1060ecu: goto label_1060ec;
        case 0x10612cu: goto label_10612c;
        case 0x106144u: goto label_106144;
        default: break;
    }

    ctx->pc = 0x1060b0u;

    // 0x1060b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1060b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1060b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1060b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1060b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1060b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1060bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1060bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1060c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1060c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1060C4u;
    {
        const bool branch_taken_0x1060c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060C4u;
        // 0x1060c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060c4) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x1060CCu;
    // 0x1060cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1060d0: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1060d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1060d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1060d8: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x1060d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x1060dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1060DCu;
    {
        const bool branch_taken_0x1060dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1060dc) {
            ctx->pc = 0x1060ECu;
            goto label_1060ec;
        }
    }
    ctx->pc = 0x1060E4u;
    // 0x1060e4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1060E4u;
    SET_GPR_U32(ctx, 31, 0x1060ECu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1060E4u, 0x1060ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060ECu;
label_1060ec:
    // 0x1060ec: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1060ECu;
    {
        const bool branch_taken_0x1060ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060ECu;
        // 0x1060f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060ec) {
            ctx->pc = 0x106130u;
            goto label_106130;
        }
    }
    ctx->pc = 0x1060F4u;
    // 0x1060f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1060f8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x1060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x1060fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1060FCu;
    {
        const bool branch_taken_0x1060fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060FCu;
        // 0x106100: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060fc) {
            ctx->pc = 0x10612Cu;
            goto label_10612c;
        }
    }
    ctx->pc = 0x106104u;
    // 0x106104: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106108: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10610c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10610Cu;
        // 0x106110: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10610c) {
            ctx->pc = 0x10612Cu;
            goto label_10612c;
        }
    }
    ctx->pc = 0x106114u;
    // 0x106114: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10611c: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x106124u;
    SET_GPR_U32(ctx, 31, 0x10612Cu);
    ctx->pc = 0x106128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106124u;
    // 0x106128: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x106124u, 0x10612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10612Cu;
label_10612c:
    // 0x10612c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x10612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_106130:
    // 0x106130: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106134: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106134u;
    {
        const bool branch_taken_0x106134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106134u;
        // 0x106138: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106134) {
            ctx->pc = 0x106148u;
            goto label_106148;
        }
    }
    ctx->pc = 0x10613Cu;
    // 0x10613c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10613Cu;
    SET_GPR_U32(ctx, 31, 0x106144u);
    ctx->pc = 0x106140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10613Cu;
    // 0x106140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10613Cu, 0x106144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106144u;
label_106144:
    // 0x106144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106148:
    // 0x106148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10614c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10614cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106154: 0x3e00008  jr          $ra
    ctx->pc = 0x106154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106154u;
        // 0x106158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10615Cu;
}
