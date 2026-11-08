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

// Function: entry_001b5ce0
// Address: 0x1b5ce0 - 0x1b5d40
void entry_001b5ce0_0x1b5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ce0_0x1b5ce0");
#endif

    switch (ctx->pc) {
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d34u: goto label_1b5d34;
        default: break;
    }

    ctx->pc = 0x1b5ce0u;

label_1b5ce0:
    // 0x1b5ce0: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5CE0u;
    SET_GPR_U32(ctx, 31, 0x1B5CE8u);
    ctx->pc = 0x1B5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CE0u;
    // 0x1b5ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5CE0u, 0x1B5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE8u;
label_1b5ce8:
    // 0x1b5ce8: 0x0  nop
    ctx->pc = 0x1b5ce8u;
    // NOP
    // 0x1b5cec: 0x0  nop
    ctx->pc = 0x1b5cecu;
    // NOP
    // 0x1b5cf0: 0x0  nop
    ctx->pc = 0x1b5cf0u;
    // NOP
    // 0x1b5cf4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5CF4u;
    {
        const bool branch_taken_0x1b5cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cf4) {
            ctx->pc = 0x1B5CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5ce0;
        }
    }
    ctx->pc = 0x1B5CFCu;
    // 0x1b5cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5d00: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5d04: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5d08: 0xa022f270  sb          $v0, -0xD90($at)
    ctx->pc = 0x1b5d08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F270u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F270u, _value); } while (0);
    // 0x1b5d0c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D14u);
    ctx->pc = 0x1B5D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D0Cu;
    // 0x1b5d10: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5D0Cu, 0x1B5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D14u;
label_1b5d14:
    // 0x1b5d14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5d18: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x1b5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1b5d1c: 0x24a50e38  addiu       $a1, $a1, 0xE38
    ctx->pc = 0x1b5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3640));
    // 0x1b5d20: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5D20u;
    SET_GPR_U32(ctx, 31, 0x1B5D28u);
    ctx->pc = 0x1B5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D20u;
    // 0x1b5d24: 0x27a60118  addiu       $a2, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5D20u, 0x1B5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D28u;
label_1b5d28:
    // 0x1b5d28: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5d2c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D34u);
    ctx->pc = 0x1B5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D2Cu;
    // 0x1b5d30: 0x27a5011c  addiu       $a1, $sp, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5D2Cu, 0x1B5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D34u;
label_1b5d34:
    // 0x1b5d34: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x1b5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1b5d38: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5D38u;
    SET_GPR_U32(ctx, 31, 0x1B5D40u);
    ctx->pc = 0x1B5D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D38u;
    // 0x1b5d3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5D38u, 0x1B5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D40u;
}
