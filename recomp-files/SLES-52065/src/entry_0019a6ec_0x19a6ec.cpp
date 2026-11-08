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

// Function: entry_0019a6ec
// Address: 0x19a6ec - 0x19a718
void entry_0019a6ec_0x19a6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6ec_0x19a6ec");
#endif

    switch (ctx->pc) {
        case 0x19a6fcu: goto label_19a6fc;
        case 0x19a710u: goto label_19a710;
        default: break;
    }

    ctx->pc = 0x19a6ecu;

    // 0x19a6ec: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19a6f0: 0x8c452840  lw          $a1, 0x2840($v0)
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10304)));
    // 0x19a6f4: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19A6F4u;
    SET_GPR_U32(ctx, 31, 0x19A6FCu);
    ctx->pc = 0x19A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6F4u;
    // 0x19a6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A6F4u, 0x19A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6FCu;
label_19a6fc:
    // 0x19a6fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A6FCu;
    {
        const bool branch_taken_0x19a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6fc) {
            ctx->pc = 0x19A72Cu;
            return;
        }
    }
    ctx->pc = 0x19A704u;
    // 0x19a704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a708: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19A708u;
    SET_GPR_U32(ctx, 31, 0x19A710u);
    ctx->pc = 0x19A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A708u;
    // 0x19a70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A708u, 0x19A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A710u;
label_19a710:
    // 0x19a710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A710u;
    {
        const bool branch_taken_0x19a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a710) {
            ctx->pc = 0x19A72Cu;
            return;
        }
    }
    ctx->pc = 0x19A718u;
}
