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

// Function: entry_00151db8
// Address: 0x151db8 - 0x151e00
void entry_00151db8_0x151db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151db8_0x151db8");
#endif

    switch (ctx->pc) {
        case 0x151df0u: goto label_151df0;
        default: break;
    }

    ctx->pc = 0x151db8u;

    // 0x151db8: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x151db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151dbc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x151dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151dc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151dc4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151dc8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151dcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x151dd0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x151dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x151dd4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x151dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151dd8: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x151dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x151ddc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x151ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151de0: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x151de0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x151de4: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x151de4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151de8: 0xc057040  jal         func_15C100
    ctx->pc = 0x151DE8u;
    SET_GPR_U32(ctx, 31, 0x151DF0u);
    ctx->pc = 0x151DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE8u;
    // 0x151dec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x151DE8u, 0x151DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DF0u;
label_151df0:
    // 0x151df0: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x151DF0u;
    {
        const bool branch_taken_0x151df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x151df0) {
            ctx->pc = 0x151E00u;
            return;
        }
    }
    ctx->pc = 0x151DF8u;
    // 0x151df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151DF8u;
    {
        const bool branch_taken_0x151df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DF8u;
        // 0x151dfc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df8) {
            ctx->pc = 0x151E14u;
            return;
        }
    }
    ctx->pc = 0x151E00u;
}
