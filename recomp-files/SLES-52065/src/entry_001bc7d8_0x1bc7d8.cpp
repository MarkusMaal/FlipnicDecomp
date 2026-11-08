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

// Function: entry_001bc7d8
// Address: 0x1bc7d8 - 0x1bc818
void entry_001bc7d8_0x1bc7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc7d8_0x1bc7d8");
#endif

    switch (ctx->pc) {
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc808u: goto label_1bc808;
        default: break;
    }

    ctx->pc = 0x1bc7d8u;

    // 0x1bc7d8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc7dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1bc7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc7e0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BC7E0u;
    {
        const bool branch_taken_0x1bc7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc7e0) {
            ctx->pc = 0x1BC85Cu;
            return;
        }
    }
    ctx->pc = 0x1BC7E8u;
    // 0x1bc7e8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1bc7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc7ec: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1bc7f0: 0xc080702  jal         func_201C08
    ctx->pc = 0x1BC7F0u;
    SET_GPR_U32(ctx, 31, 0x1BC7F8u);
    ctx->pc = 0x1BC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7F0u;
    // 0x1bc7f4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1BC7F0u, 0x1BC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7F8u;
label_1bc7f8:
    // 0x1bc7f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc7fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1bc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bc800: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1BC800u;
    SET_GPR_U32(ctx, 31, 0x1BC808u);
    ctx->pc = 0x1BC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC800u;
    // 0x1bc804: 0x24a511c0  addiu       $a1, $a1, 0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1BC800u, 0x1BC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC808u;
label_1bc808:
    // 0x1bc808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC808u;
    {
        const bool branch_taken_0x1bc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC808u;
        // 0x1bc80c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc808) {
            ctx->pc = 0x1BC818u;
            return;
        }
    }
    ctx->pc = 0x1BC810u;
    // 0x1bc810: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC810u;
    {
        const bool branch_taken_0x1bc810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC810u;
        // 0x1bc814: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc810) {
            ctx->pc = 0x1BC888u;
            return;
        }
    }
    ctx->pc = 0x1BC818u;
}
