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

// Function: entry_0017b5fc
// Address: 0x17b5fc - 0x17b68c
void entry_0017b5fc_0x17b5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5fc_0x17b5fc");
#endif

    switch (ctx->pc) {
        case 0x17b65cu: goto label_17b65c;
        case 0x17b668u: goto label_17b668;
        case 0x17b684u: goto label_17b684;
        default: break;
    }

    ctx->pc = 0x17b5fcu;

    // 0x17b5fc: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x17b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x17b600: 0x8062021c  lb          $v0, 0x21C($v1)
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x17b604: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17B604u;
    {
        const bool branch_taken_0x17b604 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b604) {
            ctx->pc = 0x17B68Cu;
            return;
        }
    }
    ctx->pc = 0x17B60Cu;
    // 0x17b60c: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17B60Cu;
    {
        const bool branch_taken_0x17b60c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x17B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B60Cu;
        // 0x17b610: 0x28810012  slti        $at, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b60c) {
            ctx->pc = 0x17B68Cu;
            return;
        }
    }
    ctx->pc = 0x17B614u;
    // 0x17b614: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x17B614u;
    {
        const bool branch_taken_0x17b614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b614) {
            ctx->pc = 0x17B68Cu;
            return;
        }
    }
    ctx->pc = 0x17B61Cu;
    // 0x17b61c: 0x906201f9  lbu         $v0, 0x1F9($v1)
    ctx->pc = 0x17b61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 505)));
    // 0x17b620: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17B620u;
    {
        const bool branch_taken_0x17b620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B620u;
        // 0x17b624: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b620) {
            ctx->pc = 0x17B68Cu;
            return;
        }
    }
    ctx->pc = 0x17B628u;
    // 0x17b628: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x17b62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b630: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17b630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b634: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17b634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17b638: 0x0  nop
    ctx->pc = 0x17b638u;
    // NOP
    // 0x17b63c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17b63cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17b640: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x17b640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17b644: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x17b644u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17b648: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b64c: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x17b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
    // 0x17b650: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x17b654: 0xc042118  jal         func_108460
    ctx->pc = 0x17B654u;
    SET_GPR_U32(ctx, 31, 0x17B65Cu);
    ctx->pc = 0x17B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B654u;
    // 0x17b658: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17B654u, 0x17B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B65Cu;
label_17b65c:
    // 0x17b65c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17b660: 0xc046458  jal         func_119160
    ctx->pc = 0x17B660u;
    SET_GPR_U32(ctx, 31, 0x17B668u);
    ctx->pc = 0x17B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B660u;
    // 0x17b664: 0x2484f8a0  addiu       $a0, $a0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x17B660u, 0x17B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B668u;
label_17b668:
    // 0x17b668: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x17B668u;
    {
        const bool branch_taken_0x17b668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B668u;
        // 0x17b66c: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b668) {
            ctx->pc = 0x17B6FCu;
            return;
        }
    }
    ctx->pc = 0x17B670u;
    // 0x17b670: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17b674: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b67c: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x17B67Cu;
    SET_GPR_U32(ctx, 31, 0x17B684u);
    ctx->pc = 0x17B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B67Cu;
    // 0x17b680: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17B67Cu, 0x17B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17B684u;
    {
        const bool branch_taken_0x17b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B684u;
        // 0x17b688: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b684) {
            ctx->pc = 0x17B700u;
            return;
        }
    }
    ctx->pc = 0x17B68Cu;
}
