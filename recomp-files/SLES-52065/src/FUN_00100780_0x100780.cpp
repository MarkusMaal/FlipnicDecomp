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

// Function: FUN_00100780
// Address: 0x100780 - 0x1009ec
void FUN_00100780_0x100780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100780_0x100780");
#endif

    switch (ctx->pc) {
        case 0x100800u: goto label_100800;
        case 0x100830u: goto label_100830;
        case 0x100858u: goto label_100858;
        case 0x10089cu: goto label_10089c;
        case 0x1008a4u: goto label_1008a4;
        case 0x1008ccu: goto label_1008cc;
        case 0x100960u: goto label_100960;
        case 0x1009d0u: goto label_1009d0;
        default: break;
    }

    ctx->pc = 0x100780u;

    // 0x100780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x100780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x100784: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x100784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x100788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10078c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x100790: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x100790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x100794: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x100798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10079c: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x10079cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1007a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1007a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1007a4: 0x3c02c479  lui         $v0, 0xC479
    ctx->pc = 0x1007a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50297 << 16));
    // 0x1007a8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1007a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1007ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1007acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1007b0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1007b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1007b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1007b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1007b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1007bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1007c0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1007c4: 0xc4540254  lwc1        $f20, 0x254($v0)
    ctx->pc = 0x1007c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1007c8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1007c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1007cc: 0x0  nop
    ctx->pc = 0x1007ccu;
    // NOP
    // 0x1007d0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1007D0u;
    {
        const bool branch_taken_0x1007d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1007d0) {
            ctx->pc = 0x100808u;
            goto label_100808;
        }
    }
    ctx->pc = 0x1007D8u;
    // 0x1007d8: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1007dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1007dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1007e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1007e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1007e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1007ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1007ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1007f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1007f4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1007f8: 0xc04ce04  jal         func_133810
    ctx->pc = 0x1007F8u;
    SET_GPR_U32(ctx, 31, 0x100800u);
    ctx->pc = 0x1007FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007F8u;
    // 0x1007fc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x1007F8u, 0x100800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100800u;
label_100800:
    // 0x100800: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x100800u;
    {
        const bool branch_taken_0x100800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100800u;
        // 0x100804: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100800) {
            ctx->pc = 0x1009D4u;
            goto label_1009d4;
        }
    }
    ctx->pc = 0x100808u;
label_100808:
    // 0x100808: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x100808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x10080c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x100810: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100818: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10081c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100820: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100824: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x100824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x100828: 0xc04ce04  jal         func_133810
    ctx->pc = 0x100828u;
    SET_GPR_U32(ctx, 31, 0x100830u);
    ctx->pc = 0x10082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100828u;
    // 0x10082c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x100828u, 0x100830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100830u;
label_100830:
    // 0x100830: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x100834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100838: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10083c: 0x3c02c479  lui         $v0, 0xC479
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50297 << 16));
    // 0x100840: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100844: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x100848: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x100848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x10084c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10084cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100850: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100850u;
    {
        const bool branch_taken_0x100850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100850u;
        // 0x100854: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100850) {
            ctx->pc = 0x100884u;
            goto label_100884;
        }
    }
    ctx->pc = 0x100858u;
label_100858:
    // 0x100858: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10085c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10085cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x100860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100868: 0xc4410254  lwc1        $f1, 0x254($v0)
    ctx->pc = 0x100868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10086c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10086cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100870: 0x0  nop
    ctx->pc = 0x100870u;
    // NOP
    // 0x100874: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x100874u;
    {
        const bool branch_taken_0x100874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100874) {
            ctx->pc = 0x100880u;
            goto label_100880;
        }
    }
    ctx->pc = 0x10087Cu;
    // 0x10087c: 0xe4540254  swc1        $f20, 0x254($v0)
    ctx->pc = 0x10087cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 596), bits); }
