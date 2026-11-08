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

// Function: caseD_8
// Address: 0x1c6eb8 - 0x1c6ef4
void caseD_8_0x1c6eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1c6eb8");
#endif

    switch (ctx->pc) {
        case 0x1c6ec4u: goto label_1c6ec4;
        case 0x1c6ed0u: goto label_1c6ed0;
        case 0x1c6edcu: goto label_1c6edc;
        default: break;
    }

    ctx->pc = 0x1c6eb8u;

    // 0x1c6eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ebc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6EBCu;
    SET_GPR_U32(ctx, 31, 0x1C6EC4u);
    ctx->pc = 0x1C6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EBCu;
    // 0x1c6ec0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6EBCu, 0x1C6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EC4u;
label_1c6ec4:
    // 0x1c6ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ec8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6EC8u;
    SET_GPR_U32(ctx, 31, 0x1C6ED0u);
    ctx->pc = 0x1C6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EC8u;
    // 0x1c6ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6EC8u, 0x1C6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ED0u;
label_1c6ed0:
    // 0x1c6ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ed4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6ED4u;
    SET_GPR_U32(ctx, 31, 0x1C6EDCu);
    ctx->pc = 0x1C6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ED4u;
    // 0x1c6ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6ED4u, 0x1C6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EDCu;
label_1c6edc:
    // 0x1c6edc: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1c6ee0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6EE0u;
    {
        const bool branch_taken_0x1c6ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EE0u;
        // 0x1c6ee4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ee0) {
            ctx->pc = 0x1C6EF4u;
            return;
        }
    }
    ctx->pc = 0x1C6EE8u;
    // 0x1c6ee8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6eec: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x1C6EECu;
    {
        const bool branch_taken_0x1c6eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EECu;
        // 0x1c6ef0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eec) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6EF4u;
}
