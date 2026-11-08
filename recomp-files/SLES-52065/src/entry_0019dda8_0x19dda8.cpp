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

// Function: entry_0019dda8
// Address: 0x19dda8 - 0x19ddcc
void entry_0019dda8_0x19dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dda8_0x19dda8");
#endif

    switch (ctx->pc) {
        case 0x19ddb8u: goto label_19ddb8;
        case 0x19ddc0u: goto label_19ddc0;
        default: break;
    }

    ctx->pc = 0x19dda8u;

    // 0x19dda8: 0xaea20328  sw          $v0, 0x328($s5)
    ctx->pc = 0x19dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 2));
    // 0x19ddac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddb0: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19DDB0u;
    SET_GPR_U32(ctx, 31, 0x19DDB8u);
    ctx->pc = 0x19DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDB0u;
    // 0x19ddb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19DDB0u, 0x19DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDB8u;
label_19ddb8:
    // 0x19ddb8: 0xc063e24  jal         func_18F890
    ctx->pc = 0x19DDB8u;
    SET_GPR_U32(ctx, 31, 0x19DDC0u);
    ctx->pc = 0x19DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDB8u;
    // 0x19ddbc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19DDB8u, 0x19DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDC0u;
label_19ddc0:
    // 0x19ddc0: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x19DDC0u;
    {
        const bool branch_taken_0x19ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ddc0) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DDC8u;
    // 0x19ddc8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19ddc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19ddccu;
}
