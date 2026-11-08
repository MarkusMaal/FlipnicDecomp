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

// Function: entry_00118600
// Address: 0x118600 - 0x118644
void entry_00118600_0x118600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118600_0x118600");
#endif

    switch (ctx->pc) {
        case 0x118628u: goto label_118628;
        case 0x118634u: goto label_118634;
        default: break;
    }

    ctx->pc = 0x118600u;

label_118600:
    // 0x118600: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x118604: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x118604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x118608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x118608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11860c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118610: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118614: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x118614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x118618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x118618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11861c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x11861cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118620: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118620u;
    SET_GPR_U32(ctx, 31, 0x118628u);
    ctx->pc = 0x118624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118620u;
    // 0x118624: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118620u, 0x118628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118628u;
label_118628:
    // 0x118628: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11862c: 0xc062cb4  jal         func_18B2D0
    ctx->pc = 0x11862Cu;
    SET_GPR_U32(ctx, 31, 0x118634u);
    ctx->pc = 0x118630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11862Cu;
    // 0x118630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2D0u, 0x11862Cu, 0x118634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118634u;
label_118634:
    // 0x118634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118638: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x118638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11863c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11863Cu;
    {
        const bool branch_taken_0x11863c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11863c) {
            ctx->pc = 0x118600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118600;
        }
    }
    ctx->pc = 0x118644u;
}
