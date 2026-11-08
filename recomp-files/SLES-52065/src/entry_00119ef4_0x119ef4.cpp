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

// Function: entry_00119ef4
// Address: 0x119ef4 - 0x119f1c
void entry_00119ef4_0x119ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119ef4_0x119ef4");
#endif

    switch (ctx->pc) {
        case 0x119f04u: goto label_119f04;
        case 0x119f14u: goto label_119f14;
        default: break;
    }

    ctx->pc = 0x119ef4u;

    // 0x119ef4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119EF4u;
    {
        const bool branch_taken_0x119ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119ef4) {
            ctx->pc = 0x119F1Cu;
            return;
        }
    }
    ctx->pc = 0x119EFCu;
    // 0x119efc: 0xc04b220  jal         func_12C880
    ctx->pc = 0x119EFCu;
    SET_GPR_U32(ctx, 31, 0x119F04u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x119EFCu, 0x119F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F04u;
label_119f04:
    // 0x119f04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f0c: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x119F0Cu;
    SET_GPR_U32(ctx, 31, 0x119F14u);
    ctx->pc = 0x119F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F0Cu;
    // 0x119f10: 0x24a5e610  addiu       $a1, $a1, -0x19F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x119F0Cu, 0x119F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F14u;
label_119f14:
    // 0x119f14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119F14u;
    {
        const bool branch_taken_0x119f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f14) {
            ctx->pc = 0x119F40u;
            return;
        }
    }
    ctx->pc = 0x119F1Cu;
}
