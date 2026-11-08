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

// Function: entry_001fc8dc
// Address: 0x1fc8dc - 0x1fc920
void entry_001fc8dc_0x1fc8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc8dc_0x1fc8dc");
#endif

    switch (ctx->pc) {
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc918u: goto label_1fc918;
        default: break;
    }

    ctx->pc = 0x1fc8dcu;

    // 0x1fc8dc: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FC8DCu;
    {
        const bool branch_taken_0x1fc8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8DCu;
        // 0x1fc8e0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8dc) {
            ctx->pc = 0x1FC9C8u;
            return;
        }
    }
    ctx->pc = 0x1FC8E4u;
    // 0x1fc8e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc8e8: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc8ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8f0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fc8f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc8f8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fc8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fc8fc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fc900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc904: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC904u;
    SET_GPR_U32(ctx, 31, 0x1FC90Cu);
    ctx->pc = 0x1FC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC904u;
    // 0x1fc908: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC904u, 0x1FC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC90Cu;
label_1fc90c:
    // 0x1fc90c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc910: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC910u;
    SET_GPR_U32(ctx, 31, 0x1FC918u);
    ctx->pc = 0x1FC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC910u;
    // 0x1fc914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC910u, 0x1FC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC918u;
label_1fc918:
    // 0x1fc918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FC918u;
    {
        const bool branch_taken_0x1fc918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC918u;
        // 0x1fc91c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc918) {
            ctx->pc = 0x1FC948u;
            return;
        }
    }
    ctx->pc = 0x1FC920u;
}
