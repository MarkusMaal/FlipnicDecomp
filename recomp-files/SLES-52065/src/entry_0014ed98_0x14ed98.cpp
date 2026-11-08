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

// Function: entry_0014ed98
// Address: 0x14ed98 - 0x14edc4
void entry_0014ed98_0x14ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed98_0x14ed98");
#endif

    switch (ctx->pc) {
        case 0x14edbcu: goto label_14edbc;
        default: break;
    }

    ctx->pc = 0x14ed98u;

    // 0x14ed98: 0x81082b  sltu        $at, $a0, $at
    ctx->pc = 0x14ed98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14ed9c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14ED9Cu;
    {
        const bool branch_taken_0x14ed9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ed9c) {
            ctx->pc = 0x14EDC4u;
            return;
        }
    }
    ctx->pc = 0x14EDA4u;
    // 0x14eda4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14eda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14eda8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14edac: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14edacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14edb0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14edb4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EDB4u;
    SET_GPR_U32(ctx, 31, 0x14EDBCu);
    ctx->pc = 0x14EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDB4u;
    // 0x14edb8: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EDB4u, 0x14EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDBCu;
label_14edbc:
    // 0x14edbc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EDBCu;
    SET_GPR_U32(ctx, 31, 0x14EDC4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EDBCu, 0x14EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDC4u;
}
