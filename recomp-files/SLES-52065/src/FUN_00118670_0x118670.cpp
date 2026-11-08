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

// Function: FUN_00118670
// Address: 0x118670 - 0x11871c
void FUN_00118670_0x118670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118670_0x118670");
#endif

    switch (ctx->pc) {
        case 0x1186e4u: goto label_1186e4;
        case 0x1186ecu: goto label_1186ec;
        case 0x118704u: goto label_118704;
        default: break;
    }

    ctx->pc = 0x118670u;

    // 0x118670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11867c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118684: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x118684u;
    {
        const bool branch_taken_0x118684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118684u;
        // 0x118688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118684) {
            ctx->pc = 0x118704u;
            goto label_118704;
        }
    }
    ctx->pc = 0x11868Cu;
    // 0x11868c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118690: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x118690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118694: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118694u;
    {
        const bool branch_taken_0x118694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118694) {
            ctx->pc = 0x1186B4u;
            goto label_1186b4;
        }
    }
    ctx->pc = 0x11869Cu;
    // 0x11869c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11869Cu;
    {
        const bool branch_taken_0x11869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11869c) {
            ctx->pc = 0x1186ACu;
            goto label_1186ac;
        }
    }
    ctx->pc = 0x1186A4u;
    // 0x1186a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1186A4u;
    {
        const bool branch_taken_0x1186a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186A4u;
        // 0x1186a8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186a4) {
            ctx->pc = 0x1186B4u;
            goto label_1186b4;
        }
    }
    ctx->pc = 0x1186ACu;
label_1186ac:
    // 0x1186ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1186b0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1186b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1186b4:
    // 0x1186b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1186b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1186b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1186bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1186bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1186c0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1186c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1186c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1186c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1186c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1186cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1186CCu;
    {
        const bool branch_taken_0x1186cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186cc) {
            ctx->pc = 0x1186ECu;
            goto label_1186ec;
        }
    }
    ctx->pc = 0x1186D4u;
    // 0x1186d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1186D4u;
    {
        const bool branch_taken_0x1186d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186d4) {
            ctx->pc = 0x1186E4u;
            goto label_1186e4;
        }
    }
    ctx->pc = 0x1186DCu;
    // 0x1186dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186DCu;
    SET_GPR_U32(ctx, 31, 0x1186E4u);
    ctx->pc = 0x1186E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186DCu;
    // 0x1186e0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186DCu, 0x1186E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186E4u;
label_1186e4:
    // 0x1186e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186E4u;
    SET_GPR_U32(ctx, 31, 0x1186ECu);
    ctx->pc = 0x1186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186E4u;
    // 0x1186e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186E4u, 0x1186ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186ECu;
label_1186ec:
    // 0x1186ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1186f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1186f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1186f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1186F4u;
    {
        const bool branch_taken_0x1186f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1186F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186F4u;
        // 0x1186f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186f4) {
            ctx->pc = 0x118708u;
            goto label_118708;
        }
    }
    ctx->pc = 0x1186FCu;
    // 0x1186fc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186FCu;
    SET_GPR_U32(ctx, 31, 0x118704u);
    ctx->pc = 0x118700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186FCu;
    // 0x118700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186FCu, 0x118704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118704u;
label_118704:
    // 0x118704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118708:
    // 0x118708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11870c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11870cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118714: 0x3e00008  jr          $ra
    ctx->pc = 0x118714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118714u;
        // 0x118718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11871Cu;
}
