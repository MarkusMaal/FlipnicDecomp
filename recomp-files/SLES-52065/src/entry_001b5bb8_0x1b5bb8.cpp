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

// Function: entry_001b5bb8
// Address: 0x1b5bb8 - 0x1b5c54
void entry_001b5bb8_0x1b5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5bb8_0x1b5bb8");
#endif

    switch (ctx->pc) {
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c4cu: goto label_1b5c4c;
        default: break;
    }

    ctx->pc = 0x1b5bb8u;

label_1b5bb8:
    // 0x1b5bb8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5BB8u;
    SET_GPR_U32(ctx, 31, 0x1B5BC0u);
    ctx->pc = 0x1B5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BB8u;
    // 0x1b5bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5BB8u, 0x1B5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BC0u;
label_1b5bc0:
    // 0x1b5bc0: 0x0  nop
    ctx->pc = 0x1b5bc0u;
    // NOP
    // 0x1b5bc4: 0x0  nop
    ctx->pc = 0x1b5bc4u;
    // NOP
    // 0x1b5bc8: 0x0  nop
    ctx->pc = 0x1b5bc8u;
    // NOP
    // 0x1b5bcc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5BCCu;
    {
        const bool branch_taken_0x1b5bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bcc) {
            ctx->pc = 0x1B5BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5bb8;
        }
    }
    ctx->pc = 0x1B5BD4u;
    // 0x1b5bd4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b5bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b5bd8: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1b5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1b5bdc: 0x9042282b  lbu         $v0, 0x282B($v0)
    ctx->pc = 0x1b5bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
    // 0x1b5be0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B5BE0u;
    {
        const bool branch_taken_0x1b5be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BE0u;
        // 0x1b5be4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5be0) {
            ctx->pc = 0x1B5C54u;
            return;
        }
    }
    ctx->pc = 0x1B5BE8u;
    // 0x1b5be8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5bec: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x1b5becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1b5bf0: 0x24a50e08  addiu       $a1, $a1, 0xE08
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3592));
    // 0x1b5bf4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5BF4u;
    SET_GPR_U32(ctx, 31, 0x1B5BFCu);
    ctx->pc = 0x1B5BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BF4u;
    // 0x1b5bf8: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5BF4u, 0x1B5BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BFCu;
label_1b5bfc:
    // 0x1b5bfc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5c00: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5C00u;
    SET_GPR_U32(ctx, 31, 0x1B5C08u);
    ctx->pc = 0x1B5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C00u;
    // 0x1b5c04: 0x27a500fc  addiu       $a1, $sp, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5C00u, 0x1B5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C08u;
label_1b5c08:
    // 0x1b5c08: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x1b5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1b5c0c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C14u);
    ctx->pc = 0x1B5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C0Cu;
    // 0x1b5c10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5C0Cu, 0x1B5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C14u;
label_1b5c14:
    // 0x1b5c14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5c18: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1b5c1c: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x1b5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x1b5c20: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5C20u;
    SET_GPR_U32(ctx, 31, 0x1B5C28u);
    ctx->pc = 0x1B5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C20u;
    // 0x1b5c24: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5C20u, 0x1B5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C28u;
label_1b5c28:
    // 0x1b5c28: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5c2c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C34u);
    ctx->pc = 0x1B5C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C2Cu;
    // 0x1b5c30: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5C2Cu, 0x1B5C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C34u;
label_1b5c34:
    // 0x1b5c34: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1b5c38: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5C38u;
    SET_GPR_U32(ctx, 31, 0x1B5C40u);
    ctx->pc = 0x1B5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C38u;
    // 0x1b5c3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5C38u, 0x1B5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C40u;
label_1b5c40:
    // 0x1b5c40: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5c44: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5C44u;
    SET_GPR_U32(ctx, 31, 0x1B5C4Cu);
    ctx->pc = 0x1B5C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C44u;
    // 0x1b5c48: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5C44u, 0x1B5C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C4Cu;
label_1b5c4c:
    // 0x1b5c4c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B5C4Cu;
    {
        const bool branch_taken_0x1b5c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c4c) {
            ctx->pc = 0x1B5D40u;
            return;
        }
    }
    ctx->pc = 0x1B5C54u;
}