label_100880:
    // 0x100880: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_100884:
    // 0x100884: 0x0  nop
    ctx->pc = 0x100884u;
    // NOP
    // 0x100888: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x100888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10088c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x10088Cu;
    {
        const bool branch_taken_0x10088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10088Cu;
        // 0x100890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10088c) {
            ctx->pc = 0x100858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100858;
        }
    }
    ctx->pc = 0x100894u;
    // 0x100894: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x100894u;
    {
        const bool branch_taken_0x100894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100894) {
            ctx->pc = 0x100938u;
            goto label_100938;
        }
    }
    ctx->pc = 0x10089Cu;
label_10089c:
    // 0x10089c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10089Cu;
    {
        const bool branch_taken_0x10089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10089Cu;
        // 0x1008a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10089c) {
            ctx->pc = 0x100924u;
            goto label_100924;
        }
    }
    ctx->pc = 0x1008A4u;
label_1008a4:
    // 0x1008a4: 0x0  nop
    ctx->pc = 0x1008a4u;
    // NOP
    // 0x1008a8: 0x8f848214  lw          $a0, -0x7DEC($gp)
    ctx->pc = 0x1008a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1008ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1008b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1008b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1008b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1008bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1008c0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1008c4: 0xc04cd10  jal         func_133440
    ctx->pc = 0x1008C4u;
    SET_GPR_U32(ctx, 31, 0x1008CCu);
    ctx->pc = 0x1008C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1008C4u;
    // 0x1008c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133440u, 0x1008C4u, 0x1008CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008CCu;
label_1008cc:
    // 0x1008cc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1008d0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1008d4: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1008d8: 0x2484f388  addiu       $a0, $a0, -0xC78
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964104));
    // 0x1008dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1008e0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1008e4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1008e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1008e8: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1008e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1008ec: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1008ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1008f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1008f4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1008f8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1008fc: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x100900: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x100900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x100904: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100908: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10090c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x100910: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x100914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100918: 0x78460250  lq          $a2, 0x250($v0)
    ctx->pc = 0x100918u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x10091c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x10091cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x100920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_100924:
    // 0x100924: 0x0  nop
    ctx->pc = 0x100924u;
    // NOP
    // 0x100928: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x100928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10092c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10092Cu;
    {
        const bool branch_taken_0x10092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10092c) {
            ctx->pc = 0x1008A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1008a4;
        }
    }
    ctx->pc = 0x100934u;
    // 0x100934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_100938:
    // 0x100938: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x100938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10093c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x10093Cu;
    {
        const bool branch_taken_0x10093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10093Cu;
        // 0x100940: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10093c) {
            ctx->pc = 0x10089Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10089c;
        }
    }
    ctx->pc = 0x100944u;
    // 0x100944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100948: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10094c: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x100950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x100950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100958u;
    {
        const bool branch_taken_0x100958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100958u;
        // 0x10095c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100958) {
            ctx->pc = 0x100978u;
            goto label_100978;
        }
    }
    ctx->pc = 0x100960u;
label_100960:
    // 0x100960: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100964: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x100968: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10096c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100974: 0xac450254  sw          $a1, 0x254($v0)
    ctx->pc = 0x100974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 596), GPR_U32(ctx, 5));
label_100978:
    // 0x100978: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x100978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10097c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10097Cu;
    {
        const bool branch_taken_0x10097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10097c) {
            ctx->pc = 0x100960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100960;
        }
    }
    ctx->pc = 0x100984u;
    // 0x100984: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100988: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x100988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10098c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10098cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x100990: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x100990u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x100994: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x100994u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x100998: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x100998u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10099c: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10099cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1009a0: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x1009a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1009a4: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x1009a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1009a8: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x1009a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1009ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1009b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1009b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1009b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1009bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1009c0: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1009c4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1009c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1009c8: 0xc04cda4  jal         func_133690
    ctx->pc = 0x1009C8u;
    SET_GPR_U32(ctx, 31, 0x1009D0u);
    ctx->pc = 0x1009CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C8u;
    // 0x1009cc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133690u, 0x1009C8u, 0x1009D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D0u;
label_1009d0:
    // 0x1009d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1009d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1009d4:
    // 0x1009d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1009d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1009d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1009d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1009dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1009dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1009e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1009e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1009e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1009E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1009E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009E4u;
        // 0x1009e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1009E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1009ECu;
}
