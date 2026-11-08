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

// Function: caseD_2a
// Address: 0x1c4024 - 0x1c4064
void caseD_2a_0x1c4024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2a_0x1c4024");
#endif

    switch (ctx->pc) {
        case 0x1c4030u: goto label_1c4030;
        case 0x1c403cu: goto label_1c403c;
        case 0x1c4048u: goto label_1c4048;
        case 0x1c4058u: goto label_1c4058;
        default: break;
    }

    ctx->pc = 0x1c4024u;

    // 0x1c4024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4028: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4028u;
    SET_GPR_U32(ctx, 31, 0x1C4030u);
    ctx->pc = 0x1C402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4028u;
    // 0x1c402c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4028u, 0x1C4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4030u;
label_1c4030:
    // 0x1c4030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4034: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4034u;
    SET_GPR_U32(ctx, 31, 0x1C403Cu);
    ctx->pc = 0x1C4038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4034u;
    // 0x1c4038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4034u, 0x1C403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C403Cu;
label_1c403c:
    // 0x1c403c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4040: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4040u;
    SET_GPR_U32(ctx, 31, 0x1C4048u);
    ctx->pc = 0x1C4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4040u;
    // 0x1c4044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4040u, 0x1C4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4048u;
label_1c4048:
    // 0x1c4048: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c404c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c4050: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C4050u;
    SET_GPR_U32(ctx, 31, 0x1C4058u);
    ctx->pc = 0x1C4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4050u;
    // 0x1c4054: 0xac20f5e0  sw          $zero, -0xA20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964704), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C4050u, 0x1C4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4058u;
label_1c4058:
    // 0x1c4058: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c405c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1C405Cu;
    {
        const bool branch_taken_0x1c405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C405Cu;
        // 0x1c4060: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c405c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4064u;
}
