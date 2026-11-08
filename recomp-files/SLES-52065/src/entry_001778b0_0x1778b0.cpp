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

// Function: entry_001778b0
// Address: 0x1778b0 - 0x177940
void entry_001778b0_0x1778b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001778b0_0x1778b0");
#endif

    switch (ctx->pc) {
        case 0x1778c8u: goto label_1778c8;
        case 0x1778d0u: goto label_1778d0;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778f0u: goto label_1778f0;
        case 0x1778f8u: goto label_1778f8;
        case 0x177900u: goto label_177900;
        case 0x177908u: goto label_177908;
        case 0x177920u: goto label_177920;
        default: break;
    }

    ctx->pc = 0x1778b0u;

    // 0x1778b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1778b4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1778b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1778b8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1778B8u;
    {
        const bool branch_taken_0x1778b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1778b8) {
            ctx->pc = 0x177870u;
            return;
        }
    }
    ctx->pc = 0x1778C0u;
    // 0x1778c0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1778C0u;
    SET_GPR_U32(ctx, 31, 0x1778C8u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1778C0u, 0x1778C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778C8u;
label_1778c8:
    // 0x1778c8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1778C8u;
    SET_GPR_U32(ctx, 31, 0x1778D0u);
    ctx->pc = 0x1778CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778C8u;
    // 0x1778cc: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1778C8u, 0x1778D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778D0u;
label_1778d0:
    // 0x1778d0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1778D0u;
    SET_GPR_U32(ctx, 31, 0x1778D8u);
    ctx->pc = 0x1778D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778D0u;
    // 0x1778d4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1778D0u, 0x1778D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778D8u;
label_1778d8:
    // 0x1778d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1778d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1778dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1778e0: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1778e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1778e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1778e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778e8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1778E8u;
    SET_GPR_U32(ctx, 31, 0x1778F0u);
    ctx->pc = 0x1778ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778E8u;
    // 0x1778ec: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1778E8u, 0x1778F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778F0u;
label_1778f0:
    // 0x1778f0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1778F0u;
    SET_GPR_U32(ctx, 31, 0x1778F8u);
    ctx->pc = 0x1778F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778F0u;
    // 0x1778f4: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1778F0u, 0x1778F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778F8u;
label_1778f8:
    // 0x1778f8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1778F8u;
    SET_GPR_U32(ctx, 31, 0x177900u);
    ctx->pc = 0x1778FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778F8u;
    // 0x1778fc: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1778F8u, 0x177900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177900u;
label_177900:
    // 0x177900: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177900u;
    SET_GPR_U32(ctx, 31, 0x177908u);
    ctx->pc = 0x177904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177900u;
    // 0x177904: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177900u, 0x177908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177908u;
label_177908:
    // 0x177908: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x177908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x17790c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17790cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177910: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x177910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x177914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177918: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x177918u;
    SET_GPR_U32(ctx, 31, 0x177920u);
    ctx->pc = 0x17791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177918u;
    // 0x17791c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x177918u, 0x177920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177920u;
label_177920:
    // 0x177920: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x177920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x177924: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177928: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17792c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17792cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177938: 0x3e00008  jr          $ra
    ctx->pc = 0x177938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177938u;
        // 0x17793c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177940u;
}
