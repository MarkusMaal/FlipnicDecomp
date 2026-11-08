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

// Function: entry_001a1b00
// Address: 0x1a1b00 - 0x1a1b3c
void entry_001a1b00_0x1a1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b00_0x1a1b00");
#endif

    switch (ctx->pc) {
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b24u: goto label_1a1b24;
        default: break;
    }

    ctx->pc = 0x1a1b00u;

    // 0x1a1b00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b04: 0xde8606b8  ld          $a2, 0x6B8($s4)
    ctx->pc = 0x1a1b04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 1720)));
    // 0x1a1b08: 0xc0696fc  jal         func_1A5BF0
    ctx->pc = 0x1A1B08u;
    SET_GPR_U32(ctx, 31, 0x1A1B10u);
    ctx->pc = 0x1A1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B08u;
    // 0x1a1b0c: 0x268408c0  addiu       $a0, $s4, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BF0u, 0x1A1B08u, 0x1A1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B10u;
label_1a1b10:
    // 0x1a1b10: 0x8e8506b8  lw          $a1, 0x6B8($s4)
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1720)));
    // 0x1a1b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a1b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b1c: 0xc064b08  jal         func_192C20
    ctx->pc = 0x1A1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B24u);
    ctx->pc = 0x1A1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B1Cu;
    // 0x1a1b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A1B1Cu, 0x1A1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a1b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1B28u;
    {
        const bool branch_taken_0x1a1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b28) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B30u;
    // 0x1a1b30: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1a1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a1b34: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A1B34u;
    SET_GPR_U32(ctx, 31, 0x1A1B3Cu);
    ctx->pc = 0x1A1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B34u;
    // 0x1a1b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A1B34u, 0x1A1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B3Cu;
}
