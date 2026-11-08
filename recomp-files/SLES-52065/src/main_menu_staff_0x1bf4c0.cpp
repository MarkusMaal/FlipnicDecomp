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

// Function: main_menu_staff
// Address: 0x1bf4c0 - 0x1bf504
void main_menu_staff_0x1bf4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_staff_0x1bf4c0");
#endif

    switch (ctx->pc) {
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf4e4u: goto label_1bf4e4;
        case 0x1bf4f8u: goto label_1bf4f8;
        default: break;
    }

    ctx->pc = 0x1bf4c0u;

    // 0x1bf4c0: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1bf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf4c8: 0x90a5006b  lbu         $a1, 0x6B($a1)
    ctx->pc = 0x1bf4c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 107)));
    // 0x1bf4cc: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF4CCu;
    {
        const bool branch_taken_0x1bf4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf4cc) {
            ctx->pc = 0x1BF580u;
            return;
        }
    }
    ctx->pc = 0x1BF4D4u;
    // 0x1bf4d4: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BF4D4u;
    SET_GPR_U32(ctx, 31, 0x1BF4DCu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BF4D4u, 0x1BF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4DCu;
label_1bf4dc:
    // 0x1bf4dc: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1BF4DCu;
    SET_GPR_U32(ctx, 31, 0x1BF4E4u);
    ctx->pc = 0x1BF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4DCu;
    // 0x1bf4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1BF4DCu, 0x1BF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4E4u;
label_1bf4e4:
    // 0x1bf4e4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4ec: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x1bf4f0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF4F0u;
    SET_GPR_U32(ctx, 31, 0x1BF4F8u);
    ctx->pc = 0x1BF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4F0u;
    // 0x1bf4f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF4F0u, 0x1BF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4F8u;
label_1bf4f8:
    // 0x1bf4f8: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1bf4fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF4FCu;
    {
        const bool branch_taken_0x1bf4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4FCu;
        // 0x1bf500: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4fc) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF504u;
}
