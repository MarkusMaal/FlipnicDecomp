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

// Function: caseD_9
// Address: 0x1ac580 - 0x1ac648
void caseD_9_0x1ac580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1ac580");
#endif

    switch (ctx->pc) {
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5ecu: goto label_1ac5ec;
        default: break;
    }

    ctx->pc = 0x1ac580u;

    // 0x1ac580: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1ac584: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1AC584u;
    SET_GPR_U32(ctx, 31, 0x1AC58Cu);
    ctx->pc = 0x1AC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC584u;
    // 0x1ac588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AC584u, 0x1AC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC58Cu;
label_1ac58c:
    // 0x1ac58c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac590: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1ac594: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ac598: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1ac59c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1AC59Cu;
    SET_GPR_U32(ctx, 31, 0x1AC5A4u);
    ctx->pc = 0x1AC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC59Cu;
    // 0x1ac5a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AC59Cu, 0x1AC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5A4u;
label_1ac5a4:
    // 0x1ac5a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ac5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ac5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac5ac: 0xc062858  jal         func_18A160
    ctx->pc = 0x1AC5ACu;
    SET_GPR_U32(ctx, 31, 0x1AC5B4u);
    ctx->pc = 0x1AC5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5ACu;
    // 0x1ac5b0: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AC5ACu, 0x1AC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5B4u;
label_1ac5b4:
    // 0x1ac5b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac5b8: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1ac5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac5c0: 0x0  nop
    ctx->pc = 0x1ac5c0u;
    // NOP
    // 0x1ac5c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac5c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ac5c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ac5c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1ac5cc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1AC5CCu;
    SET_GPR_U32(ctx, 31, 0x1AC5D4u);
    ctx->pc = 0x1AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5CCu;
    // 0x1ac5d0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AC5CCu, 0x1AC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5D4u;
label_1ac5d4:
    // 0x1ac5d4: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ac5d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ac5dc: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1ac5e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ac5e4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1AC5E4u;
    SET_GPR_U32(ctx, 31, 0x1AC5ECu);
    ctx->pc = 0x1AC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E4u;
    // 0x1ac5e8: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AC5E4u, 0x1AC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5ECu;
label_1ac5ec:
    // 0x1ac5ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac5f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ac5f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac5f8: 0x8e2306e0  lw          $v1, 0x6E0($s1)
    ctx->pc = 0x1ac5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
    // 0x1ac5fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ac608: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ac60c: 0x0  nop
    ctx->pc = 0x1ac60cu;
    // NOP
    // 0x1ac610: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ac610u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ac614: 0x0  nop
    ctx->pc = 0x1ac614u;
    // NOP
    // 0x1ac618: 0x0  nop
    ctx->pc = 0x1ac618u;
    // NOP
    // 0x1ac61c: 0x1012  mflo        $v0
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ac620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ac624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC624u;
    {
        const bool branch_taken_0x1ac624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC624u;
        // 0x1ac628: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac624) {
            ctx->pc = 0x1AC648u;
            return;
        }
    }
    ctx->pc = 0x1AC62Cu;
    // 0x1ac62c: 0x8e2306d0  lw          $v1, 0x6D0($s1)
    ctx->pc = 0x1ac62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
    // 0x1ac630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac634: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac638: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ac638u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ac63c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ac640: 0xa04400b0  sb          $a0, 0xB0($v0)
    ctx->pc = 0x1ac640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ac644: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->pc = 0x1ac648u;
}
