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

// Function: entry_00108040
// Address: 0x108040 - 0x10808c
void entry_00108040_0x108040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108040_0x108040");
#endif

    switch (ctx->pc) {
        case 0x108050u: goto label_108050;
        case 0x108064u: goto label_108064;
        case 0x108074u: goto label_108074;
        case 0x10807cu: goto label_10807c;
        default: break;
    }

    ctx->pc = 0x108040u;

    // 0x108040: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x108040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x108044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108048: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x108048u;
    SET_GPR_U32(ctx, 31, 0x108050u);
    ctx->pc = 0x10804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108048u;
    // 0x10804c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x108048u, 0x108050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108050u;
label_108050:
    // 0x108050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108054: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x108054u;
    {
        const bool branch_taken_0x108054 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x108054) {
            ctx->pc = 0x10808Cu;
            return;
        }
    }
    ctx->pc = 0x10805Cu;
    // 0x10805c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x10805Cu;
    SET_GPR_U32(ctx, 31, 0x108064u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x10805Cu, 0x108064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x108068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10806c: 0xc062b9c  jal         func_18AE70
    ctx->pc = 0x10806Cu;
    SET_GPR_U32(ctx, 31, 0x108074u);
    ctx->pc = 0x108070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10806Cu;
    // 0x108070: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE70u, 0x10806Cu, 0x108074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108074u;
label_108074:
    // 0x108074: 0xc062d50  jal         func_18B540
    ctx->pc = 0x108074u;
    SET_GPR_U32(ctx, 31, 0x10807Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x108074u, 0x10807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10807Cu;
label_10807c:
    // 0x10807c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x10807cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x108080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x108080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108084: 0xc062ba0  jal         func_18AE80
    ctx->pc = 0x108084u;
    SET_GPR_U32(ctx, 31, 0x10808Cu);
    ctx->pc = 0x108088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108084u;
    // 0x108088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE80u, 0x108084u, 0x10808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10808Cu;
}
