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

// Function: entry_0019830c
// Address: 0x19830c - 0x19835c
void entry_0019830c_0x19830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019830c_0x19830c");
#endif

    switch (ctx->pc) {
        case 0x19833cu: goto label_19833c;
        default: break;
    }

    ctx->pc = 0x19830cu;

    // 0x19830c: 0x0  nop
    ctx->pc = 0x19830cu;
    // NOP
    // 0x198310: 0x8cc201fc  lw          $v0, 0x1FC($a2)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
    // 0x198314: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x198314u;
    {
        const bool branch_taken_0x198314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198314u;
        // 0x198318: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198314) {
            ctx->pc = 0x1983A4u;
            return;
        }
    }
    ctx->pc = 0x19831Cu;
    // 0x19831c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198320: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x198320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x198324: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x198328: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x198328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19832c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x19832Cu;
    {
        const bool branch_taken_0x19832c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19832c) {
            ctx->pc = 0x1983A4u;
            return;
        }
    }
    ctx->pc = 0x198334u;
    // 0x198334: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x198334u;
    SET_GPR_U32(ctx, 31, 0x19833Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x198334u, 0x19833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19833Cu;
label_19833c:
    // 0x19833c: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19833Cu;
    {
        const bool branch_taken_0x19833c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19833c) {
            ctx->pc = 0x1983A0u;
            return;
        }
    }
    ctx->pc = 0x198344u;
    // 0x198344: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x198348: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x19834c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19834Cu;
    {
        const bool branch_taken_0x19834c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19834c) {
            ctx->pc = 0x19835Cu;
            return;
        }
    }
    ctx->pc = 0x198354u;
    // 0x198354: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x198354u;
    {
        const bool branch_taken_0x198354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198354u;
        // 0x198358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198354) {
            ctx->pc = 0x19837Cu;
            return;
        }
    }
    ctx->pc = 0x19835Cu;
}
