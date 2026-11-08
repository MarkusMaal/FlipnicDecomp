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

// Function: FUN_001775e0
// Address: 0x1775e0 - 0x17781c
void FUN_001775e0_0x1775e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001775e0_0x1775e0");
#endif

    switch (ctx->pc) {
        case 0x177614u: goto label_177614;
        case 0x177630u: goto label_177630;
        case 0x17764cu: goto label_17764c;
        case 0x177668u: goto label_177668;
        case 0x177684u: goto label_177684;
        case 0x1776a0u: goto label_1776a0;
        case 0x1776bcu: goto label_1776bc;
        case 0x1776d8u: goto label_1776d8;
        case 0x1776f4u: goto label_1776f4;
        case 0x177710u: goto label_177710;
        case 0x17772cu: goto label_17772c;
        case 0x177748u: goto label_177748;
        case 0x177758u: goto label_177758;
        case 0x1777d0u: goto label_1777d0;
        default: break;
    }

    ctx->pc = 0x1775e0u;

    // 0x1775e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1775e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1775e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1775e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1775ec: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1775ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1775f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1775f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1775f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1775f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1775f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1775f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1775fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177600: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x177600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x177604: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x177604u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x177608: 0x26270040  addiu       $a3, $s1, 0x40
    ctx->pc = 0x177608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x17760c: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x17760Cu;
    SET_GPR_U32(ctx, 31, 0x177614u);
    ctx->pc = 0x177610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17760Cu;
    // 0x177610: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x17760Cu, 0x177614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177614u;
label_177614:
    // 0x177614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177618: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x17761c: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x17761cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x177620: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x177624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177628: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177628u;
    SET_GPR_U32(ctx, 31, 0x177630u);
    ctx->pc = 0x17762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177628u;
    // 0x17762c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177628u, 0x177630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177630u;
label_177630:
    // 0x177630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177634: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x177638: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x177638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x17763c: 0x262700c0  addiu       $a3, $s1, 0xC0
    ctx->pc = 0x17763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x177640: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177644: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177644u;
    SET_GPR_U32(ctx, 31, 0x17764Cu);
    ctx->pc = 0x177648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177644u;
    // 0x177648: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177644u, 0x17764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17764Cu;
label_17764c:
    // 0x17764c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177650: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x177654: 0x262600e0  addiu       $a2, $s1, 0xE0
    ctx->pc = 0x177654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x177658: 0x26270100  addiu       $a3, $s1, 0x100
    ctx->pc = 0x177658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x17765c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17765cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177660: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177660u;
    SET_GPR_U32(ctx, 31, 0x177668u);
    ctx->pc = 0x177664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177660u;
    // 0x177664: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177660u, 0x177668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177668u;
label_177668:
    // 0x177668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17766c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x177670: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x177674: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x177674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x177678: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17767c: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x17767Cu;
    SET_GPR_U32(ctx, 31, 0x177684u);
    ctx->pc = 0x177680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17767Cu;
    // 0x177680: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x17767Cu, 0x177684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177684u;
label_177684:
    // 0x177684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177688: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x17768c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x17768cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x177690: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x177690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x177694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177698: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177698u;
    SET_GPR_U32(ctx, 31, 0x1776A0u);
    ctx->pc = 0x17769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177698u;
    // 0x17769c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177698u, 0x1776A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776A0u;
label_1776a0:
    // 0x1776a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1776a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776a4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1776a8: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1776ac: 0x262700e0  addiu       $a3, $s1, 0xE0
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1776b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1776b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1776b4: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x1776B4u;
    SET_GPR_U32(ctx, 31, 0x1776BCu);
    ctx->pc = 0x1776B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776B4u;
    // 0x1776b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x1776B4u, 0x1776BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776BCu;
label_1776bc:
    // 0x1776bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1776bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776c0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1776c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1776c4: 0x262600c0  addiu       $a2, $s1, 0xC0
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1776c8: 0x26270100  addiu       $a3, $s1, 0x100
    ctx->pc = 0x1776c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1776cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1776ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1776d0: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x1776D0u;
    SET_GPR_U32(ctx, 31, 0x1776D8u);
    ctx->pc = 0x1776D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776D0u;
    // 0x1776d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x1776D0u, 0x1776D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776D8u;
