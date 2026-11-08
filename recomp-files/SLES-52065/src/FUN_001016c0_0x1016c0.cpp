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

// Function: FUN_001016c0
// Address: 0x1016c0 - 0x101738
void FUN_001016c0_0x1016c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001016c0_0x1016c0");
#endif

    switch (ctx->pc) {
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e4u: goto label_1016e4;
        case 0x1016e8u: goto label_1016e8;
        case 0x1016ecu: goto label_1016ec;
        case 0x1016f0u: goto label_1016f0;
        case 0x1016f4u: goto label_1016f4;
        case 0x1016f8u: goto label_1016f8;
        case 0x1016fcu: goto label_1016fc;
        case 0x101700u: goto label_101700;
        case 0x101704u: goto label_101704;
        case 0x101708u: goto label_101708;
        case 0x10170cu: goto label_10170c;
        case 0x101710u: goto label_101710;
        case 0x101714u: goto label_101714;
        case 0x101718u: goto label_101718;
        case 0x10171cu: goto label_10171c;
        case 0x101720u: goto label_101720;
        case 0x101724u: goto label_101724;
        case 0x101728u: goto label_101728;
        case 0x10172cu: goto label_10172c;
        case 0x101730u: goto label_101730;
        case 0x101734u: goto label_101734;
        default: break;
    }

    ctx->pc = 0x1016c0u;

label_1016c0:
    // 0x1016c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1016c4:
    // 0x1016c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1016c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1016c8:
    // 0x1016c8: 0xc04043c  jal         func_1010F0
label_1016cc:
    if (ctx->pc == 0x1016CCu) {
        ctx->pc = 0x1016D0u;
        goto label_1016d0;
    }
    ctx->pc = 0x1016C8u;
    SET_GPR_U32(ctx, 31, 0x1016D0u);
    ctx->pc = 0x1010F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010F0u, 0x1016C8u, 0x1016D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D0u;
label_1016d0:
    // 0x1016d0: 0xc04d988  jal         func_136620
label_1016d4:
    if (ctx->pc == 0x1016D4u) {
        ctx->pc = 0x1016D8u;
        goto label_1016d8;
    }
    ctx->pc = 0x1016D0u;
    SET_GPR_U32(ctx, 31, 0x1016D8u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1016D0u, 0x1016D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D8u;
label_1016d8:
    // 0x1016d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1016d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1016dc:
    // 0x1016dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1016e0:
    // 0x1016e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1016e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1016e4:
    // 0x1016e4: 0x320f809  jalr        $t9
label_1016e8:
    if (ctx->pc == 0x1016E8u) {
        ctx->pc = 0x1016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016E4u;
        // 0x1016e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016ECu;
        goto label_1016ec;
    }
    ctx->pc = 0x1016E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1016ECu);
        ctx->pc = 0x1016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016E4u;
        // 0x1016e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016E4u, 0x1016ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1016ECu;
label_1016ec:
    // 0x1016ec: 0xc041f08  jal         func_107C20
label_1016f0:
    if (ctx->pc == 0x1016F0u) {
        ctx->pc = 0x1016F4u;
        goto label_1016f4;
    }
    ctx->pc = 0x1016ECu;
    SET_GPR_U32(ctx, 31, 0x1016F4u);
    ctx->pc = 0x107C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C20u, 0x1016ECu, 0x1016F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016F4u;
label_1016f4:
    // 0x1016f4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1016f8:
    // 0x1016f8: 0xc06c488  jal         func_1B1220
label_1016fc:
    if (ctx->pc == 0x1016FCu) {
        ctx->pc = 0x1016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016F8u;
        // 0x1016fc: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101700u;
        goto label_101700;
    }
    ctx->pc = 0x1016F8u;
    SET_GPR_U32(ctx, 31, 0x101700u);
    ctx->pc = 0x1016FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016F8u;
    // 0x1016fc: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1220u, 0x1016F8u, 0x101700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101700u;
label_101700:
    // 0x101700: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x101700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_101704:
    // 0x101704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101708:
    // 0x101708: 0xa06028f8  sb          $zero, 0x28F8($v1)
    ctx->pc = 0x101708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10488), (uint8_t)GPR_U32(ctx, 0));
label_10170c:
    // 0x10170c: 0xa06028f9  sb          $zero, 0x28F9($v1)
    ctx->pc = 0x10170cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10489), (uint8_t)GPR_U32(ctx, 0));
label_101710:
    // 0x101710: 0xa06028fa  sb          $zero, 0x28FA($v1)
    ctx->pc = 0x101710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10490), (uint8_t)GPR_U32(ctx, 0));
label_101714:
    // 0x101714: 0xa06028fb  sb          $zero, 0x28FB($v1)
    ctx->pc = 0x101714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10491), (uint8_t)GPR_U32(ctx, 0));
label_101718:
    // 0x101718: 0xa06028fc  sb          $zero, 0x28FC($v1)
    ctx->pc = 0x101718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10492), (uint8_t)GPR_U32(ctx, 0));
label_10171c:
    // 0x10171c: 0xa06028fd  sb          $zero, 0x28FD($v1)
    ctx->pc = 0x10171cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10493), (uint8_t)GPR_U32(ctx, 0));
label_101720:
    // 0x101720: 0xa06028fe  sb          $zero, 0x28FE($v1)
    ctx->pc = 0x101720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10494), (uint8_t)GPR_U32(ctx, 0));
label_101724:
    // 0x101724: 0xa06028ff  sb          $zero, 0x28FF($v1)
    ctx->pc = 0x101724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10495), (uint8_t)GPR_U32(ctx, 0));
label_101728:
    // 0x101728: 0xa0602900  sb          $zero, 0x2900($v1)
    ctx->pc = 0x101728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10496), (uint8_t)GPR_U32(ctx, 0));
label_10172c:
    // 0x10172c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101730:
    // 0x101730: 0x3e00008  jr          $ra
label_101734:
    if (ctx->pc == 0x101734u) {
        ctx->pc = 0x101734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101730u;
        // 0x101734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101738u;
        goto label_fallthrough_0x101730;
    }
    ctx->pc = 0x101730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101730u;
        // 0x101734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x101730:
    ctx->pc = 0x101738u;
}
