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

// Function: entry_0015c748
// Address: 0x15c748 - 0x15c838
void entry_0015c748_0x15c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c748_0x15c748");
#endif

    switch (ctx->pc) {
        case 0x15c758u: goto label_15c758;
        case 0x15c7dcu: goto label_15c7dc;
        case 0x15c7f0u: goto label_15c7f0;
        default: break;
    }

    ctx->pc = 0x15c748u;

label_15c748:
    // 0x15c748: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x15c748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x15c74c: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x15c750: 0xc055ed4  jal         func_157B50
    ctx->pc = 0x15C750u;
    SET_GPR_U32(ctx, 31, 0x15C758u);
    ctx->pc = 0x15C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C750u;
    // 0x15c754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B50u, 0x15C750u, 0x15C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C758u;
label_15c758:
    // 0x15c758: 0xa640022a  sh          $zero, 0x22A($s2)
    ctx->pc = 0x15c758u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c75c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c760: 0xa6420228  sh          $v0, 0x228($s2)
    ctx->pc = 0x15c760u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c764: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x15c764u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c768: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15c76c: 0x8e852c10  lw          $a1, 0x2C10($s4)
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11280)));
    // 0x15c770: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15c770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15c774: 0x8e832c1c  lw          $v1, 0x2C1C($s4)
    ctx->pc = 0x15c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11292)));
    // 0x15c778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15c77c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c780: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x15c784: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15c784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15c788: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15c78c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15c78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15c790: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15c794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c798: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15c798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c79c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c7a0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x15c7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c7a4: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x15c7a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15c7a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15c7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15c7ac: 0x0  nop
    ctx->pc = 0x15c7acu;
    // NOP
    // 0x15c7b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15c7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15c7b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c7b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15c7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15c7bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15c7c0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15c7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15c7c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x15c7c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15c7c8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15c7c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15c7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15c7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c7d0: 0x46041301  sub.s       $f12, $f2, $f4
    ctx->pc = 0x15c7d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x15c7d4: 0xc056270  jal         func_1589C0
    ctx->pc = 0x15C7D4u;
    SET_GPR_U32(ctx, 31, 0x15C7DCu);
    ctx->pc = 0x15C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7D4u;
    // 0x15c7d8: 0x46040381  sub.s       $f14, $f0, $f4 (Delay Slot)
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x15C7D4u, 0x15C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7DCu;
label_15c7dc:
    // 0x15c7dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15c7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15c7e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x15c7e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x15c7e8: 0xc056294  jal         func_158A50
    ctx->pc = 0x15C7E8u;
    SET_GPR_U32(ctx, 31, 0x15C7F0u);
    ctx->pc = 0x15C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7E8u;
    // 0x15c7ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A50u, 0x15C7E8u, 0x15C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7F0u;
label_15c7f0:
    // 0x15c7f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15c7f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c7f8: 0xae430200  sw          $v1, 0x200($s2)
    ctx->pc = 0x15c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 3));
    // 0x15c7fc: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x15c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x15c800: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15c800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c804: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x15C804u;
    {
        const bool branch_taken_0x15c804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C804u;
        // 0x15c808: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c804) {
            ctx->pc = 0x15C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c748;
        }
    }
    ctx->pc = 0x15C80Cu;
    // 0x15c80c: 0xa6800228  sh          $zero, 0x228($s4)
    ctx->pc = 0x15c80cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c810: 0xae802cd0  sw          $zero, 0x2CD0($s4)
    ctx->pc = 0x15c810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11472), GPR_U32(ctx, 0));
    // 0x15c814: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x15c814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x15c818: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c830: 0x3e00008  jr          $ra
    ctx->pc = 0x15C830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C830u;
        // 0x15c834: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C838u;
}
