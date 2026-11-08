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

// Function: FUN_001cebc0
// Address: 0x1cebc0 - 0x1cec68
void FUN_001cebc0_0x1cebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cebc0_0x1cebc0");
#endif

    switch (ctx->pc) {
        case 0x1cebd8u: goto label_1cebd8;
        case 0x1cebe8u: goto label_1cebe8;
        case 0x1cebf8u: goto label_1cebf8;
        case 0x1cec00u: goto label_1cec00;
        case 0x1cec0cu: goto label_1cec0c;
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec24u: goto label_1cec24;
        case 0x1cec34u: goto label_1cec34;
        case 0x1cec44u: goto label_1cec44;
        case 0x1cec58u: goto label_1cec58;
        default: break;
    }

    ctx->pc = 0x1cebc0u;

    // 0x1cebc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cebc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cebc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cebcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cebccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebd0: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1CEBD0u;
    SET_GPR_U32(ctx, 31, 0x1CEBD8u);
    ctx->pc = 0x1CEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBD0u;
    // 0x1cebd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1CEBD0u, 0x1CEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBD8u;
label_1cebd8:
    // 0x1cebd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CEBD8u;
    {
        const bool branch_taken_0x1cebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebd8) {
            ctx->pc = 0x1CEC58u;
            goto label_1cec58;
        }
    }
    ctx->pc = 0x1CEBE0u;
    // 0x1cebe0: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CEBE0u;
    SET_GPR_U32(ctx, 31, 0x1CEBE8u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CEBE0u, 0x1CEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBE8u;
label_1cebe8:
    // 0x1cebe8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEBE8u;
    {
        const bool branch_taken_0x1cebe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBE8u;
        // 0x1cebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebe8) {
            ctx->pc = 0x1CEC1Cu;
            goto label_1cec1c;
        }
    }
    ctx->pc = 0x1CEBF0u;
    // 0x1cebf0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CEBF0u;
    SET_GPR_U32(ctx, 31, 0x1CEBF8u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CEBF0u, 0x1CEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBF8u;
label_1cebf8:
    // 0x1cebf8: 0xc06d8c4  jal         func_1B6310
    ctx->pc = 0x1CEBF8u;
    SET_GPR_U32(ctx, 31, 0x1CEC00u);
    ctx->pc = 0x1CEBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBF8u;
    // 0x1cebfc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6310u, 0x1CEBF8u, 0x1CEC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC00u;
label_1cec00:
    // 0x1cec00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec04: 0xc06ddbc  jal         func_1B76F0
    ctx->pc = 0x1CEC04u;
    SET_GPR_U32(ctx, 31, 0x1CEC0Cu);
    ctx->pc = 0x1CEC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC04u;
    // 0x1cec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76F0u, 0x1CEC04u, 0x1CEC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC0Cu;
label_1cec0c:
    // 0x1cec0c: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1CEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC14u);
    ctx->pc = 0x1CEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC0Cu;
    // 0x1cec10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1CEC0Cu, 0x1CEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC14u;
label_1cec14:
    // 0x1cec14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEC14u;
    {
        const bool branch_taken_0x1cec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC14u;
        // 0x1cec18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec14) {
            ctx->pc = 0x1CEC5Cu;
            goto label_1cec5c;
        }
    }
    ctx->pc = 0x1CEC1Cu;
label_1cec1c:
    // 0x1cec1c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC24u);
    ctx->pc = 0x1CEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC1Cu;
    // 0x1cec20: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CEC1Cu, 0x1CEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC24u;
label_1cec24:
    // 0x1cec24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEC24u;
    {
        const bool branch_taken_0x1cec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC24u;
        // 0x1cec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec24) {
            ctx->pc = 0x1CEC3Cu;
            goto label_1cec3c;
        }
    }
    ctx->pc = 0x1CEC2Cu;
    // 0x1cec2c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC34u);
    ctx->pc = 0x1CEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC2Cu;
    // 0x1cec30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CEC2Cu, 0x1CEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC34u;
label_1cec34:
    // 0x1cec34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEC34u;
    {
        const bool branch_taken_0x1cec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec34) {
            ctx->pc = 0x1CEC58u;
            goto label_1cec58;
        }
    }
    ctx->pc = 0x1CEC3Cu;
label_1cec3c:
    // 0x1cec3c: 0xc060014  jal         func_180050
    ctx->pc = 0x1CEC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC44u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CEC3Cu, 0x1CEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC44u;
label_1cec44:
    // 0x1cec44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cec44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cec48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec4c: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x1cec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
    // 0x1cec50: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CEC50u;
    SET_GPR_U32(ctx, 31, 0x1CEC58u);
    ctx->pc = 0x1CEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC50u;
    // 0x1cec54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CEC50u, 0x1CEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC58u;
label_1cec58:
    // 0x1cec58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cec5c:
    // 0x1cec5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cec5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC60u;
        // 0x1cec64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC68u;
}
