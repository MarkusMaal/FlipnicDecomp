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

// Function: entry_0019e0f0
// Address: 0x19e0f0 - 0x19e128
void entry_0019e0f0_0x19e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0f0_0x19e0f0");
#endif

    switch (ctx->pc) {
        case 0x19e10cu: goto label_19e10c;
        case 0x19e114u: goto label_19e114;
        default: break;
    }

    ctx->pc = 0x19e0f0u;

    // 0x19e0f0: 0xaea00328  sw          $zero, 0x328($s5)
    ctx->pc = 0x19e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 0));
    // 0x19e0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e0f8: 0xaea20320  sw          $v0, 0x320($s5)
    ctx->pc = 0x19e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 800), GPR_U32(ctx, 2));
    // 0x19e0fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e100: 0xaea20990  sw          $v0, 0x990($s5)
    ctx->pc = 0x19e100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 2));
    // 0x19e104: 0xc0678e8  jal         func_19E3A0
    ctx->pc = 0x19E104u;
    SET_GPR_U32(ctx, 31, 0x19E10Cu);
    ctx->pc = 0x19E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E104u;
    // 0x19e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E3A0u, 0x19E104u, 0x19E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E10Cu;
label_19e10c:
    // 0x19e10c: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x19E10Cu;
    SET_GPR_U32(ctx, 31, 0x19E114u);
    ctx->pc = 0x19E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E10Cu;
    // 0x19e110: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19E10Cu, 0x19E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E114u;
label_19e114:
    // 0x19e114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e118: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E118u;
    {
        const bool branch_taken_0x19e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19e118) {
            ctx->pc = 0x19E128u;
            return;
        }
    }
    ctx->pc = 0x19E120u;
    // 0x19e120: 0xc063e24  jal         func_18F890
    ctx->pc = 0x19E120u;
    SET_GPR_U32(ctx, 31, 0x19E128u);
    ctx->pc = 0x19E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E120u;
    // 0x19e124: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19E120u, 0x19E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E128u;
}
