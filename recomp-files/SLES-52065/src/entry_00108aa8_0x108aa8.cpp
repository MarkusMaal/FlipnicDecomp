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

// Function: entry_00108aa8
// Address: 0x108aa8 - 0x108afc
void entry_00108aa8_0x108aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108aa8_0x108aa8");
#endif

    switch (ctx->pc) {
        case 0x108ac8u: goto label_108ac8;
        default: break;
    }

    ctx->pc = 0x108aa8u;

    // 0x108aa8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x108AA8u;
    {
        const bool branch_taken_0x108aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108aa8) {
            ctx->pc = 0x108B28u;
            return;
        }
    }
    ctx->pc = 0x108AB0u;
    // 0x108ab0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x108ab4: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ab8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x108ab8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x108abc: 0x84470006  lh          $a3, 0x6($v0)
    ctx->pc = 0x108abcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x108ac0: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AC0u;
    // 0x108ac4: 0x26a42c00  addiu       $a0, $s5, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x108AC0u, 0x108AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x108ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108acc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x108accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108ad0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x108AD0u;
    {
        const bool branch_taken_0x108ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AD0u;
        // 0x108ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ad0) {
            ctx->pc = 0x108B28u;
            return;
        }
    }
    ctx->pc = 0x108AD8u;
    // 0x108ad8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x108ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x108adc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x108adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108ae0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108ae4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ae8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108aec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108af0: 0x8484000a  lh          $a0, 0xA($a0)
    ctx->pc = 0x108af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x108af4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108af8: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x108af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    ctx->pc = 0x108afcu;
}
