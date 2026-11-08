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

// Function: FUN_001b2e70
// Address: 0x1b2e70 - 0x1b2fbc
void FUN_001b2e70_0x1b2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2e70_0x1b2e70");
#endif

    switch (ctx->pc) {
        case 0x1b2e8cu: goto label_1b2e8c;
        case 0x1b2ea0u: goto label_1b2ea0;
        case 0x1b2eacu: goto label_1b2eac;
        case 0x1b2ec4u: goto label_1b2ec4;
        case 0x1b2ee4u: goto label_1b2ee4;
        case 0x1b2ef8u: goto label_1b2ef8;
        case 0x1b2f10u: goto label_1b2f10;
        case 0x1b2f34u: goto label_1b2f34;
        case 0x1b2fa8u: goto label_1b2fa8;
        default: break;
    }

    ctx->pc = 0x1b2e70u;

    // 0x1b2e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e80: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b2e84: 0xc062200  jal         func_188800
    ctx->pc = 0x1B2E84u;
    SET_GPR_U32(ctx, 31, 0x1B2E8Cu);
    ctx->pc = 0x1B2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E84u;
    // 0x1b2e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1B2E84u, 0x1B2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E8Cu;
label_1b2e8c:
    // 0x1b2e8c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2e90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b2e94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2e98: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1B2E98u;
    SET_GPR_U32(ctx, 31, 0x1B2EA0u);
    ctx->pc = 0x1B2E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E98u;
    // 0x1b2e9c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1B2E98u, 0x1B2EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EA0u;
label_1b2ea0:
    // 0x1b2ea0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2ea4: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1B2EA4u;
    SET_GPR_U32(ctx, 31, 0x1B2EACu);
    ctx->pc = 0x1B2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EA4u;
    // 0x1b2ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1B2EA4u, 0x1B2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EACu;
label_1b2eac:
    // 0x1b2eac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2eb4: 0x3c02c358  lui         $v0, 0xC358
    ctx->pc = 0x1b2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50008 << 16));
    // 0x1b2eb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2ebc: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B2EBCu;
    SET_GPR_U32(ctx, 31, 0x1B2EC4u);
    ctx->pc = 0x1B2EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EBCu;
    // 0x1b2ec0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B2EBCu, 0x1B2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EC4u;
label_1b2ec4:
    // 0x1b2ec4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2ec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2ecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2ed0: 0x0  nop
    ctx->pc = 0x1b2ed0u;
    // NOP
    // 0x1b2ed4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b2ed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2ed8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1b2ed8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2edc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B2EDCu;
    SET_GPR_U32(ctx, 31, 0x1B2EE4u);
    ctx->pc = 0x1B2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EDCu;
    // 0x1b2ee0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B2EDCu, 0x1B2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EE4u;
label_1b2ee4:
    // 0x1b2ee4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2eec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2ef0: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1B2EF0u;
    SET_GPR_U32(ctx, 31, 0x1B2EF8u);
    ctx->pc = 0x1B2EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2EF0u;
    // 0x1b2ef4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1B2EF0u, 0x1B2EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2EF8u;
label_1b2ef8:
    // 0x1b2ef8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2efc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b2efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b2f00: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b2f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b2f04: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1b2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b2f08: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2F08u;
    SET_GPR_U32(ctx, 31, 0x1B2F10u);
    ctx->pc = 0x1B2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F08u;
    // 0x1b2f0c: 0x24a50c98  addiu       $a1, $a1, 0xC98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2F08u, 0x1B2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F10u;
label_1b2f10:
    // 0x1b2f10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b2f14: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2F14u;
    {
        const bool branch_taken_0x1b2f14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2f14) {
            ctx->pc = 0x1B2FA8u;
            goto label_1b2fa8;
        }
    }
    ctx->pc = 0x1B2F1Cu;
    // 0x1b2f1c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1b2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1b2f20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2f24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b2f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2f28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2f2c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1B2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F34u);
    ctx->pc = 0x1B2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F2Cu;
    // 0x1b2f30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1B2F2Cu, 0x1B2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F34u;
label_1b2f34:
    // 0x1b2f34: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2f40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b2f44: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b2f48: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b2f4c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1b2f50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2f54: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1b2f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1b2f58: 0x24a50ca8  addiu       $a1, $a1, 0xCA8
    ctx->pc = 0x1b2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3240));
    // 0x1b2f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2f60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b2f68: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b2f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b2f6c: 0x0  nop
    ctx->pc = 0x1b2f6cu;
    // NOP
    // 0x1b2f70: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x1b2f70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b2f74: 0x0  nop
    ctx->pc = 0x1b2f74u;
    // NOP
    // 0x1b2f78: 0x0  nop
    ctx->pc = 0x1b2f78u;
    // NOP
    // 0x1b2f7c: 0x3812  mflo        $a3
    ctx->pc = 0x1b2f7cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1b2f80: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x1b2f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b2f84: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1b2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1b2f88: 0x0  nop
    ctx->pc = 0x1b2f88u;
    // NOP
    // 0x1b2f8c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b2f8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b2f90: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1b2f90u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b2f94: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1b2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b2f98: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1b2f9c: 0x3810  mfhi        $a3
    ctx->pc = 0x1b2f9cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1b2fa0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2FA0u;
    SET_GPR_U32(ctx, 31, 0x1B2FA8u);
    ctx->pc = 0x1B2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2FA0u;
    // 0x1b2fa4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2FA0u, 0x1B2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2FA8u;
label_1b2fa8:
    // 0x1b2fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FB4u;
        // 0x1b2fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2FBCu;
}
