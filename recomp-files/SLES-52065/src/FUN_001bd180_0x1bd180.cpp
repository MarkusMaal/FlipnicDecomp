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

// Function: FUN_001bd180
// Address: 0x1bd180 - 0x1bd240
void FUN_001bd180_0x1bd180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd180_0x1bd180");
#endif

    switch (ctx->pc) {
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a8u: goto label_1bd1a8;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1d0u: goto label_1bd1d0;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd220u: goto label_1bd220;
        default: break;
    }

    ctx->pc = 0x1bd180u;

    // 0x1bd180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bd188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd194: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1BD194u;
    SET_GPR_U32(ctx, 31, 0x1BD19Cu);
    ctx->pc = 0x1BD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD194u;
    // 0x1bd198: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1BD194u, 0x1BD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD19Cu;
label_1bd19c:
    // 0x1bd19c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BD1A0u;
    {
        const bool branch_taken_0x1bd1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1A0u;
        // 0x1bd1a4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1a0) {
            ctx->pc = 0x1BD218u;
            goto label_1bd218;
        }
    }
    ctx->pc = 0x1BD1A8u;
label_1bd1a8:
    // 0x1bd1a8: 0x8c710010  lw          $s1, 0x10($v1)
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd1ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd1b0: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x1bd1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1bd1b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD1B4u;
    {
        const bool branch_taken_0x1bd1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1B4u;
        // 0x1bd1b8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b4) {
            ctx->pc = 0x1BD20Cu;
            goto label_1bd20c;
        }
    }
    ctx->pc = 0x1BD1BCu;
    // 0x1bd1bc: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1BD1BCu;
    SET_GPR_U32(ctx, 31, 0x1BD1C4u);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1BD1BCu, 0x1BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd1c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD1C8u;
    {
        const bool branch_taken_0x1bd1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1C8u;
        // 0x1bd1cc: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1c8) {
            ctx->pc = 0x1BD1F8u;
            goto label_1bd1f8;
        }
    }
    ctx->pc = 0x1BD1D0u;
label_1bd1d0:
    // 0x1bd1d0: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd1d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bd1d8: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x1bd1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1bd1dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD1DCu;
    {
        const bool branch_taken_0x1bd1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1dc) {
            ctx->pc = 0x1BD1ECu;
            goto label_1bd1ec;
        }
    }
    ctx->pc = 0x1BD1E4u;
    // 0x1bd1e4: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1BD1E4u;
    SET_GPR_U32(ctx, 31, 0x1BD1ECu);
    ctx->pc = 0x1BD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1E4u;
    // 0x1bd1e8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1BD1E4u, 0x1BD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1ECu;
label_1bd1ec:
    // 0x1bd1ec: 0x0  nop
    ctx->pc = 0x1bd1ecu;
    // NOP
    // 0x1bd1f0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD1F0u;
    SET_GPR_U32(ctx, 31, 0x1BD1F8u);
    ctx->pc = 0x1BD1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F0u;
    // 0x1bd1f4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD1F0u, 0x1BD1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1F8u;
label_1bd1f8:
    // 0x1bd1f8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1BD1F8u;
    SET_GPR_U32(ctx, 31, 0x1BD200u);
    ctx->pc = 0x1BD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F8u;
    // 0x1bd1fc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1BD1F8u, 0x1BD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD200u;
label_1bd200:
    // 0x1bd200: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd204: 0x1462fff2  bne         $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BD204u;
    {
        const bool branch_taken_0x1bd204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd204) {
            ctx->pc = 0x1BD1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd1d0;
        }
    }
    ctx->pc = 0x1BD20Cu;
label_1bd20c:
    // 0x1bd20c: 0x0  nop
    ctx->pc = 0x1bd20cu;
    // NOP
    // 0x1bd210: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1BD210u;
    SET_GPR_U32(ctx, 31, 0x1BD218u);
    ctx->pc = 0x1BD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD210u;
    // 0x1bd214: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BD210u, 0x1BD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD218u;
label_1bd218:
    // 0x1bd218: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1BD218u;
    SET_GPR_U32(ctx, 31, 0x1BD220u);
    ctx->pc = 0x1BD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD218u;
    // 0x1bd21c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1BD218u, 0x1BD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD220u;
label_1bd220:
    // 0x1bd220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd224: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BD224u;
    {
        const bool branch_taken_0x1bd224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd224) {
            ctx->pc = 0x1BD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd1a8;
        }
    }
    ctx->pc = 0x1BD22Cu;
    // 0x1bd22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bd22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd238: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD238u;
        // 0x1bd23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD240u;
}
