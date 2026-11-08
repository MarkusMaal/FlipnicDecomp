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

// Function: FUN_00177c80
// Address: 0x177c80 - 0x177d48
void FUN_00177c80_0x177c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177c80_0x177c80");
#endif

    switch (ctx->pc) {
        case 0x177cb0u: goto label_177cb0;
        case 0x177cbcu: goto label_177cbc;
        case 0x177cc4u: goto label_177cc4;
        case 0x177cccu: goto label_177ccc;
        case 0x177ce4u: goto label_177ce4;
        case 0x177d14u: goto label_177d14;
        case 0x177d2cu: goto label_177d2c;
        default: break;
    }

    ctx->pc = 0x177c80u;

    // 0x177c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177c84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177c88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177c94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x177c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ca0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x177ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x177ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ca8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x177CA8u;
    {
        const bool branch_taken_0x177ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CA8u;
        // 0x177cac: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ca8) {
            ctx->pc = 0x177CF0u;
            goto label_177cf0;
        }
    }
    ctx->pc = 0x177CB0u;
label_177cb0:
    // 0x177cb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177cb4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CB4u;
    SET_GPR_U32(ctx, 31, 0x177CBCu);
    ctx->pc = 0x177CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CB4u;
    // 0x177cb8: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CB4u, 0x177CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CBCu;
label_177cbc:
    // 0x177cbc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CBCu;
    SET_GPR_U32(ctx, 31, 0x177CC4u);
    ctx->pc = 0x177CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CBCu;
    // 0x177cc0: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CBCu, 0x177CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CC4u;
label_177cc4:
    // 0x177cc4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CC4u;
    SET_GPR_U32(ctx, 31, 0x177CCCu);
    ctx->pc = 0x177CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CC4u;
    // 0x177cc8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CC4u, 0x177CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CCCu;
label_177ccc:
    // 0x177ccc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x177cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177cd4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x177cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x177cd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cdc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x177CDCu;
    SET_GPR_U32(ctx, 31, 0x177CE4u);
    ctx->pc = 0x177CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CDCu;
    // 0x177ce0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x177CDCu, 0x177CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x177ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x177ce8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x177cec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x177cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_177cf0:
    // 0x177cf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177cf4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177cf8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x177CF8u;
    {
        const bool branch_taken_0x177cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CF8u;
        // 0x177cfc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cf8) {
            ctx->pc = 0x177CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177cb0;
        }
    }
    ctx->pc = 0x177D00u;
    // 0x177d00: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x177d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x177d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x177d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d0c: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x177D0Cu;
    SET_GPR_U32(ctx, 31, 0x177D14u);
    ctx->pc = 0x177D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D0Cu;
    // 0x177d10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x177D0Cu, 0x177D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D14u;
label_177d14:
    // 0x177d14: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x177d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x177d18: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x177d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x177d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x177d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177d24: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x177D24u;
    SET_GPR_U32(ctx, 31, 0x177D2Cu);
    ctx->pc = 0x177D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D24u;
    // 0x177d28: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x177D24u, 0x177D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D2Cu;
label_177d2c:
    // 0x177d2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177d30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d40: 0x3e00008  jr          $ra
    ctx->pc = 0x177D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D40u;
        // 0x177d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177D48u;
}
