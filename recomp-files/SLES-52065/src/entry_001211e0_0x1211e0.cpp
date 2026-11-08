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

// Function: entry_001211e0
// Address: 0x1211e0 - 0x121220
void entry_001211e0_0x1211e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211e0_0x1211e0");
#endif

    switch (ctx->pc) {
        case 0x121210u: goto label_121210;
        case 0x121218u: goto label_121218;
        default: break;
    }

    ctx->pc = 0x1211e0u;

    // 0x1211e0: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1211e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1211e4: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1211e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1211ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1211ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1211f0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1211F0u;
    {
        const bool branch_taken_0x1211f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211F0u;
        // 0x1211f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211f0) {
            ctx->pc = 0x12127Cu;
            return;
        }
    }
    ctx->pc = 0x1211F8u;
    // 0x1211f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1211f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1211fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121200: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x121204: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121208: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x121208u;
    SET_GPR_U32(ctx, 31, 0x121210u);
    ctx->pc = 0x12120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121208u;
    // 0x12120c: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121208u, 0x121210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121210u;
label_121210:
    // 0x121210: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121210u;
    SET_GPR_U32(ctx, 31, 0x121218u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121210u, 0x121218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121218u;
label_121218:
    // 0x121218: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121218) {
            ctx->pc = 0x121278u;
            return;
        }
    }
    ctx->pc = 0x121220u;
}
