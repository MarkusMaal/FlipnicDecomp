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

// Function: FUN_001e1780
// Address: 0x1e1780 - 0x1e1808
void FUN_001e1780_0x1e1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1780_0x1e1780");
#endif

    switch (ctx->pc) {
        case 0x1e17b8u: goto label_1e17b8;
        case 0x1e17d4u: goto label_1e17d4;
        case 0x1e17e4u: goto label_1e17e4;
        case 0x1e17ecu: goto label_1e17ec;
        default: break;
    }

    ctx->pc = 0x1e1780u;

    // 0x1e1780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1788: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e178c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1790: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e1790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e1794: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e1794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e1798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e179c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e179cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e17a0: 0xafdd0044  sw          $sp, 0x44($fp)
    ctx->pc = 0x1e17a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    // 0x1e17a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e17a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E17A8u;
    {
        const bool branch_taken_0x1e17a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17A8u;
        // 0x1e17ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17a8) {
            ctx->pc = 0x1E17F0u;
            goto label_1e17f0;
        }
    }
    ctx->pc = 0x1E17B0u;
    // 0x1e17b0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E17B0u;
    SET_GPR_U32(ctx, 31, 0x1E17B8u);
    ctx->pc = 0x1E17B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17B0u;
    // 0x1e17b4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E17B0u, 0x1E17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17B8u;
label_1e17b8:
    // 0x1e17b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E17B8u;
    {
        const bool branch_taken_0x1e17b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17B8u;
        // 0x1e17bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17b8) {
            ctx->pc = 0x1E17C4u;
            goto label_1e17c4;
        }
    }
    ctx->pc = 0x1E17C0u;
    // 0x1e17c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e17c4:
    // 0x1e17c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E17C4u;
    {
        const bool branch_taken_0x1e17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17C4u;
        // 0x1e17c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17c4) {
            ctx->pc = 0x1E17ECu;
            goto label_1e17ec;
        }
    }
    ctx->pc = 0x1E17CCu;
    // 0x1e17cc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E17CCu;
    SET_GPR_U32(ctx, 31, 0x1E17D4u);
    ctx->pc = 0x1E17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17CCu;
    // 0x1e17d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E17CCu, 0x1E17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17D4u;
label_1e17d4:
    // 0x1e17d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17dc: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E17DCu;
    SET_GPR_U32(ctx, 31, 0x1E17E4u);
    ctx->pc = 0x1E17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17DCu;
    // 0x1e17e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E17DCu, 0x1E17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17E4u;
label_1e17e4:
    // 0x1e17e4: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E17E4u;
    SET_GPR_U32(ctx, 31, 0x1E17ECu);
    ctx->pc = 0x1E17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17E4u;
    // 0x1e17e8: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E17E4u, 0x1E17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17ECu;
label_1e17ec:
    // 0x1e17ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e17ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e17f0:
    // 0x1e17f0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e17f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e17f8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e17f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e17fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1800: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1800u;
        // 0x1e1804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1808u;
}
