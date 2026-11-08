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

// Function: entry_0019b53c
// Address: 0x19b53c - 0x19b5c0
void entry_0019b53c_0x19b53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b53c_0x19b53c");
#endif

    switch (ctx->pc) {
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5bcu: goto label_19b5bc;
        default: break;
    }

    ctx->pc = 0x19b53cu;

label_19b53c:
    // 0x19b53c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b540:
    // 0x19b540: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b544:
    // 0x19b544: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b548:
    // 0x19b548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b54c:
    // 0x19b54c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b550:
    // 0x19b550: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b554:
    // 0x19b554: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b558:
    // 0x19b558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b55c:
    // 0x19b55c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b560:
    // 0x19b560: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b564:
    // 0x19b564: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b568:
    // 0x19b568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b56c:
    // 0x19b56c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b570:
    // 0x19b570: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b574:
    // 0x19b574: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b578:
    // 0x19b578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b57c:
    // 0x19b57c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b580:
    // 0x19b580: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b584:
    // 0x19b584: 0x0  nop
    ctx->pc = 0x19b584u;
    // NOP
label_19b588:
    // 0x19b588: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b588u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b58c:
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
label_19b590:
    // 0x19b590: 0x0  nop
    ctx->pc = 0x19b590u;
    // NOP
label_19b594:
    // 0x19b594: 0x3012  mflo        $a2
    ctx->pc = 0x19b594u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b598:
    // 0x19b598: 0xc04bf38  jal         func_12FCE0
label_19b59c:
    if (ctx->pc == 0x19B59Cu) {
        ctx->pc = 0x19B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B598u;
        // 0x19b59c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5A0u;
        goto label_19b5a0;
    }
    ctx->pc = 0x19B598u;
    SET_GPR_U32(ctx, 31, 0x19B5A0u);
    ctx->pc = 0x19B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B598u;
    // 0x19b59c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B598u, 0x19B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5A0u;
label_19b5a0:
    // 0x19b5a0: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5a4:
    // 0x19b5a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b5a8:
    // 0x19b5a8: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b5ac:
    // 0x19b5ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5b0:
    // 0x19b5b0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b5b4:
    // 0x19b5b4: 0x320f809  jalr        $t9
label_19b5b8:
    if (ctx->pc == 0x19B5B8u) {
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5BCu;
        goto label_19b5bc;
    }
    ctx->pc = 0x19B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B5BCu);
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5B4u, 0x19B5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5BCu;
label_19b5bc:
    // 0x19b5bc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    ctx->pc = 0x19b5c0u;
}
