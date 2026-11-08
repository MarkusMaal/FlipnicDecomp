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

// Function: entry_0019b604
// Address: 0x19b604 - 0x19b698
void entry_0019b604_0x19b604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b604_0x19b604");
#endif

    switch (ctx->pc) {
        case 0x19b668u: goto label_19b668;
        case 0x19b684u: goto label_19b684;
        case 0x19b690u: goto label_19b690;
        default: break;
    }

    ctx->pc = 0x19b604u;

label_19b604:
    // 0x19b604: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b608:
    // 0x19b608: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b60c:
    // 0x19b60c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b610:
    // 0x19b610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b614:
    // 0x19b614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b618:
    // 0x19b618: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b61c:
    // 0x19b61c: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b620:
    // 0x19b620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b624:
    // 0x19b624: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b628:
    // 0x19b628: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b62c:
    // 0x19b62c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b630:
    // 0x19b630: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b634:
    // 0x19b634: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b638:
    // 0x19b638: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b63c:
    // 0x19b63c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b640:
    // 0x19b640: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b644:
    // 0x19b644: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b648:
    // 0x19b648: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b64c:
    // 0x19b64c: 0x0  nop
    ctx->pc = 0x19b64cu;
    // NOP
label_19b650:
    // 0x19b650: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b650u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b654:
    // 0x19b654: 0x0  nop
    ctx->pc = 0x19b654u;
    // NOP
label_19b658:
    // 0x19b658: 0x0  nop
    ctx->pc = 0x19b658u;
    // NOP
label_19b65c:
    // 0x19b65c: 0x3012  mflo        $a2
    ctx->pc = 0x19b65cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b660:
    // 0x19b660: 0xc04bf38  jal         func_12FCE0
label_19b664:
    if (ctx->pc == 0x19B664u) {
        ctx->pc = 0x19B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B660u;
        // 0x19b664: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B668u;
        goto label_19b668;
    }
    ctx->pc = 0x19B660u;
    SET_GPR_U32(ctx, 31, 0x19B668u);
    ctx->pc = 0x19B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B660u;
    // 0x19b664: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B660u, 0x19B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b66c:
    // 0x19b66c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b670:
    // 0x19b670: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b674:
    // 0x19b674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b678:
    // 0x19b678: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b67c:
    // 0x19b67c: 0x320f809  jalr        $t9
label_19b680:
    if (ctx->pc == 0x19B680u) {
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B67Cu;
        // 0x19b680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B684u;
        goto label_19b684;
    }
    ctx->pc = 0x19B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B684u);
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B67Cu;
        // 0x19b680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B67Cu, 0x19B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B684u;
label_19b684:
    // 0x19b684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b688:
    // 0x19b688: 0xc063e08  jal         func_18F820
label_19b68c:
    if (ctx->pc == 0x19B68Cu) {
        ctx->pc = 0x19B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B688u;
        // 0x19b68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B690u;
        goto label_19b690;
    }
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x19B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B688u;
    // 0x19b68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B688u, 0x19B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B690u;
label_19b690:
    // 0x19b690: 0x10000017  b           . + 4 + (0x17 << 2)
label_19b694:
    if (ctx->pc == 0x19B694u) {
        ctx->pc = 0x19B698u;
        goto label_fallthrough_0x19b690;
    }
    ctx->pc = 0x19B690u;
    {
        const bool branch_taken_0x19b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b690) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
label_fallthrough_0x19b690:
    ctx->pc = 0x19B698u;
}
