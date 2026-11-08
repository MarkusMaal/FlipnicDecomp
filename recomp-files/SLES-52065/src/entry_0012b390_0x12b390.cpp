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

// Function: entry_0012b390
// Address: 0x12b390 - 0x12b3ec
void entry_0012b390_0x12b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b390_0x12b390");
#endif

    switch (ctx->pc) {
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3dcu: goto label_12b3dc;
        default: break;
    }

    ctx->pc = 0x12b390u;

label_12b390:
    // 0x12b390: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12b390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_12b394:
    // 0x12b394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b398:
    // 0x12b398: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b39c:
    // 0x12b39c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b3a0:
    // 0x12b3a0: 0x320f809  jalr        $t9
label_12b3a4:
    if (ctx->pc == 0x12B3A4u) {
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3A8u;
        goto label_12b3a8;
    }
    ctx->pc = 0x12B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B3A8u);
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3A0u, 0x12B3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x12b3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b3ac:
    // 0x12b3ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12b3b0:
    // 0x12b3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b3b4:
    // 0x12b3b4: 0x24a5ec58  addiu       $a1, $a1, -0x13A8
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
label_12b3b8:
    // 0x12b3b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12b3bc:
    // 0x12b3bc: 0x320f809  jalr        $t9
label_12b3c0:
    if (ctx->pc == 0x12B3C0u) {
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3C4u;
        goto label_12b3c4;
    }
    ctx->pc = 0x12B3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B3C4u);
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3BCu, 0x12B3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B3C4u;
label_12b3c4:
    // 0x12b3c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b3c8:
    // 0x12b3c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b3cc:
    // 0x12b3cc: 0xc04c6f0  jal         func_131BC0
label_12b3d0:
    if (ctx->pc == 0x12B3D0u) {
        ctx->pc = 0x12B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3CCu;
        // 0x12b3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3D4u;
        goto label_12b3d4;
    }
    ctx->pc = 0x12B3CCu;
    SET_GPR_U32(ctx, 31, 0x12B3D4u);
    ctx->pc = 0x12B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3CCu;
    // 0x12b3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x12B3CCu, 0x12B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3D4u;
label_12b3d4:
    // 0x12b3d4: 0xc0401bc  jal         func_1006F0
label_12b3d8:
    if (ctx->pc == 0x12B3D8u) {
        ctx->pc = 0x12B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3D4u;
        // 0x12b3d8: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3DCu;
        goto label_12b3dc;
    }
    ctx->pc = 0x12B3D4u;
    SET_GPR_U32(ctx, 31, 0x12B3DCu);
    ctx->pc = 0x12B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3D4u;
    // 0x12b3d8: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12B3D4u, 0x12B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3DCu;
label_12b3dc:
    // 0x12b3dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b3e0:
    if (ctx->pc == 0x12B3E0u) {
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3DCu;
        // 0x12b3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3E4u;
        goto label_12b3e4;
    }
    ctx->pc = 0x12B3DCu;
    {
        const bool branch_taken_0x12b3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3DCu;
        // 0x12b3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3dc) {
            ctx->pc = 0x12B3ECu;
            return;
        }
    }
    ctx->pc = 0x12B3E4u;
label_12b3e4:
    // 0x12b3e4: 0xc04a93c  jal         func_12A4F0
label_12b3e8:
    if (ctx->pc == 0x12B3E8u) {
        ctx->pc = 0x12B3ECu;
        goto label_fallthrough_0x12b3e4;
    }
    ctx->pc = 0x12B3E4u;
    SET_GPR_U32(ctx, 31, 0x12B3ECu);
    ctx->pc = 0x12A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A4F0u, 0x12B3E4u, 0x12B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x12b3e4:
    ctx->pc = 0x12B3ECu;
}
