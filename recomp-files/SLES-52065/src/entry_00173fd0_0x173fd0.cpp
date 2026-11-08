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

// Function: entry_00173fd0
// Address: 0x173fd0 - 0x174088
void entry_00173fd0_0x173fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173fd0_0x173fd0");
#endif

    switch (ctx->pc) {
        case 0x173fe8u: goto label_173fe8;
        case 0x173ff0u: goto label_173ff0;
        case 0x173ff8u: goto label_173ff8;
        case 0x174010u: goto label_174010;
        case 0x174018u: goto label_174018;
        case 0x174020u: goto label_174020;
        case 0x174028u: goto label_174028;
        case 0x174040u: goto label_174040;
        default: break;
    }

    ctx->pc = 0x173fd0u;

    // 0x173fd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x173fd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x173fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173fd8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x173FD8u;
    {
        const bool branch_taken_0x173fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173fd8) {
            ctx->pc = 0x173F90u;
            return;
        }
    }
    ctx->pc = 0x173FE0u;
    // 0x173fe0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173FE0u;
    SET_GPR_U32(ctx, 31, 0x173FE8u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173FE0u, 0x173FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FE8u;
label_173fe8:
    // 0x173fe8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173FE8u;
    SET_GPR_U32(ctx, 31, 0x173FF0u);
    ctx->pc = 0x173FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FE8u;
    // 0x173fec: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173FE8u, 0x173FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FF0u;
label_173ff0:
    // 0x173ff0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173FF0u;
    SET_GPR_U32(ctx, 31, 0x173FF8u);
    ctx->pc = 0x173FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF0u;
    // 0x173ff4: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173FF0u, 0x173FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FF8u;
label_173ff8:
    // 0x173ff8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x173ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x173ffc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174000: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x174000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x174004: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x174004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174008: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x174008u;
    SET_GPR_U32(ctx, 31, 0x174010u);
    ctx->pc = 0x17400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174008u;
    // 0x17400c: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x174008u, 0x174010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174010u;
label_174010:
    // 0x174010: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174010u;
    SET_GPR_U32(ctx, 31, 0x174018u);
    ctx->pc = 0x174014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174010u;
    // 0x174014: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174010u, 0x174018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174018u;
label_174018:
    // 0x174018: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174018u;
    SET_GPR_U32(ctx, 31, 0x174020u);
    ctx->pc = 0x17401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174018u;
    // 0x17401c: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174018u, 0x174020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174020u;
label_174020:
    // 0x174020: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174020u;
    SET_GPR_U32(ctx, 31, 0x174028u);
    ctx->pc = 0x174024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174020u;
    // 0x174024: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174020u, 0x174028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174028u;
label_174028:
    // 0x174028: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x17402c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174030: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x174030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x174034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x174034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174038: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x174038u;
    SET_GPR_U32(ctx, 31, 0x174040u);
    ctx->pc = 0x17403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174038u;
    // 0x17403c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x174038u, 0x174040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174040u;
label_174040:
    // 0x174040: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x174040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x174044: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x174048: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x174048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17404c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17404cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174050: 0x0  nop
    ctx->pc = 0x174050u;
    // NOP
    // 0x174054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x174058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17405c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17405cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174060: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x174060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x174064: 0x0  nop
    ctx->pc = 0x174064u;
    // NOP
    // 0x174068: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x174068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x17406c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17406cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17407c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17407cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174080: 0x3e00008  jr          $ra
    ctx->pc = 0x174080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174080u;
        // 0x174084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174088u;
}
