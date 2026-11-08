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

// Function: FUN_0011f3c0
// Address: 0x11f3c0 - 0x11f478
void FUN_0011f3c0_0x11f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f3c0_0x11f3c0");
#endif

    switch (ctx->pc) {
        case 0x11f3e0u: goto label_11f3e0;
        case 0x11f404u: goto label_11f404;
        case 0x11f410u: goto label_11f410;
        default: break;
    }

    ctx->pc = 0x11f3c0u;

    // 0x11f3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f3cc: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f3d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F3D0u;
    {
        const bool branch_taken_0x11f3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D0u;
        // 0x11f3d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3d0) {
            ctx->pc = 0x11F3E0u;
            goto label_11f3e0;
        }
    }
    ctx->pc = 0x11F3D8u;
    // 0x11f3d8: 0xc04018c  jal         func_100630
    ctx->pc = 0x11F3D8u;
    SET_GPR_U32(ctx, 31, 0x11F3E0u);
    ctx->pc = 0x11F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3D8u;
    // 0x11f3dc: 0x2464fff0  addiu       $a0, $v1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x11F3D8u, 0x11F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3E0u;
label_11f3e0:
    // 0x11f3e0: 0xae002024  sw          $zero, 0x2024($s0)
    ctx->pc = 0x11f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8228), GPR_U32(ctx, 0));
    // 0x11f3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3e8: 0xae002028  sw          $zero, 0x2028($s0)
    ctx->pc = 0x11f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8232), GPR_U32(ctx, 0));
    // 0x11f3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11f3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f0: 0xae00201c  sw          $zero, 0x201C($s0)
    ctx->pc = 0x11f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8220), GPR_U32(ctx, 0));
    // 0x11f3f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11f3f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f8: 0xae002020  sw          $zero, 0x2020($s0)
    ctx->pc = 0x11f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8224), GPR_U32(ctx, 0));
    // 0x11f3fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11f400: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11f400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_11f404:
    // 0x11f404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f40c: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x11f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_11f410:
    // 0x11f410: 0x875021  addu        $t2, $a0, $a3
    ctx->pc = 0x11f410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x11f414: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x11f414u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x11f418: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x11f418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x11f41c: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x11f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x11f420: 0x28c30400  slti        $v1, $a2, 0x400
    ctx->pc = 0x11f420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11f424: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x11f424u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x11f428: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x11f428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x11f42c: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x11f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x11f430: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x11f430u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
    // 0x11f434: 0xad400020  sw          $zero, 0x20($t2)
    ctx->pc = 0x11f434u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
    // 0x11f438: 0xad400024  sw          $zero, 0x24($t2)
    ctx->pc = 0x11f438u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 0));
    // 0x11f43c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11F43Cu;
    {
        const bool branch_taken_0x11f43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F43Cu;
        // 0x11f440: 0xad400028  sw          $zero, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f43c) {
            ctx->pc = 0x11F410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f410;
        }
    }
    ctx->pc = 0x11F444u;
    // 0x11f444: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x11f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x11f448: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11f44c: 0xac60200c  sw          $zero, 0x200C($v1)
    ctx->pc = 0x11f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8204), GPR_U32(ctx, 0));
    // 0x11f450: 0x25081000  addiu       $t0, $t0, 0x1000
    ctx->pc = 0x11f450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4096));
    // 0x11f454: 0xac602014  sw          $zero, 0x2014($v1)
    ctx->pc = 0x11f454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8212), GPR_U32(ctx, 0));
    // 0x11f458: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x11f458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f45c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11F45Cu;
    {
        const bool branch_taken_0x11f45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F45Cu;
        // 0x11f460: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f45c) {
            ctx->pc = 0x11F404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f404;
        }
    }
    ctx->pc = 0x11F464u;
    // 0x11f464: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11f464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11f468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f470: 0x3e00008  jr          $ra
    ctx->pc = 0x11F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F470u;
        // 0x11f474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F478u;
}
