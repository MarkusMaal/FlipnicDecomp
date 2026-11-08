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

// Function: main_menu_exit
// Address: 0x1bf510 - 0x1bf544
void main_menu_exit_0x1bf510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_exit_0x1bf510");
#endif

    switch (ctx->pc) {
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf540u: goto label_1bf540;
        default: break;
    }

    ctx->pc = 0x1bf510u;

    // 0x1bf510: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf518: 0x90a5006b  lbu         $a1, 0x6B($a1)
    ctx->pc = 0x1bf518u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 107)));
    // 0x1bf51c: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF51Cu;
    {
        const bool branch_taken_0x1bf51c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf51c) {
            ctx->pc = 0x1BF580u;
            return;
        }
    }
    ctx->pc = 0x1BF524u;
    // 0x1bf524: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BF524u;
    SET_GPR_U32(ctx, 31, 0x1BF52Cu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BF524u, 0x1BF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF52Cu;
label_1bf52c:
    // 0x1bf52c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf534: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x1bf538: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF538u;
    SET_GPR_U32(ctx, 31, 0x1BF540u);
    ctx->pc = 0x1BF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF538u;
    // 0x1bf53c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF538u, 0x1BF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF540u;
label_1bf540:
    // 0x1bf540: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1bf544u;
}
