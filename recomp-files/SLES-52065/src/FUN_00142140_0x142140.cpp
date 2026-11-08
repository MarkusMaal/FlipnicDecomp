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

// Function: FUN_00142140
// Address: 0x142140 - 0x142440
void FUN_00142140_0x142140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142140_0x142140");
#endif

    switch (ctx->pc) {
        case 0x1421acu: goto label_1421ac;
        case 0x1421dcu: goto label_1421dc;
        case 0x142220u: goto label_142220;
        case 0x142240u: goto label_142240;
        case 0x14224cu: goto label_14224c;
        case 0x14225cu: goto label_14225c;
        case 0x14227cu: goto label_14227c;
        case 0x14228cu: goto label_14228c;
        case 0x1422bcu: goto label_1422bc;
        case 0x1422f4u: goto label_1422f4;
        case 0x142330u: goto label_142330;
        case 0x142344u: goto label_142344;
        case 0x142358u: goto label_142358;
        case 0x142370u: goto label_142370;
        case 0x142390u: goto label_142390;
        case 0x14240cu: goto label_14240c;
        default: break;
    }

    ctx->pc = 0x142140u;

    // 0x142140: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x142144: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x142148: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x142148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14214c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x142150: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x142150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x142154: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x142154u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142158: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x142158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14215c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x142160: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x142160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x142164: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x142164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x142168: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x142168u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14216c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x142170: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x142170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x142174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x142178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14217c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14217cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142180: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x142180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x142184: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x142184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x142188: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x142188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x14218c: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x14218Cu;
    {
        const bool branch_taken_0x14218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14218Cu;
        // 0x142190: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14218c) {
            ctx->pc = 0x14240Cu;
            goto label_14240c;
        }
    }
    ctx->pc = 0x142194u;
    // 0x142194: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142198: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x142198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14219c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x14219Cu;
    {
        const bool branch_taken_0x14219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1421A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14219Cu;
        // 0x1421a0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14219c) {
            ctx->pc = 0x14228Cu;
            goto label_14228c;
        }
    }
    ctx->pc = 0x1421A4u;
    // 0x1421a4: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1421A4u;
    SET_GPR_U32(ctx, 31, 0x1421ACu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1421A4u, 0x1421ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421ACu;
label_1421ac:
    // 0x1421ac: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1421acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1421b0: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x1421b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1421b4: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1421b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1421b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1421bc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1421c0: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x1421c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1421c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1421c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1421c8: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1421c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1421cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1421ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1421d0: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x1421d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1421d4: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x1421D4u;
    SET_GPR_U32(ctx, 31, 0x1421DCu);
    ctx->pc = 0x1421D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421D4u;
    // 0x1421d8: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x1421D4u, 0x1421DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421DCu;
label_1421dc:
    // 0x1421dc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1421dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1421e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1421e4: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1421e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1421e8: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x1421e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1421ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1421ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1421f0: 0x0  nop
    ctx->pc = 0x1421f0u;
    // NOP
    // 0x1421f4: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1421f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1421f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1421f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1421fc: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1421fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142200: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x142204: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x142204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x142208: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x142208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x14220c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x142210: 0x0  nop
    ctx->pc = 0x142210u;
    // NOP
    // 0x142214: 0x0  nop
    ctx->pc = 0x142214u;
    // NOP
    // 0x142218: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142218u;
    SET_GPR_U32(ctx, 31, 0x142220u);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142218u, 0x142220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142220u;
label_142220:
    // 0x142220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142224: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x142224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x142228: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14222c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x142230: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x142234: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x142234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x142238: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x142238u;
    SET_GPR_U32(ctx, 31, 0x142240u);
    ctx->pc = 0x14223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142238u;
    // 0x14223c: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186B40u, 0x142238u, 0x142240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142240u;
label_142240:
    // 0x142240: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x142240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x142244: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x142244u;
    SET_GPR_U32(ctx, 31, 0x14224Cu);
    ctx->pc = 0x142248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142244u;
    // 0x142248: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x142244u, 0x14224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14224Cu;
label_14224c:
    // 0x14224c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x142250: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x142250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x142254: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142254u;
    SET_GPR_U32(ctx, 31, 0x14225Cu);
    ctx->pc = 0x142258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142254u;
    // 0x142258: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142254u, 0x14225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14225Cu;
label_14225c:
    // 0x14225c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142260: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x142264: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142268: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x142268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14226c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x142270: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x142274: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142274u;
    SET_GPR_U32(ctx, 31, 0x14227Cu);
    ctx->pc = 0x142278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142274u;
    // 0x142278: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142274u, 0x14227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14227Cu;
label_14227c:
    // 0x14227c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x142280: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x142284: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x142284u;
    SET_GPR_U32(ctx, 31, 0x14228Cu);
    ctx->pc = 0x142288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142284u;
    // 0x142288: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x142284u, 0x14228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14228Cu;
label_14228c:
    // 0x14228c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142290: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x142294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x142294u;
    {
        const bool branch_taken_0x142294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142294) {
            ctx->pc = 0x142304u;
            goto label_142304;
        }
    }
    ctx->pc = 0x14229Cu;
    // 0x14229c: 0x8c970028  lw          $s7, 0x28($a0)
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1422a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422a4: 0x8e550014  lw          $s5, 0x14($s2)
    ctx->pc = 0x1422a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1422a8: 0x2feb018  mult        $s6, $s7, $fp
    ctx->pc = 0x1422a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1422ac: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x1422acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1422b0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1422B0u;
    {
        const bool branch_taken_0x1422b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422B0u;
        // 0x1422b4: 0x72f38818  mult1       $s1, $s7, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422b0) {
            ctx->pc = 0x142304u;
            goto label_142304;
        }
    }
    ctx->pc = 0x1422B8u;
    // 0x1422b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1422b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1422bc:
    // 0x1422bc: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1422BCu;
    {
        const bool branch_taken_0x1422bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1422bc) {
            ctx->pc = 0x1422C8u;
            goto label_1422c8;
        }
    }
    ctx->pc = 0x1422C4u;
    // 0x1422c4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1422c8:
    // 0x1422c8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1422c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1422cc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1422d0: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1422d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1422d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1422dc: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x1422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1422e0: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1422e4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1422e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1422e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1422e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1422ec: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x1422ECu;
    SET_GPR_U32(ctx, 31, 0x1422F4u);
    ctx->pc = 0x1422F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422ECu;
    // 0x1422f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x1422ECu, 0x1422F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422F4u;
