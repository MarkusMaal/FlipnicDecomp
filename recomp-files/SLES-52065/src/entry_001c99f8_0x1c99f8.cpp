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

// Function: entry_001c99f8
// Address: 0x1c99f8 - 0x1c9a1c
void entry_001c99f8_0x1c99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99f8_0x1c99f8");
#endif

    switch (ctx->pc) {
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a14u: goto label_1c9a14;
        default: break;
    }

    ctx->pc = 0x1c99f8u;

    // 0x1c99f8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C99F8u;
    SET_GPR_U32(ctx, 31, 0x1C9A00u);
    ctx->pc = 0x1C99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99F8u;
    // 0x1c99fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C99F8u, 0x1C9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A00u;
label_1c9a00:
    // 0x1c9a00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9A00u;
    {
        const bool branch_taken_0x1c9a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A00u;
        // 0x1c9a04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a00) {
            ctx->pc = 0x1C9A1Cu;
            return;
        }
    }
    ctx->pc = 0x1C9A08u;
    // 0x1c9a08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9a0c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A14u);
    ctx->pc = 0x1C9A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A0Cu;
    // 0x1c9a10: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9A0Cu, 0x1C9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A14u;
label_1c9a14:
    // 0x1c9a14: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C9A14u;
    SET_GPR_U32(ctx, 31, 0x1C9A1Cu);
    ctx->pc = 0x1C9A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A14u;
    // 0x1c9a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C9A14u, 0x1C9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A1Cu;
}
