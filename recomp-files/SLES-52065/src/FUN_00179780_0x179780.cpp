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

// Function: FUN_00179780
// Address: 0x179780 - 0x179820
void FUN_00179780_0x179780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179780_0x179780");
#endif

    switch (ctx->pc) {
        case 0x1797bcu: goto label_1797bc;
        case 0x1797ccu: goto label_1797cc;
        case 0x1797dcu: goto label_1797dc;
        case 0x1797fcu: goto label_1797fc;
        default: break;
    }

    ctx->pc = 0x179780u;

    // 0x179780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179784: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x179784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x179788: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17978c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179794: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x179794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17979c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1797a0: 0xa0670838  sb          $a3, 0x838($v1)
    ctx->pc = 0x1797a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2104), (uint8_t)GPR_U32(ctx, 7));
    // 0x1797a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1797a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1797a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1797b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1797b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1797b4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1797B4u;
    SET_GPR_U32(ctx, 31, 0x1797BCu);
    ctx->pc = 0x1797B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797B4u;
    // 0x1797b8: 0xf8410000  sqc2        $vf1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1797B4u, 0x1797BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797BCu;
label_1797bc:
    // 0x1797bc: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x1797bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1797c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1797c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1797c4: 0xc045b00  jal         func_116C00
    ctx->pc = 0x1797C4u;
    SET_GPR_U32(ctx, 31, 0x1797CCu);
    ctx->pc = 0x1797C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797C4u;
    // 0x1797c8: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x1797C4u, 0x1797CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797CCu;
label_1797cc:
    // 0x1797cc: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x1797ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1797d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1797d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1797d4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1797D4u;
    SET_GPR_U32(ctx, 31, 0x1797DCu);
    ctx->pc = 0x1797D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797D4u;
    // 0x1797d8: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1797D4u, 0x1797DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797DCu;
label_1797dc:
    // 0x1797dc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1797e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1797e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1797e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1797e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1797e8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1797e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1797ec: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1797ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1797f0: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1797f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x1797f4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1797F4u;
    SET_GPR_U32(ctx, 31, 0x1797FCu);
    ctx->pc = 0x1797F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797F4u;
    // 0x1797f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1797F4u, 0x1797FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797FCu;
label_1797fc:
    // 0x1797fc: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1797fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x179800: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x179800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x179804: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x179804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x179808: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x179808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x17980c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179818: 0x3e00008  jr          $ra
    ctx->pc = 0x179818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179818u;
        // 0x17981c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179820u;
}
