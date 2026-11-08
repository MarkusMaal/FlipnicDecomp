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

// Function: entry_00197910
// Address: 0x197910 - 0x197948
void entry_00197910_0x197910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197910_0x197910");
#endif

    switch (ctx->pc) {
        case 0x197940u: goto label_197940;
        default: break;
    }

    ctx->pc = 0x197910u;

    // 0x197910: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x197914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197918: 0x1483007f  bne         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197918) {
            ctx->pc = 0x197B18u;
            return;
        }
    }
    ctx->pc = 0x197920u;
    // 0x197920: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x197924: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197928: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x197928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
    // 0x19792c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197930: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x197930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x197934: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x197938: 0xc064a88  jal         func_192A20
    ctx->pc = 0x197938u;
    SET_GPR_U32(ctx, 31, 0x197940u);
    ctx->pc = 0x19793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197938u;
    // 0x19793c: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197938u, 0x197940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197940u;
label_197940:
    // 0x197940: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x197940u;
    {
        const bool branch_taken_0x197940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197940u;
        // 0x197944: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197940) {
            ctx->pc = 0x197B18u;
            return;
        }
    }
    ctx->pc = 0x197948u;
}
