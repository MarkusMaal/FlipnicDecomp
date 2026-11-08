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

// Function: entry_001b05e4
// Address: 0x1b05e4 - 0x1b0638
void entry_001b05e4_0x1b05e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b05e4_0x1b05e4");
#endif

    switch (ctx->pc) {
        case 0x1b05ecu: goto label_1b05ec;
        case 0x1b05f4u: goto label_1b05f4;
        case 0x1b061cu: goto label_1b061c;
        case 0x1b0630u: goto label_1b0630;
        default: break;
    }

    ctx->pc = 0x1b05e4u;

    // 0x1b05e4: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1B05E4u;
    SET_GPR_U32(ctx, 31, 0x1B05ECu);
    ctx->pc = 0x1B05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05E4u;
    // 0x1b05e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1B05E4u, 0x1B05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05ECu;
label_1b05ec:
    // 0x1b05ec: 0xc06be68  jal         func_1AF9A0
    ctx->pc = 0x1B05ECu;
    SET_GPR_U32(ctx, 31, 0x1B05F4u);
    ctx->pc = 0x1B05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05ECu;
    // 0x1b05f0: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x1B05ECu, 0x1B05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05F4u;
label_1b05f4:
    // 0x1b05f4: 0x928202f2  lbu         $v0, 0x2F2($s4)
    ctx->pc = 0x1b05f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 754)));
    // 0x1b05f8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1B05F8u;
    {
        const bool branch_taken_0x1b05f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b05f8) {
            ctx->pc = 0x1B07C8u;
            return;
        }
    }
    ctx->pc = 0x1B0600u;
    // 0x1b0600: 0x8e8602e0  lw          $a2, 0x2E0($s4)
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x1b0604: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b0608: 0x8e8702e4  lw          $a3, 0x2E4($s4)
    ctx->pc = 0x1b0608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x1b060c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0610: 0x8e8802e8  lw          $t0, 0x2E8($s4)
    ctx->pc = 0x1b0610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 744)));
    // 0x1b0614: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B0614u;
    SET_GPR_U32(ctx, 31, 0x1B061Cu);
    ctx->pc = 0x1B0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0614u;
    // 0x1b0618: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0614u, 0x1B061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B061Cu;
label_1b061c:
    // 0x1b061c: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b061cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b0620: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x1b0624: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b0628: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1B0628u;
    SET_GPR_U32(ctx, 31, 0x1B0630u);
    ctx->pc = 0x1B062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0628u;
    // 0x1b062c: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0628u, 0x1B0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0630u;
label_1b0630:
    // 0x1b0630: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1B0630u;
    {
        const bool branch_taken_0x1b0630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0630u;
        // 0x1b0634: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0630) {
            ctx->pc = 0x1B07ACu;
            return;
        }
    }
    ctx->pc = 0x1B0638u;
}
