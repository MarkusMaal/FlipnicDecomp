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

// Function: entry_0019e128
// Address: 0x19e128 - 0x19e1d8
void entry_0019e128_0x19e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e128_0x19e128");
#endif

    switch (ctx->pc) {
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1bcu: goto label_19e1bc;
        default: break;
    }

    ctx->pc = 0x19e128u;

label_19e128:
    // 0x19e128: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e12c:
    // 0x19e12c: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
label_19e130:
    if (ctx->pc == 0x19E130u) {
        ctx->pc = 0x19E134u;
        goto label_19e134;
    }
    ctx->pc = 0x19E12Cu;
    {
        const bool branch_taken_0x19e12c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19e12c) {
            ctx->pc = 0x19E1D8u;
            return;
        }
    }
    ctx->pc = 0x19E134u;
label_19e134:
    // 0x19e134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e138:
    // 0x19e138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19e13c:
    // 0x19e13c: 0xaea30328  sw          $v1, 0x328($s5)
    ctx->pc = 0x19e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 3));
label_19e140:
    // 0x19e140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e144:
    // 0x19e144: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e148:
    // 0x19e148: 0x8ea30998  lw          $v1, 0x998($s5)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2456)));
label_19e14c:
    // 0x19e14c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19e150:
    // 0x19e150: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19e154:
    // 0x19e154: 0x8ea20328  lw          $v0, 0x328($s5)
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e158:
    // 0x19e158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19e15c:
    // 0x19e15c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x19e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19e160:
    // 0x19e160: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19e160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e164:
    // 0x19e164: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19e168:
    // 0x19e168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19e16c:
    // 0x19e16c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19e170:
    // 0x19e170: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19e174:
    // 0x19e174: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19e178:
    // 0x19e178: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19e178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19e17c:
    // 0x19e17c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19e180:
    // 0x19e180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19e180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19e184:
    // 0x19e184: 0x0  nop
    ctx->pc = 0x19e184u;
    // NOP
label_19e188:
    // 0x19e188: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19e188u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19e18c:
    // 0x19e18c: 0x0  nop
    ctx->pc = 0x19e18cu;
    // NOP
label_19e190:
    // 0x19e190: 0x0  nop
    ctx->pc = 0x19e190u;
    // NOP
label_19e194:
    // 0x19e194: 0x3012  mflo        $a2
    ctx->pc = 0x19e194u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19e198:
    // 0x19e198: 0xc04bf38  jal         func_12FCE0
label_19e19c:
    if (ctx->pc == 0x19E19Cu) {
        ctx->pc = 0x19E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E198u;
        // 0x19e19c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1A0u;
        goto label_19e1a0;
    }
    ctx->pc = 0x19E198u;
    SET_GPR_U32(ctx, 31, 0x19E1A0u);
    ctx->pc = 0x19E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E198u;
    // 0x19e19c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19E198u, 0x19E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1A0u;
label_19e1a0:
    // 0x19e1a0: 0x8ea4099c  lw          $a0, 0x99C($s5)
    ctx->pc = 0x19e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2460)));
label_19e1a4:
    // 0x19e1a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19e1a8:
    // 0x19e1a8: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19e1ac:
    // 0x19e1ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e1b0:
    // 0x19e1b0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19e1b4:
    // 0x19e1b4: 0x320f809  jalr        $t9
label_19e1b8:
    if (ctx->pc == 0x19E1B8u) {
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1BCu;
        goto label_19e1bc;
    }
    ctx->pc = 0x19E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E1BCu);
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1B4u, 0x19E1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E1BCu;
label_19e1bc:
    // 0x19e1bc: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_19e1c0:
    // 0x19e1c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_19e1c4:
    if (ctx->pc == 0x19E1C4u) {
        ctx->pc = 0x19E1C8u;
        goto label_19e1c8;
    }
    ctx->pc = 0x19E1C0u;
    {
        const bool branch_taken_0x19e1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e1c0) {
            ctx->pc = 0x19E1D8u;
            return;
        }
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e1cc:
    // 0x19e1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e1d0:
    // 0x19e1d0: 0xc0678e8  jal         func_19E3A0
label_19e1d4:
    if (ctx->pc == 0x19E1D4u) {
        ctx->pc = 0x19E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1D0u;
        // 0x19e1d4: 0xaea00320  sw          $zero, 0x320($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1D8u;
        goto label_fallthrough_0x19e1d0;
    }
    ctx->pc = 0x19E1D0u;
    SET_GPR_U32(ctx, 31, 0x19E1D8u);
    ctx->pc = 0x19E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1D0u;
    // 0x19e1d4: 0xaea00320  sw          $zero, 0x320($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19E1D0u, 0x19E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x19e1d0:
    ctx->pc = 0x19E1D8u;
}
