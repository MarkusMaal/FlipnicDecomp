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

// Function: FUN_00171540
// Address: 0x171540 - 0x171730
void FUN_00171540_0x171540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171540_0x171540");
#endif

    switch (ctx->pc) {
        case 0x17156cu: goto label_17156c;
        case 0x171574u: goto label_171574;
        case 0x171584u: goto label_171584;
        case 0x17158cu: goto label_17158c;
        case 0x17159cu: goto label_17159c;
        case 0x1715b4u: goto label_1715b4;
        case 0x1715d8u: goto label_1715d8;
        case 0x1715e4u: goto label_1715e4;
        case 0x17168cu: goto label_17168c;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716b8u: goto label_1716b8;
        default: break;
    }

    ctx->pc = 0x171540u;

    // 0x171540: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x171544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x171544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x171548: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x171548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17154c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x171550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x171550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171554: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x171558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17155c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171564: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x171564u;
    SET_GPR_U32(ctx, 31, 0x17156Cu);
    ctx->pc = 0x171568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171564u;
    // 0x171568: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x171564u, 0x17156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17156Cu;
label_17156c:
    // 0x17156c: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x17156Cu;
    SET_GPR_U32(ctx, 31, 0x171574u);
    ctx->pc = 0x171570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17156Cu;
    // 0x171570: 0xc68c000c  lwc1        $f12, 0xC($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x17156Cu, 0x171574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171574u;
label_171574:
    // 0x171574: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x171574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x171578: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17157c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x17157Cu;
    SET_GPR_U32(ctx, 31, 0x171584u);
    ctx->pc = 0x171580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17157Cu;
    // 0x171580: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x17157Cu, 0x171584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171584u;
label_171584:
    // 0x171584: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x171584u;
    SET_GPR_U32(ctx, 31, 0x17158Cu);
    ctx->pc = 0x171588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171584u;
    // 0x171588: 0xc68c000c  lwc1        $f12, 0xC($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x171584u, 0x17158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17158Cu;
label_17158c:
    // 0x17158c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17158cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x171590: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171594: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171598: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17159c:
    // 0x17159c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1715a0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1715a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1715a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1715a8: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1715ac: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1715ACu;
    SET_GPR_U32(ctx, 31, 0x1715B4u);
    ctx->pc = 0x1715B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715ACu;
    // 0x1715b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1715ACu, 0x1715B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715B4u;
label_1715b4:
    // 0x1715b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1715b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1715b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1715bc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1715bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1715c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1715C0u;
    {
        const bool branch_taken_0x1715c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1715C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715C0u;
        // 0x1715c4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715c0) {
            ctx->pc = 0x17159Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17159c;
        }
    }
    ctx->pc = 0x1715C8u;
    // 0x1715c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1715c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1715ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1715d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1715d8:
    // 0x1715d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1715d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1715dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715e0: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1715e4:
    // 0x1715e4: 0x0  nop
    ctx->pc = 0x1715e4u;
    // NOP
    // 0x1715e8: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1715E8u;
    {
        const bool branch_taken_0x1715e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1715ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715E8u;
        // 0x1715ec: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715e8) {
            ctx->pc = 0x1715F8u;
            goto label_1715f8;
        }
    }
    ctx->pc = 0x1715F0u;
    // 0x1715f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1715F0u;
    {
        const bool branch_taken_0x1715f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715F0u;
        // 0x1715f4: 0xe4940000  swc1        $f20, 0x0($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715f0) {
            ctx->pc = 0x171654u;
            goto label_171654;
        }
    }
    ctx->pc = 0x1715F8u;
label_1715f8:
    // 0x1715f8: 0x692023  subu        $a0, $v1, $t1
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1715fc: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x1715fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x171600: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x171600u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171604: 0x0  nop
    ctx->pc = 0x171604u;
    // NOP
    // 0x171608: 0x0  nop
    ctx->pc = 0x171608u;
    // NOP
    // 0x17160c: 0x2010  mfhi        $a0
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x171610: 0x14860009  bne         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x171610u;
    {
        const bool branch_taken_0x171610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x171614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171610u;
        // 0x171614: 0x692821  addu        $a1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171610) {
            ctx->pc = 0x171638u;
            goto label_171638;
        }
    }
    ctx->pc = 0x171618u;
    // 0x171618: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x171618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x17161c: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x171620: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171624: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x171628: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x171628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17162c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17162cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x171630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171630u;
    {
        const bool branch_taken_0x171630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171630u;
        // 0x171634: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171630) {
            ctx->pc = 0x171654u;
            goto label_171654;
        }
    }
    ctx->pc = 0x171638u;
label_171638:
    // 0x171638: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17163c: 0xe42823  subu        $a1, $a3, $a0
    ctx->pc = 0x17163cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x171640: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171644: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x171644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x171648: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x171648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x17164c: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x17164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171650: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x171650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_171654:
    // 0x171654: 0x0  nop
    ctx->pc = 0x171654u;
    // NOP
    // 0x171658: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x171658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17165c: 0x29240003  slti        $a0, $t1, 0x3
    ctx->pc = 0x17165cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x171660: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x171660u;
    {
        const bool branch_taken_0x171660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171660u;
        // 0x171664: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171660) {
            ctx->pc = 0x1715E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1715e4;
        }
    }
    ctx->pc = 0x171668u;
    // 0x171668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17166c: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x17166cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x171670: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x171670u;
    {
        const bool branch_taken_0x171670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171670u;
        // 0x171674: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171670) {
            ctx->pc = 0x1715D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1715d8;
        }
    }
    ctx->pc = 0x171678u;
    // 0x171678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17167c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17167cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171688: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x171688u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_17168c:
    // 0x17168c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x171690: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x171698: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x171698u;
    SET_GPR_U32(ctx, 31, 0x1716A0u);
    ctx->pc = 0x17169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171698u;
    // 0x17169c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x171698u, 0x1716A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716A0u;
label_1716a0:
    // 0x1716a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1716a4: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1716a8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1716A8u;
    {
        const bool branch_taken_0x1716a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1716ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716A8u;
        // 0x1716ac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716a8) {
            ctx->pc = 0x17168Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17168c;
        }
    }
    ctx->pc = 0x1716B0u;
    // 0x1716b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1716b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1716b8:
    // 0x1716b8: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1716bc: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1716c0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1716c4: 0xe02021  addu        $a0, $a3, $zero
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1716c8: 0xc01821  addu        $v1, $a2, $zero
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x1716cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1716d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1716d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1716d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1716d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716dc: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1716e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1716e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1716e8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1716e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716ec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1716ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716f4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1716f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1716f8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1716f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716fc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1716fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171704: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x171704u;
    {
        const bool branch_taken_0x171704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171704u;
        // 0x171708: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171704) {
            ctx->pc = 0x1716B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1716b8;
        }
    }
    ctx->pc = 0x17170Cu;
    // 0x17170c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171710: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171714: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x171714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171718: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17171c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171720: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171724: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171728: 0x3e00008  jr          $ra
    ctx->pc = 0x171728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171728u;
        // 0x17172c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171730u;
}
