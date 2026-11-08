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

// Function: entry_00209f78
// Address: 0x209f78 - 0x209f98
void entry_00209f78_0x209f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209f78_0x209f78");
#endif

    switch (ctx->pc) {
        case 0x209f80u: goto label_209f80;
        case 0x209f8cu: goto label_209f8c;
        default: break;
    }

    ctx->pc = 0x209f78u;

    // 0x209f78: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x209F78u;
    SET_GPR_U32(ctx, 31, 0x209F80u);
    ctx->pc = 0x209F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F78u;
    // 0x209f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x209F78u, 0x209F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F80u;
label_209f80:
    // 0x209f80: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x209f84: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x209F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F84u;
    // 0x209f88: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x209F84u, 0x209F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x209f90: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x209f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x209f94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x209f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x209f98u;
}
