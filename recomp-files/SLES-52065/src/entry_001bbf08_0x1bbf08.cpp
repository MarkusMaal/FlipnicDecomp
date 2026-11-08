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

// Function: entry_001bbf08
// Address: 0x1bbf08 - 0x1bbf38
void entry_001bbf08_0x1bbf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbf08_0x1bbf08");
#endif

    switch (ctx->pc) {
        case 0x1bbf1cu: goto label_1bbf1c;
        default: break;
    }

    ctx->pc = 0x1bbf08u;

    // 0x1bbf08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf0c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf10: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbf14: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBF14u;
    SET_GPR_U32(ctx, 31, 0x1BBF1Cu);
    ctx->pc = 0x1BBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF14u;
    // 0x1bbf18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBF14u, 0x1BBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF1Cu;
label_1bbf1c:
    // 0x1bbf1c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF1Cu;
    {
        const bool branch_taken_0x1bbf1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf1c) {
            ctx->pc = 0x1BBF38u;
            return;
        }
    }
    ctx->pc = 0x1BBF24u;
    // 0x1bbf24: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf28: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1bbf28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1bbf2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bbf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf30: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1BBF30u;
    SET_GPR_U32(ctx, 31, 0x1BBF38u);
    ctx->pc = 0x1BBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF30u;
    // 0x1bbf34: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1BBF30u, 0x1BBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF38u;
}
