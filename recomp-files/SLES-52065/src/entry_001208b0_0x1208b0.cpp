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

// Function: entry_001208b0
// Address: 0x1208b0 - 0x1208e4
void entry_001208b0_0x1208b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001208b0_0x1208b0");
#endif

    switch (ctx->pc) {
        case 0x1208dcu: goto label_1208dc;
        default: break;
    }

    ctx->pc = 0x1208b0u;

    // 0x1208b0: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1208b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
    // 0x1208b4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1208b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1208b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1208b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1208bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1208bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1208c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1208C0u;
    {
        const bool branch_taken_0x1208c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C0u;
        // 0x1208c4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208c0) {
            ctx->pc = 0x1208E4u;
            return;
        }
    }
    ctx->pc = 0x1208C8u;
    // 0x1208c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1208cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1208d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1208d4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1208D4u;
    SET_GPR_U32(ctx, 31, 0x1208DCu);
    ctx->pc = 0x1208D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208D4u;
    // 0x1208d8: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1208D4u, 0x1208DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208DCu;
label_1208dc:
    // 0x1208dc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1208DCu;
    SET_GPR_U32(ctx, 31, 0x1208E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1208DCu, 0x1208E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208E4u;
}
