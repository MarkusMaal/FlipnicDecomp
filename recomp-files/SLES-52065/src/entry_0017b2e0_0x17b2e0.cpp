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

// Function: entry_0017b2e0
// Address: 0x17b2e0 - 0x17b324
void entry_0017b2e0_0x17b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b2e0_0x17b2e0");
#endif

    switch (ctx->pc) {
        case 0x17b2e8u: goto label_17b2e8;
        default: break;
    }

    ctx->pc = 0x17b2e0u;

    // 0x17b2e0: 0xc055ac0  jal         func_156B00
    ctx->pc = 0x17B2E0u;
    SET_GPR_U32(ctx, 31, 0x17B2E8u);
    ctx->pc = 0x156B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B00u, 0x17B2E0u, 0x17B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2E8u;
label_17b2e8:
    // 0x17b2e8: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x17b2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b2f0: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x17B2F0u;
    {
        const bool branch_taken_0x17b2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2F0u;
        // 0x17b2f4: 0x260203e0  addiu       $v0, $s0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2f0) {
            ctx->pc = 0x17B4E4u;
            return;
        }
    }
    ctx->pc = 0x17B2F8u;
    // 0x17b2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b2fc: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x17B2FCu;
    {
        const bool branch_taken_0x17b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2FCu;
        // 0x17b300: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2fc) {
            ctx->pc = 0x17B4E0u;
            return;
        }
    }
    ctx->pc = 0x17B304u;
    // 0x17b304: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x17B304u;
    {
        const bool branch_taken_0x17b304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b304) {
            ctx->pc = 0x17B52Cu;
            return;
        }
    }
    ctx->pc = 0x17B30Cu;
    // 0x17b30c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x17B30Cu;
    {
        const bool branch_taken_0x17b30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B30Cu;
        // 0x17b310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b30c) {
            ctx->pc = 0x17B49Cu;
            return;
        }
    }
    ctx->pc = 0x17B314u;
    // 0x17b314: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B314u;
    {
        const bool branch_taken_0x17b314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b314) {
            ctx->pc = 0x17B324u;
            return;
        }
    }
    ctx->pc = 0x17B31Cu;
    // 0x17b31c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B31Cu;
        // 0x17b320: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B530u;
            return;
        }
    }
    ctx->pc = 0x17B324u;
}
