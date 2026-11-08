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

// Function: entry_0015d148
// Address: 0x15d148 - 0x15d1a8
void entry_0015d148_0x15d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d148_0x15d148");
#endif

    ctx->pc = 0x15d148u;

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
            return;
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
