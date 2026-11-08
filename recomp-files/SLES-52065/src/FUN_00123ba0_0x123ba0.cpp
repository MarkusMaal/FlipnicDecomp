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

// Function: FUN_00123ba0
// Address: 0x123ba0 - 0x123c4c
void FUN_00123ba0_0x123ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123ba0_0x123ba0");
#endif

    switch (ctx->pc) {
        case 0x123bd8u: goto label_123bd8;
        case 0x123be8u: goto label_123be8;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c10u: goto label_123c10;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c34u: goto label_123c34;
        default: break;
    }

    ctx->pc = 0x123ba0u;

    // 0x123ba0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x123ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x123ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x123bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bb4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x123BB4u;
    {
        const bool branch_taken_0x123bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BB4u;
        // 0x123bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bb4) {
            ctx->pc = 0x123C34u;
            goto label_123c34;
        }
    }
    ctx->pc = 0x123BBCu;
    // 0x123bbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x123bc0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x123bc4: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x123bc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x123bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x123bcc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x123bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x123bd0: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x123BD0u;
    SET_GPR_U32(ctx, 31, 0x123BD8u);
    ctx->pc = 0x123BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BD0u;
    // 0x123bd4: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x123BD0u, 0x123BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BD8u;
label_123bd8:
    // 0x123bd8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x123bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x123bdc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x123be0: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x123BE0u;
    SET_GPR_U32(ctx, 31, 0x123BE8u);
    ctx->pc = 0x123BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BE0u;
    // 0x123be4: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x123BE0u, 0x123BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BE8u;
label_123be8:
    // 0x123be8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x123be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x123bec: 0xc080702  jal         func_201C08
    ctx->pc = 0x123BECu;
    SET_GPR_U32(ctx, 31, 0x123BF4u);
    ctx->pc = 0x123BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BECu;
    // 0x123bf0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x123BECu, 0x123BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BF4u;
label_123bf4:
    // 0x123bf4: 0xc080d98  jal         func_203660
    ctx->pc = 0x123BF4u;
    SET_GPR_U32(ctx, 31, 0x123BFCu);
    ctx->pc = 0x123BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BF4u;
    // 0x123bf8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x123BF4u, 0x123BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BFCu;
label_123bfc:
    // 0x123bfc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x123c00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123C00u;
    {
        const bool branch_taken_0x123c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C00u;
        // 0x123c04: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c00) {
            ctx->pc = 0x123C10u;
            goto label_123c10;
        }
    }
    ctx->pc = 0x123C08u;
    // 0x123c08: 0xc046c14  jal         func_11B050
    ctx->pc = 0x123C08u;
    SET_GPR_U32(ctx, 31, 0x123C10u);
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x123C08u, 0x123C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C10u;
label_123c10:
    // 0x123c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c14: 0xc04925c  jal         func_124970
    ctx->pc = 0x123C14u;
    SET_GPR_U32(ctx, 31, 0x123C1Cu);
    ctx->pc = 0x123C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C14u;
    // 0x123c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124970u, 0x123C14u, 0x123C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C1Cu;
label_123c1c:
    // 0x123c1c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x123c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x123c20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x123c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x123c24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123C24u;
    {
        const bool branch_taken_0x123c24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C24u;
        // 0x123c28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c24) {
            ctx->pc = 0x123C38u;
            goto label_123c38;
        }
    }
    ctx->pc = 0x123C2Cu;
    // 0x123c2c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x123C2Cu;
    SET_GPR_U32(ctx, 31, 0x123C34u);
    ctx->pc = 0x123C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C2Cu;
    // 0x123c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x123C2Cu, 0x123C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C34u;
label_123c34:
    // 0x123c34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x123c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123c38:
    // 0x123c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x123c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c44: 0x3e00008  jr          $ra
    ctx->pc = 0x123C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C44u;
        // 0x123c48: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123C4Cu;
}
