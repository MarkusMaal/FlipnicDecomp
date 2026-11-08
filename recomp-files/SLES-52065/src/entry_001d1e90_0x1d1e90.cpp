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

// Function: entry_001d1e90
// Address: 0x1d1e90 - 0x1d1edc
void entry_001d1e90_0x1d1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e90_0x1d1e90");
#endif

    switch (ctx->pc) {
        case 0x1d1ea0u: goto label_1d1ea0;
        default: break;
    }

    ctx->pc = 0x1d1e90u;

    // 0x1d1e90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e94: 0x8c25fe40  lw          $a1, -0x1C0($at)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FE40u));
    // 0x1d1e98: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D1E98u;
    SET_GPR_U32(ctx, 31, 0x1D1EA0u);
    ctx->pc = 0x1D1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E98u;
    // 0x1d1e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D1E98u, 0x1D1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EA0u;
label_1d1ea0:
    // 0x1d1ea0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D1EA0u;
    {
        const bool branch_taken_0x1d1ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ea0) {
            ctx->pc = 0x1D1F54u;
            return;
        }
    }
    ctx->pc = 0x1D1EA8u;
    // 0x1d1ea8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1eac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1eb4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1eb8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d1ebc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d1ec0: 0x8c24fe40  lw          $a0, -0x1C0($at)
    ctx->pc = 0x1d1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966848)));
    // 0x1d1ec4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1EC4u;
    {
        const bool branch_taken_0x1d1ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1ec4) {
            ctx->pc = 0x1D1F2Cu;
            return;
        }
    }
    ctx->pc = 0x1D1ECCu;
    // 0x1d1ecc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1EDCu;
            return;
        }
    }
    ctx->pc = 0x1D1ED4u;
    // 0x1d1ed4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1ED4u;
    {
        const bool branch_taken_0x1d1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ED4u;
        // 0x1d1ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ed4) {
            ctx->pc = 0x1D1F58u;
            return;
        }
    }
    ctx->pc = 0x1D1EDCu;
}
