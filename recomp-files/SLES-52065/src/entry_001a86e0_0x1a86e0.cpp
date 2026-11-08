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

// Function: entry_001a86e0
// Address: 0x1a86e0 - 0x1a8710
void entry_001a86e0_0x1a86e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86e0_0x1a86e0");
#endif

    switch (ctx->pc) {
        case 0x1a86e8u: goto label_1a86e8;
        default: break;
    }

    ctx->pc = 0x1a86e0u;

    // 0x1a86e0: 0xc06a4e4  jal         func_1A9390
    ctx->pc = 0x1A86E0u;
    SET_GPR_U32(ctx, 31, 0x1A86E8u);
    ctx->pc = 0x1A9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9390u, 0x1A86E0u, 0x1A86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86E8u;
label_1a86e8:
    // 0x1a86e8: 0x8f83870c  lw          $v1, -0x78F4($gp)
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
    // 0x1a86ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a86f0: 0xae8309b4  sw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2484), GPR_U32(ctx, 3));
    // 0x1a86f4: 0xae8009c0  sw          $zero, 0x9C0($s4)
    ctx->pc = 0x1a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 0));
    // 0x1a86f8: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a86fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A8710u;
            return;
        }
    }
    ctx->pc = 0x1A8704u;
    // 0x1a8704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8704u;
    {
        const bool branch_taken_0x1a8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8704u;
        // 0x1a8708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8704) {
            ctx->pc = 0x1A8710u;
            return;
        }
    }
    ctx->pc = 0x1A870Cu;
    // 0x1a870c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1a8710u;
}
