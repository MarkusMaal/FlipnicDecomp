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

// Function: FUN_0011f780
// Address: 0x11f780 - 0x11f854
void FUN_0011f780_0x11f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f780_0x11f780");
#endif

    switch (ctx->pc) {
        case 0x11f78cu: goto label_11f78c;
        case 0x11f798u: goto label_11f798;
        case 0x11f7f8u: goto label_11f7f8;
        default: break;
    }

    ctx->pc = 0x11f780u;

    // 0x11f780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11f788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f78c:
    // 0x11f78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f794: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x11f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_11f798:
    // 0x11f798: 0xa85821  addu        $t3, $a1, $t0
    ctx->pc = 0x11f798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11f79c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11f7a0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x11f7a4: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x11f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x11f7a8: 0x28e30400  slti        $v1, $a3, 0x400
    ctx->pc = 0x11f7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11f7ac: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x11f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x11f7b0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x11f7b4: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x11f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x11f7b8: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x11f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x11f7bc: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x11f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x11f7c0: 0xad600024  sw          $zero, 0x24($t3)
    ctx->pc = 0x11f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 0));
    // 0x11f7c4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11F7C4u;
    {
        const bool branch_taken_0x11f7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C4u;
        // 0x11f7c8: 0xad600028  sw          $zero, 0x28($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c4) {
            ctx->pc = 0x11F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11f7d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f7d4: 0xac60200c  sw          $zero, 0x200C($v1)
    ctx->pc = 0x11f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8204), GPR_U32(ctx, 0));
    // 0x11f7d8: 0x25291000  addiu       $t1, $t1, 0x1000
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4096));
    // 0x11f7dc: 0xac602014  sw          $zero, 0x2014($v1)
    ctx->pc = 0x11f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8212), GPR_U32(ctx, 0));
    // 0x11f7e0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x11f7e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f7e4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11F7E4u;
    {
        const bool branch_taken_0x11f7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E4u;
        // 0x11f7e8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7e4) {
            ctx->pc = 0x11F78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f78c;
        }
    }
    ctx->pc = 0x11F7ECu;
    // 0x11f7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11F7F0u;
    {
        const bool branch_taken_0x11f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F0u;
        // 0x11f7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f0) {
            ctx->pc = 0x11F830u;
            goto label_11f830;
        }
    }
    ctx->pc = 0x11F7F8u;
label_11f7f8:
    // 0x11f7f8: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f7fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f800: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f804: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x11f804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x11f808: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f80c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f810: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x11f810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x11f814: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f818: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f81c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x11f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x11f820: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f824: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f828: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11f828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11f82c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x11f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_11f830:
    // 0x11f830: 0x8c832020  lw          $v1, 0x2020($a0)
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8224)));
    // 0x11f834: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x11f834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f838: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11F838u;
    {
        const bool branch_taken_0x11f838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f838) {
            ctx->pc = 0x11F7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f7f8;
        }
    }
    ctx->pc = 0x11F840u;
    // 0x11f840: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x11f840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11f844: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x11f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f848: 0xac832028  sw          $v1, 0x2028($a0)
    ctx->pc = 0x11f848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8232), GPR_U32(ctx, 3));
    // 0x11f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F84Cu;
        // 0x11f850: 0xac802024  sw          $zero, 0x2024($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F854u;
}
