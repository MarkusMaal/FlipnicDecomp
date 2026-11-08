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

// Function: entry_0010251c
// Address: 0x10251c - 0x102560
void entry_0010251c_0x10251c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010251c_0x10251c");
#endif

    switch (ctx->pc) {
        case 0x102544u: goto label_102544;
        case 0x102550u: goto label_102550;
        default: break;
    }

    ctx->pc = 0x10251cu;

label_10251c:
    // 0x10251c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x102520: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102528: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x102528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10252c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102530: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x102534: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x102534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102538: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x102538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10253c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10253Cu;
    SET_GPR_U32(ctx, 31, 0x102544u);
    ctx->pc = 0x102540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10253Cu;
    // 0x102540: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10253Cu, 0x102544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102544u;
label_102544:
    // 0x102544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102548: 0xc049ea4  jal         func_127A90
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102548u;
    // 0x10254c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A90u, 0x102548u, 0x102550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102550u;
label_102550:
    // 0x102550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x102554: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x102558: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x102558u;
    {
        const bool branch_taken_0x102558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102558) {
            ctx->pc = 0x10251Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10251c;
        }
    }
    ctx->pc = 0x102560u;
}
