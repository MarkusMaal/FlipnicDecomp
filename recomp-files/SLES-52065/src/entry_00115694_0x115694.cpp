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

// Function: entry_00115694
// Address: 0x115694 - 0x115704
void entry_00115694_0x115694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115694_0x115694");
#endif

    switch (ctx->pc) {
        case 0x1156c0u: goto label_1156c0;
        case 0x1156d4u: goto label_1156d4;
        case 0x1156f4u: goto label_1156f4;
        default: break;
    }

    ctx->pc = 0x115694u;

label_115694:
    // 0x115694: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
label_115698:
    if (ctx->pc == 0x115698u) {
        ctx->pc = 0x11569Cu;
        goto label_11569c;
    }
    ctx->pc = 0x115694u;
    {
        const bool branch_taken_0x115694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115694) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11569Cu;
label_11569c:
    // 0x11569c: 0x938282ec  lbu         $v0, -0x7D14($gp)
    ctx->pc = 0x11569cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935276)));
label_1156a0:
    // 0x1156a0: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x1156a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1156a4:
    // 0x1156a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156a8:
    // 0x1156a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1156ac:
    // 0x1156ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1156acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1156b0:
    // 0x1156b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156b4:
    // 0x1156b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1156b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1156b8:
    // 0x1156b8: 0x320f809  jalr        $t9
label_1156bc:
    if (ctx->pc == 0x1156BCu) {
        ctx->pc = 0x1156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B8u;
        // 0x1156bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156C0u;
        goto label_1156c0;
    }
    ctx->pc = 0x1156B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156C0u);
        ctx->pc = 0x1156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B8u;
        // 0x1156bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156B8u, 0x1156C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156C0u;
label_1156c0:
    // 0x1156c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156c4:
    // 0x1156c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156c8:
    // 0x1156c8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1156c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1156cc:
    // 0x1156cc: 0x320f809  jalr        $t9
label_1156d0:
    if (ctx->pc == 0x1156D0u) {
        ctx->pc = 0x1156D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156CCu;
        // 0x1156d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156D4u;
        goto label_1156d4;
    }
    ctx->pc = 0x1156CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156D4u);
        ctx->pc = 0x1156D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156CCu;
        // 0x1156d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156CCu, 0x1156D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156D4u;
label_1156d4:
    // 0x1156d4: 0x938282f0  lbu         $v0, -0x7D10($gp)
    ctx->pc = 0x1156d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935280)));
label_1156d8:
    // 0x1156d8: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x1156d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_1156dc:
    // 0x1156dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156e0:
    // 0x1156e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1156e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1156e4:
    // 0x1156e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1156e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1156e8:
    // 0x1156e8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1156e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1156ec:
    // 0x1156ec: 0x320f809  jalr        $t9
label_1156f0:
    if (ctx->pc == 0x1156F0u) {
        ctx->pc = 0x1156F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156ECu;
        // 0x1156f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156F4u;
        goto label_1156f4;
    }
    ctx->pc = 0x1156ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1156F4u);
        ctx->pc = 0x1156F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156ECu;
        // 0x1156f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156ECu, 0x1156F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1156F4u;
label_1156f4:
    // 0x1156f4: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1156f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1156f8:
    // 0x1156f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1156fc:
    // 0x1156fc: 0x10000120  b           . + 4 + (0x120 << 2)
label_115700:
    if (ctx->pc == 0x115700u) {
        ctx->pc = 0x115700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156FCu;
        // 0x115700: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115704u;
        goto label_fallthrough_0x1156fc;
    }
    ctx->pc = 0x1156FCu;
    {
        const bool branch_taken_0x1156fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156FCu;
        // 0x115700: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156fc) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x1156fc:
    ctx->pc = 0x115704u;
}
