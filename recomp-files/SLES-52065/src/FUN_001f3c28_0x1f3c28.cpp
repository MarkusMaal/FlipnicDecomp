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

// Function: FUN_001f3c28
// Address: 0x1f3c28 - 0x1f3cec
void FUN_001f3c28_0x1f3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3c28_0x1f3c28");
#endif

    switch (ctx->pc) {
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cccu: goto label_1f3ccc;
        default: break;
    }

    ctx->pc = 0x1f3c28u;

    // 0x1f3c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3c2c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f3c30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f3c34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f3c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f3c38: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3c40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f3c44: 0x2450a808  addiu       $s0, $v0, -0x57F8
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944776));
    // 0x1f3c48: 0x8c44a808  lw          $a0, -0x57F8($v0)
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21A808u));
    // 0x1f3c4c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1f3c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1f3c50: 0xc07cf06  jal         func_1F3C18
    ctx->pc = 0x1F3C50u;
    SET_GPR_U32(ctx, 31, 0x1F3C58u);
    ctx->pc = 0x1F3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C50u;
    // 0x1f3c54: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C18u, 0x1F3C50u, 0x1F3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C58u;
label_1f3c58:
    // 0x1f3c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f3c5c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1f3c60: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x1f3c64: 0x24a5a488  addiu       $a1, $a1, -0x5B78
    ctx->pc = 0x1f3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943880));
    // 0x1f3c68: 0xc07cef0  jal         func_1F3BC0
    ctx->pc = 0x1F3C68u;
    SET_GPR_U32(ctx, 31, 0x1F3C70u);
    ctx->pc = 0x1F3C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C68u;
    // 0x1f3c6c: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3BC0u, 0x1F3C68u, 0x1F3C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C70u;
label_1f3c70:
    // 0x1f3c70: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F3C70u;
    SET_GPR_U32(ctx, 31, 0x1F3C78u);
    ctx->pc = 0x1F3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C70u;
    // 0x1f3c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F3C70u, 0x1F3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C78u;
label_1f3c78:
    // 0x1f3c78: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F3C78u;
    SET_GPR_U32(ctx, 31, 0x1F3C80u);
    ctx->pc = 0x1F3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C78u;
    // 0x1f3c7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F3C78u, 0x1F3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C80u;
label_1f3c80:
    // 0x1f3c80: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3c84: 0xc07cf06  jal         func_1F3C18
    ctx->pc = 0x1F3C84u;
    SET_GPR_U32(ctx, 31, 0x1F3C8Cu);
    ctx->pc = 0x1F3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C84u;
    // 0x1f3c88: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C18u, 0x1F3C84u, 0x1F3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C8Cu;
label_1f3c8c:
    // 0x1f3c8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1f3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f3c90: 0xc07cf06  jal         func_1F3C18
    ctx->pc = 0x1F3C90u;
    SET_GPR_U32(ctx, 31, 0x1F3C98u);
    ctx->pc = 0x1F3C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C90u;
    // 0x1f3c94: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C18u, 0x1F3C90u, 0x1F3C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C98u;
label_1f3c98:
    // 0x1f3c98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3c9c: 0x0  nop
    ctx->pc = 0x1f3c9cu;
    // NOP
label_1f3ca0:
    // 0x1f3ca0: 0xc07cf02  jal         func_1F3C08
    ctx->pc = 0x1F3CA0u;
    SET_GPR_U32(ctx, 31, 0x1F3CA8u);
    ctx->pc = 0x1F3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CA0u;
    // 0x1f3ca4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C08u, 0x1F3CA0u, 0x1F3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CA8u;
label_1f3ca8:
    // 0x1f3ca8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3cb0: 0xc07cf06  jal         func_1F3C18
    ctx->pc = 0x1F3CB0u;
    SET_GPR_U32(ctx, 31, 0x1F3CB8u);
    ctx->pc = 0x1F3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CB0u;
    // 0x1f3cb4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C18u, 0x1F3CB0u, 0x1F3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CB8u;
label_1f3cb8:
    // 0x1f3cb8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1f3cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f3cbc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F3CBCu;
    {
        const bool branch_taken_0x1f3cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3cbc) {
            ctx->pc = 0x1F3CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3CBCu;
            // 0x1f3cc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3ca0;
        }
    }
    ctx->pc = 0x1F3CC4u;
    // 0x1f3cc4: 0xc07cf02  jal         func_1F3C08
    ctx->pc = 0x1F3CC4u;
    SET_GPR_U32(ctx, 31, 0x1F3CCCu);
    ctx->pc = 0x1F3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3CC4u;
    // 0x1f3cc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3C08u, 0x1F3CC4u, 0x1F3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CCCu;
label_1f3ccc:
    // 0x1f3ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f3cd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3cd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f3cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3cd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f3cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3ce0: 0xac62a800  sw          $v0, -0x5800($v1)
    ctx->pc = 0x1f3ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21A800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A800u, _value); } while (0);
    // 0x1f3ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CE4u;
        // 0x1f3ce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3CECu;
}
