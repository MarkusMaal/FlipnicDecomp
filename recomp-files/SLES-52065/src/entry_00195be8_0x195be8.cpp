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

// Function: entry_00195be8
// Address: 0x195be8 - 0x195c10
void entry_00195be8_0x195be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195be8_0x195be8");
#endif

    switch (ctx->pc) {
        case 0x195bf0u: goto label_195bf0;
        case 0x195c08u: goto label_195c08;
        default: break;
    }

    ctx->pc = 0x195be8u;

    // 0x195be8: 0xc047a50  jal         func_11E940
    ctx->pc = 0x195BE8u;
    SET_GPR_U32(ctx, 31, 0x195BF0u);
    ctx->pc = 0x195BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BE8u;
    // 0x195bec: 0xaf918700  sw          $s1, -0x7900($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195BE8u, 0x195BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BF0u;
label_195bf0:
    // 0x195bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x195bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c00: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x195C00u;
    SET_GPR_U32(ctx, 31, 0x195C08u);
    ctx->pc = 0x195C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C00u;
    // 0x195c04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x195C00u, 0x195C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C08u;
label_195c08:
    // 0x195c08: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x195C08u;
    {
        const bool branch_taken_0x195c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C08u;
        // 0x195c0c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c08) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195C10u;
}
