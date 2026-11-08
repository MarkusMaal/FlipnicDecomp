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

// Function: FUN_00174c10
// Address: 0x174c10 - 0x174ccc
void FUN_00174c10_0x174c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174c10_0x174c10");
#endif

    switch (ctx->pc) {
        case 0x174c40u: goto label_174c40;
        case 0x174c4cu: goto label_174c4c;
        case 0x174c54u: goto label_174c54;
        case 0x174c5cu: goto label_174c5c;
        case 0x174c74u: goto label_174c74;
        case 0x174c98u: goto label_174c98;
        default: break;
    }

    ctx->pc = 0x174c10u;

    // 0x174c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174c14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174c24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c30: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x174c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x174c34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x174C38u;
    {
        const bool branch_taken_0x174c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C38u;
        // 0x174c3c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c38) {
            ctx->pc = 0x174C80u;
            goto label_174c80;
        }
    }
    ctx->pc = 0x174C40u;
label_174c40:
    // 0x174c40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174c44: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C44u;
    SET_GPR_U32(ctx, 31, 0x174C4Cu);
    ctx->pc = 0x174C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C44u;
    // 0x174c48: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C44u, 0x174C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C4Cu;
label_174c4c:
    // 0x174c4c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C4Cu;
    SET_GPR_U32(ctx, 31, 0x174C54u);
    ctx->pc = 0x174C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C4Cu;
    // 0x174c50: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C4Cu, 0x174C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C54u;
label_174c54:
    // 0x174c54: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C54u;
    SET_GPR_U32(ctx, 31, 0x174C5Cu);
    ctx->pc = 0x174C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C54u;
    // 0x174c58: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C54u, 0x174C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C5Cu;
label_174c5c:
    // 0x174c5c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x174c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174c64: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x174c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x174c68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x174c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c6c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x174C6Cu;
    SET_GPR_U32(ctx, 31, 0x174C74u);
    ctx->pc = 0x174C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C6Cu;
    // 0x174c70: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x174C6Cu, 0x174C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C74u;
label_174c74:
    // 0x174c74: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x174c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x174c78: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x174c7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174c80:
    // 0x174c80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174c84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174c88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x174C88u;
    {
        const bool branch_taken_0x174c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C88u;
        // 0x174c8c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c88) {
            ctx->pc = 0x174C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174c40;
        }
    }
    ctx->pc = 0x174C90u;
    // 0x174c90: 0xc05c700  jal         func_171C00
    ctx->pc = 0x174C90u;
    SET_GPR_U32(ctx, 31, 0x174C98u);
    ctx->pc = 0x171C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C00u, 0x174C90u, 0x174C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C98u;
label_174c98:
    // 0x174c98: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x174c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x174c9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174ca0: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x174ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x174ca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x174ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x174ca8: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x174ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x174cac: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x174cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x174cb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x174CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC4u;
        // 0x174cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CCCu;
}
