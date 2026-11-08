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

// Function: FUN_00178e00
// Address: 0x178e00 - 0x178f50
void FUN_00178e00_0x178e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178e00_0x178e00");
#endif

    switch (ctx->pc) {
        case 0x178e28u: goto label_178e28;
        case 0x178e40u: goto label_178e40;
        case 0x178e48u: goto label_178e48;
        case 0x178e50u: goto label_178e50;
        case 0x178e68u: goto label_178e68;
        case 0x178e8cu: goto label_178e8c;
        case 0x178e94u: goto label_178e94;
        case 0x178ec0u: goto label_178ec0;
        case 0x178eecu: goto label_178eec;
        default: break;
    }

    ctx->pc = 0x178e00u;

    // 0x178e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e18: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x178e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x178e1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x178E20u;
    {
        const bool branch_taken_0x178e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E20u;
        // 0x178e24: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e20) {
            ctx->pc = 0x178E70u;
            goto label_178e70;
        }
    }
    ctx->pc = 0x178E28u;
label_178e28:
    // 0x178e28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x178e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178e2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178e30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178e34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178e38: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E38u;
    SET_GPR_U32(ctx, 31, 0x178E40u);
    ctx->pc = 0x178E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E38u;
    // 0x178e3c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E38u, 0x178E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E40u;
label_178e40:
    // 0x178e40: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E40u;
    SET_GPR_U32(ctx, 31, 0x178E48u);
    ctx->pc = 0x178E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E40u;
    // 0x178e44: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E40u, 0x178E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E48u;
label_178e48:
    // 0x178e48: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E48u;
    SET_GPR_U32(ctx, 31, 0x178E50u);
    ctx->pc = 0x178E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E48u;
    // 0x178e4c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E48u, 0x178E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E50u;
label_178e50:
    // 0x178e50: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x178e54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178e58: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x178e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x178e5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e60: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178E60u;
    SET_GPR_U32(ctx, 31, 0x178E68u);
    ctx->pc = 0x178E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E60u;
    // 0x178e64: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178E60u, 0x178E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E68u;
label_178e68:
    // 0x178e68: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x178e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x178e6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178e70:
    // 0x178e70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178e74: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x178e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178e78: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178E78u;
    {
        const bool branch_taken_0x178e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178e78) {
            ctx->pc = 0x178E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e28;
        }
    }
    ctx->pc = 0x178E80u;
    // 0x178e80: 0xae200c20  sw          $zero, 0xC20($s1)
    ctx->pc = 0x178e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3104), GPR_U32(ctx, 0));
    // 0x178e84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x178E84u;
    {
        const bool branch_taken_0x178e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E84u;
        // 0x178e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e84) {
            ctx->pc = 0x178F28u;
            goto label_178f28;
        }
    }
    ctx->pc = 0x178E8Cu;
label_178e8c:
    // 0x178e8c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E8Cu;
    SET_GPR_U32(ctx, 31, 0x178E94u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E8Cu, 0x178E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E94u;
label_178e94:
    // 0x178e94: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x178e98: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x178e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x178e9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ea0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178ea4: 0x0  nop
    ctx->pc = 0x178ea4u;
    // NOP
    // 0x178ea8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178eac: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178eb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178eb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178eb8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178EB8u;
    SET_GPR_U32(ctx, 31, 0x178EC0u);
    ctx->pc = 0x178EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EB8u;
    // 0x178ebc: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178EB8u, 0x178EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EC0u;
label_178ec0:
    // 0x178ec0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x178ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x178ec4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x178ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x178ec8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ecc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178ed0: 0x0  nop
    ctx->pc = 0x178ed0u;
    // NOP
    // 0x178ed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178ed8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178edc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178ee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178ee4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178EE4u;
    SET_GPR_U32(ctx, 31, 0x178EECu);
    ctx->pc = 0x178EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EE4u;
    // 0x178ee8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178EE4u, 0x178EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EECu;
label_178eec:
    // 0x178eec: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x178ef0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x178ef4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x178ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ef8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x178ef8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178efc: 0x0  nop
    ctx->pc = 0x178efcu;
    // NOP
    // 0x178f00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178f04: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178f08: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x178f0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x178f10: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x178f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x178f14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178f18: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x178f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x178f1c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x178f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x178f20: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x178f20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178f24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178f28:
    // 0x178f28: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x178f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178f2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x178f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178f30: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x178F30u;
    {
        const bool branch_taken_0x178f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178f30) {
            ctx->pc = 0x178E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e8c;
        }
    }
    ctx->pc = 0x178F38u;
    // 0x178f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f48: 0x3e00008  jr          $ra
    ctx->pc = 0x178F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F48u;
        // 0x178f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F50u;
}
