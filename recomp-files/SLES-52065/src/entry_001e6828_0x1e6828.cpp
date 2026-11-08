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

// Function: entry_001e6828
// Address: 0x1e6828 - 0x1e685c
void entry_001e6828_0x1e6828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6828_0x1e6828");
#endif

    switch (ctx->pc) {
        case 0x1e683cu: goto label_1e683c;
        case 0x1e6854u: goto label_1e6854;
        default: break;
    }

    ctx->pc = 0x1e6828u;

    // 0x1e6828: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e682c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e6830: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6834: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E6834u;
    SET_GPR_U32(ctx, 31, 0x1E683Cu);
    ctx->pc = 0x1E6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6834u;
    // 0x1e6838: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E6834u, 0x1E683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E683Cu;
label_1e683c:
    // 0x1e683c: 0x8fc500b0  lw          $a1, 0xB0($fp)
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e6840: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6844: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e6848: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x1e684c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E684Cu;
    SET_GPR_U32(ctx, 31, 0x1E6854u);
    ctx->pc = 0x1E6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E684Cu;
    // 0x1e6850: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E684Cu, 0x1E6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6854u;
label_1e6854:
    // 0x1e6854: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1E6854u;
    {
        const bool branch_taken_0x1e6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6854) {
            ctx->pc = 0x1E69DCu;
            return;
        }
    }
    ctx->pc = 0x1E685Cu;
}
