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

// Function: caseD_b
// Address: 0x1ad980 - 0x1ada0c
void caseD_b_0x1ad980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1ad980");
#endif

    switch (ctx->pc) {
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ada04u: goto label_1ada04;
        default: break;
    }

    ctx->pc = 0x1ad980u;

    // 0x1ad980: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad984: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ad988: 0xa22006c1  sb          $zero, 0x6C1($s1)
    ctx->pc = 0x1ad988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad98c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad990: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x1ad994: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
    // 0x1ad998: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad99c: 0xae2006ec  sw          $zero, 0x6EC($s1)
    ctx->pc = 0x1ad99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 0));
    // 0x1ad9a0: 0xae2006e4  sw          $zero, 0x6E4($s1)
    ctx->pc = 0x1ad9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 0));
    // 0x1ad9a4: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
    // 0x1ad9a8: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ad9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
    // 0x1ad9ac: 0xa22006f4  sb          $zero, 0x6F4($s1)
    ctx->pc = 0x1ad9acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1780), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad9b0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ad9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1ad9b4: 0x8f86811c  lw          $a2, -0x7EE4($gp)
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x1ad9b8: 0xc06cf34  jal         func_1B3CD0
    ctx->pc = 0x1AD9B8u;
    SET_GPR_U32(ctx, 31, 0x1AD9C0u);
    ctx->pc = 0x1AD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9B8u;
    // 0x1ad9bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AD9B8u, 0x1AD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9C0u;
label_1ad9c0:
    // 0x1ad9c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9c4: 0xc069ac8  jal         func_1A6B20
    ctx->pc = 0x1AD9C4u;
    SET_GPR_U32(ctx, 31, 0x1AD9CCu);
    ctx->pc = 0x1AD9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9C4u;
    // 0x1ad9c8: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AD9C4u, 0x1AD9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9CCu;
label_1ad9cc:
    // 0x1ad9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad9d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad9d4: 0xa22306f5  sb          $v1, 0x6F5($s1)
    ctx->pc = 0x1ad9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1781), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad9d8: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
    // 0x1ad9dc: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ad9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
    // 0x1ad9e0: 0x8e330670  lw          $s3, 0x670($s1)
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ad9e4: 0x8e320690  lw          $s2, 0x690($s1)
    ctx->pc = 0x1ad9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1ad9e8: 0x16720008  bne         $s3, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD9E8u;
    {
        const bool branch_taken_0x1ad9e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9E8u;
        // 0x1ad9ec: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9e8) {
            ctx->pc = 0x1ADA0Cu;
            return;
        }
    }
    ctx->pc = 0x1AD9F0u;
    // 0x1ad9f0: 0xc062114  jal         func_188450
    ctx->pc = 0x1AD9F0u;
    SET_GPR_U32(ctx, 31, 0x1AD9F8u);
    ctx->pc = 0x1AD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9F0u;
    // 0x1ad9f4: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AD9F0u, 0x1AD9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9F8u;
label_1ad9f8:
    // 0x1ad9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9fc: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AD9FCu;
    SET_GPR_U32(ctx, 31, 0x1ADA04u);
    ctx->pc = 0x1ADA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9FCu;
    // 0x1ada00: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AD9FCu, 0x1ADA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA04u;
label_1ada04:
    // 0x1ada04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1ADA04u;
    {
        const bool branch_taken_0x1ada04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA04u;
        // 0x1ada08: 0x8e2406dc  lw          $a0, 0x6DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada04) {
            ctx->pc = 0x1ADA34u;
            return;
        }
    }
    ctx->pc = 0x1ADA0Cu;
}
