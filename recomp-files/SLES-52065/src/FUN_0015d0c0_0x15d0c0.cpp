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

// Function: FUN_0015d0c0
// Address: 0x15d0c0 - 0x15d1a8
void FUN_0015d0c0_0x15d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d0c0_0x15d0c0");
#endif

    switch (ctx->pc) {
        case 0x15d100u: goto label_15d100;
        case 0x15d124u: goto label_15d124;
        case 0x15d144u: goto label_15d144;
        default: break;
    }

    ctx->pc = 0x15d0c0u;

    // 0x15d0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d0c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d0d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0dc: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x15d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x15d0e0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x15d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x15d0e4: 0xac802cd4  sw          $zero, 0x2CD4($a0)
    ctx->pc = 0x15d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11476), GPR_U32(ctx, 0));
    // 0x15d0e8: 0xac803dd8  sw          $zero, 0x3DD8($a0)
    ctx->pc = 0x15d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15832), GPR_U32(ctx, 0));
    // 0x15d0ec: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x15d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x15d0f0: 0xac802cd0  sw          $zero, 0x2CD0($a0)
    ctx->pc = 0x15d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11472), GPR_U32(ctx, 0));
    // 0x15d0f4: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x15d0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d0f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D0F8u;
    {
        const bool branch_taken_0x15d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0F8u;
        // 0x15d0fc: 0xa080002d  sb          $zero, 0x2D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0f8) {
            ctx->pc = 0x15D10Cu;
            goto label_15d10c;
        }
    }
    ctx->pc = 0x15D100u;
label_15d100:
    // 0x15d100: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15d104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d108: 0xac602cd8  sw          $zero, 0x2CD8($v1)
    ctx->pc = 0x15d108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11480), GPR_U32(ctx, 0));
label_15d10c:
    // 0x15d10c: 0x0  nop
    ctx->pc = 0x15d10cu;
    // NOP
    // 0x15d110: 0x28a30400  slti        $v1, $a1, 0x400
    ctx->pc = 0x15d110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15d114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D114u;
    {
        const bool branch_taken_0x15d114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D114u;
        // 0x15d118: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d114) {
            ctx->pc = 0x15D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d100;
        }
    }
    ctx->pc = 0x15D11Cu;
    // 0x15d11c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D11Cu;
    {
        const bool branch_taken_0x15d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D11Cu;
        // 0x15d120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d11c) {
            ctx->pc = 0x15D148u;
            goto label_15d148;
        }
    }
    ctx->pc = 0x15D124u;
label_15d124:
    // 0x15d124: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15d128: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15d12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d130: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15d134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15d134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d138: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15d13c: 0xc055ed4  jal         func_157B50
    ctx->pc = 0x15D13Cu;
    SET_GPR_U32(ctx, 31, 0x15D144u);
    ctx->pc = 0x15D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D13Cu;
    // 0x15d140: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B50u, 0x15D13Cu, 0x15D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D144u;
label_15d144:
    // 0x15d144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d148:
    // 0x15d148: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15d148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15d14c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15D14Cu;
    {
        const bool branch_taken_0x15d14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d14c) {
            ctx->pc = 0x15D124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d124;
        }
    }
    ctx->pc = 0x15D154u;
    // 0x15d154: 0x24637500  addiu       $v1, $v1, 0x7500
    ctx->pc = 0x15d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29952));
    // 0x15d158: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x15d158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15d15c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15d160: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x15d164: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x15d164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x15d168: 0x3c044485  lui         $a0, 0x4485
    ctx->pc = 0x15d168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17541 << 16));
    // 0x15d16c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x15d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x15d170: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x15d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x15d174: 0xae203df0  sw          $zero, 0x3DF0($s1)
    ctx->pc = 0x15d174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15856), GPR_U32(ctx, 0));
    // 0x15d178: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x15d178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d17c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x15d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x15d180: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x15d180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x15d184: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x15d184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x15d188: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x15d188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x15d18c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x15d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x15d190: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x15d190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x15d194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1A0u;
        // 0x15d1a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D1A8u;
}
