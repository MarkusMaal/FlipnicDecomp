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

// Function: entry_001cbb14
// Address: 0x1cbb14 - 0x1cbb2c
void entry_001cbb14_0x1cbb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb14_0x1cbb14");
#endif

    switch (ctx->pc) {
        case 0x1cbb1cu: goto label_1cbb1c;
        default: break;
    }

    ctx->pc = 0x1cbb14u;

    // 0x1cbb14: 0xc072f04  jal         func_1CBC10
    ctx->pc = 0x1CBB14u;
    SET_GPR_U32(ctx, 31, 0x1CBB1Cu);
    ctx->pc = 0x1CBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC10u, 0x1CBB14u, 0x1CBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB1Cu;
label_1cbb1c:
    // 0x1cbb1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cbb20: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1cbb20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1cbb24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cbb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1cbb2cu;
}
