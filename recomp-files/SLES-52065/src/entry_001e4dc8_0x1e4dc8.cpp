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

// Function: entry_001e4dc8
// Address: 0x1e4dc8 - 0x1e4e0c
void entry_001e4dc8_0x1e4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4dc8_0x1e4dc8");
#endif

    switch (ctx->pc) {
        case 0x1e4dfcu: goto label_1e4dfc;
        default: break;
    }

    ctx->pc = 0x1e4dc8u;

    // 0x1e4dc8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4dcc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e4dd0: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4dd0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e4dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4dd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4ddc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4de4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4DE4u;
    {
        const bool branch_taken_0x1e4de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE4u;
        // 0x1e4de8: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4de4) {
            ctx->pc = 0x1E4E0Cu;
            return;
        }
    }
    ctx->pc = 0x1E4DECu;
    // 0x1e4dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4df0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4df4: 0xc079804  jal         func_1E6010
    ctx->pc = 0x1E4DF4u;
    SET_GPR_U32(ctx, 31, 0x1E4DFCu);
    ctx->pc = 0x1E4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DF4u;
    // 0x1e4df8: 0x3206ffff  andi        $a2, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6010u, 0x1E4DF4u, 0x1E4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DFCu;
label_1e4dfc:
    // 0x1e4dfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4e00: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4E00u;
    {
        const bool branch_taken_0x1e4e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4e00) {
            ctx->pc = 0x1E4E0Cu;
            return;
        }
    }
    ctx->pc = 0x1E4E08u;
    // 0x1e4e08: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1e4e08u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e4e0cu;
}
