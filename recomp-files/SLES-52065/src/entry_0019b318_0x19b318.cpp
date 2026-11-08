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

// Function: entry_0019b318
// Address: 0x19b318 - 0x19b3c8
void entry_0019b318_0x19b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b318_0x19b318");
#endif

    switch (ctx->pc) {
        case 0x19b37cu: goto label_19b37c;
        case 0x19b398u: goto label_19b398;
        case 0x19b3a4u: goto label_19b3a4;
        case 0x19b3c0u: goto label_19b3c0;
        default: break;
    }

    ctx->pc = 0x19b318u;

label_19b318:
    // 0x19b318: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b31c:
    // 0x19b31c: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b320:
    // 0x19b320: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b324:
    // 0x19b324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b328:
    // 0x19b328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b32c:
    // 0x19b32c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b330:
    // 0x19b330: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b334:
    // 0x19b334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b338:
    // 0x19b338: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b33c:
    // 0x19b33c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b340:
    // 0x19b340: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b344:
    // 0x19b344: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b348:
    // 0x19b348: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b34c:
    // 0x19b34c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b350:
    // 0x19b350: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b354:
    // 0x19b354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b358:
    // 0x19b358: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b35c:
    // 0x19b35c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b360:
    // 0x19b360: 0x0  nop
    ctx->pc = 0x19b360u;
    // NOP
label_19b364:
    // 0x19b364: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b364u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b368:
    // 0x19b368: 0x0  nop
    ctx->pc = 0x19b368u;
    // NOP
label_19b36c:
    // 0x19b36c: 0x0  nop
    ctx->pc = 0x19b36cu;
    // NOP
label_19b370:
    // 0x19b370: 0x3012  mflo        $a2
    ctx->pc = 0x19b370u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b374:
    // 0x19b374: 0xc04bf38  jal         func_12FCE0
label_19b378:
    if (ctx->pc == 0x19B378u) {
        ctx->pc = 0x19B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B374u;
        // 0x19b378: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B37Cu;
        goto label_19b37c;
    }
    ctx->pc = 0x19B374u;
    SET_GPR_U32(ctx, 31, 0x19B37Cu);
    ctx->pc = 0x19B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B374u;
    // 0x19b378: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B374u, 0x19B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B37Cu;
label_19b37c:
    // 0x19b37c: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b380:
    // 0x19b380: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b384:
    // 0x19b384: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b388:
    // 0x19b388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b38c:
    // 0x19b38c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b390:
    // 0x19b390: 0x320f809  jalr        $t9
label_19b394:
    if (ctx->pc == 0x19B394u) {
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B390u;
        // 0x19b394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B398u;
        goto label_19b398;
    }
    ctx->pc = 0x19B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B398u);
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B390u;
        // 0x19b394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B390u, 0x19B398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B398u;
label_19b398:
    // 0x19b398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b39c:
    // 0x19b39c: 0xc063e08  jal         func_18F820
label_19b3a0:
    if (ctx->pc == 0x19B3A0u) {
        ctx->pc = 0x19B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B39Cu;
        // 0x19b3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3A4u;
        goto label_19b3a4;
    }
    ctx->pc = 0x19B39Cu;
    SET_GPR_U32(ctx, 31, 0x19B3A4u);
    ctx->pc = 0x19B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B39Cu;
    // 0x19b3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B39Cu, 0x19B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3A4u;
label_19b3a4:
    // 0x19b3a4: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b3a8:
    // 0x19b3a8: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19b3ac:
    // 0x19b3ac: 0x18c000d0  blez        $a2, . + 4 + (0xD0 << 2)
label_19b3b0:
    if (ctx->pc == 0x19B3B0u) {
        ctx->pc = 0x19B3B4u;
        goto label_19b3b4;
    }
    ctx->pc = 0x19B3ACu;
    {
        const bool branch_taken_0x19b3ac = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x19b3ac) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b3b8:
    // 0x19b3b8: 0xc063de0  jal         func_18F780
label_19b3bc:
    if (ctx->pc == 0x19B3BCu) {
        ctx->pc = 0x19B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3B8u;
        // 0x19b3bc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3C0u;
        goto label_19b3c0;
    }
    ctx->pc = 0x19B3B8u;
    SET_GPR_U32(ctx, 31, 0x19B3C0u);
    ctx->pc = 0x19B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3B8u;
    // 0x19b3bc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19B3B8u, 0x19B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3C0u;
label_19b3c0:
    // 0x19b3c0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_19b3c4:
    if (ctx->pc == 0x19B3C4u) {
        ctx->pc = 0x19B3C8u;
        goto label_fallthrough_0x19b3c0;
    }
    ctx->pc = 0x19B3C0u;
    {
        const bool branch_taken_0x19b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3c0) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
label_fallthrough_0x19b3c0:
    ctx->pc = 0x19B3C8u;
}