label_1422f4:
    // 0x1422f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1422f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1422f8: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x1422f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1422fc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1422FCu;
    {
        const bool branch_taken_0x1422fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422FCu;
        // 0x142300: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422fc) {
            ctx->pc = 0x1422BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1422bc;
        }
    }
    ctx->pc = 0x142304u;
label_142304:
    // 0x142304: 0x0  nop
    ctx->pc = 0x142304u;
    // NOP
    // 0x142308: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14230c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x142310: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x142310u;
    {
        const bool branch_taken_0x142310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142310) {
            ctx->pc = 0x1423B4u;
            goto label_1423b4;
        }
    }
    ctx->pc = 0x142318u;
    // 0x142318: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14231c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14231Cu;
    {
        const bool branch_taken_0x14231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14231Cu;
        // 0x142320: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14231c) {
            ctx->pc = 0x1423B4u;
            goto label_1423b4;
        }
    }
    ctx->pc = 0x142324u;
    // 0x142324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142328: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142328u;
    {
        const bool branch_taken_0x142328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142328u;
        // 0x14232c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142328) {
            ctx->pc = 0x14239Cu;
            goto label_14239c;
        }
    }
    ctx->pc = 0x142330u;
label_142330:
    // 0x142330: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142334: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x142338: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14233c: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x14233Cu;
    SET_GPR_U32(ctx, 31, 0x142344u);
    ctx->pc = 0x142340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14233Cu;
    // 0x142340: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x14233Cu, 0x142344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14234c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142350: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142350u;
    SET_GPR_U32(ctx, 31, 0x142358u);
    ctx->pc = 0x142354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142350u;
    // 0x142354: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142350u, 0x142358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142358u;
label_142358:
    // 0x142358: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14235c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x142364: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142368: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142368u;
    SET_GPR_U32(ctx, 31, 0x142370u);
    ctx->pc = 0x14236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142368u;
    // 0x14236c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142368u, 0x142370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142370u;
label_142370:
    // 0x142370: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142374: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x142374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142378: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14237c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14237cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142388: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142388u;
    SET_GPR_U32(ctx, 31, 0x142390u);
    ctx->pc = 0x14238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142388u;
    // 0x14238c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142388u, 0x142390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142390u;
label_142390:
    // 0x142390: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x142390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x142394: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x142394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x142398: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14239c:
    // 0x14239c: 0x0  nop
    ctx->pc = 0x14239cu;
    // NOP
    // 0x1423a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423a4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1423a8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1423a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1423ac: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1423ACu;
    {
        const bool branch_taken_0x1423ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1423ac) {
            ctx->pc = 0x142330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142330;
        }
    }
    ctx->pc = 0x1423B4u;
label_1423b4:
    // 0x1423b4: 0x0  nop
    ctx->pc = 0x1423b4u;
    // NOP
    // 0x1423b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423bc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1423bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1423c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1423C0u;
    {
        const bool branch_taken_0x1423c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423c0) {
            ctx->pc = 0x1423E4u;
            goto label_1423e4;
        }
    }
    ctx->pc = 0x1423C8u;
    // 0x1423c8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1423c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1423cc: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1423d0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1423d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1423d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1423d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1423d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1423d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1423dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1423dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1423e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1423e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1423e4:
    // 0x1423e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1423e8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1423ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1423ECu;
    {
        const bool branch_taken_0x1423ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423ec) {
            ctx->pc = 0x14240Cu;
            goto label_14240c;
        }
    }
    ctx->pc = 0x1423F4u;
    // 0x1423f4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1423f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1423f8: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1423fc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x142400: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x142404: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x142404u;
    SET_GPR_U32(ctx, 31, 0x14240Cu);
    ctx->pc = 0x142408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142404u;
    // 0x142408: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x142404u, 0x14240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14240Cu;
label_14240c:
    // 0x14240c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14240cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x142410: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x142410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142414: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x142414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x142418: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x142418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14241c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14241cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142420: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x142420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142424: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x142424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142428: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14242c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14242cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142438: 0x3e00008  jr          $ra
    ctx->pc = 0x142438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142438u;
        // 0x14243c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142440u;
}