label_1776d8:
    // 0x1776d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1776d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776dc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1776dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1776e0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x1776e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1776e4: 0x262700a0  addiu       $a3, $s1, 0xA0
    ctx->pc = 0x1776e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1776e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1776e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1776ec: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x1776ECu;
    SET_GPR_U32(ctx, 31, 0x1776F4u);
    ctx->pc = 0x1776F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776ECu;
    // 0x1776f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x1776ECu, 0x1776F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776F4u;
label_1776f4:
    // 0x1776f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1776f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776f8: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1776fc: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1776fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x177700: 0x262700c0  addiu       $a3, $s1, 0xC0
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x177704: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177708: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177708u;
    SET_GPR_U32(ctx, 31, 0x177710u);
    ctx->pc = 0x17770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177708u;
    // 0x17770c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177708u, 0x177710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177710u;
label_177710:
    // 0x177710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177714: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x177718: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x17771c: 0x262700e0  addiu       $a3, $s1, 0xE0
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x177720: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x177720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177724: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177724u;
    SET_GPR_U32(ctx, 31, 0x17772Cu);
    ctx->pc = 0x177728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177724u;
    // 0x177728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177724u, 0x17772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17772Cu;
label_17772c:
    // 0x17772c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177730: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x177734: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x177738: 0x26270100  addiu       $a3, $s1, 0x100
    ctx->pc = 0x177738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x17773c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17773cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x177740: 0xc05dcc4  jal         func_177310
    ctx->pc = 0x177740u;
    SET_GPR_U32(ctx, 31, 0x177748u);
    ctx->pc = 0x177744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177740u;
    // 0x177744: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177310u, 0x177740u, 0x177748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177748u;
label_177748:
    // 0x177748: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x177748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17774c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x17774cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177750: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x177750u;
    {
        const bool branch_taken_0x177750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177750u;
        // 0x177754: 0x8fb0005c  lw          $s0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177750) {
            ctx->pc = 0x1777ECu;
            goto label_1777ec;
        }
    }
    ctx->pc = 0x177758u;
label_177758:
    // 0x177758: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17775c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17775cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177760: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177764: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x177764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177768: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17776c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x17776cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177770: 0x0  nop
    ctx->pc = 0x177770u;
    // NOP
    // 0x177774: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177774u;
    {
        const bool branch_taken_0x177774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177774u;
        // 0x177778: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177774) {
            ctx->pc = 0x1777C4u;
            goto label_1777c4;
        }
    }
    ctx->pc = 0x17777Cu;
    // 0x17777c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177784: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177788: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17778c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17778cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177790: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177794: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177798: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x177798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17779c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17779cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1777a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1777a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1777a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1777a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1777a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1777a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1777ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1777acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1777b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1777b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1777b4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1777b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1777b8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1777b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1777bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1777BCu;
    {
        const bool branch_taken_0x1777bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777BCu;
        // 0x1777c0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777bc) {
            ctx->pc = 0x1777D0u;
            goto label_1777d0;
        }
    }
    ctx->pc = 0x1777C4u;
label_1777c4:
    // 0x1777c4: 0x0  nop
    ctx->pc = 0x1777c4u;
    // NOP
    // 0x1777c8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1777C8u;
    SET_GPR_U32(ctx, 31, 0x1777D0u);
    ctx->pc = 0x1777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777C8u;
    // 0x1777cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1777C8u, 0x1777D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777D0u;
label_1777d0:
    // 0x1777d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1777d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1777d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1777dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1777dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1777e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1777e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1777e8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1777ec:
    // 0x1777ec: 0x0  nop
    ctx->pc = 0x1777ecu;
    // NOP
    // 0x1777f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1777f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1777f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1777f8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1777F8u;
    {
        const bool branch_taken_0x1777f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1777f8) {
            ctx->pc = 0x177758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177758;
        }
    }
    ctx->pc = 0x177800u;
    // 0x177800: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x177804: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17780c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177814: 0x3e00008  jr          $ra
    ctx->pc = 0x177814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177814u;
        // 0x177818: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17781Cu;
}
