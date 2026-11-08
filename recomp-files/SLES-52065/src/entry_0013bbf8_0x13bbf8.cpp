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

// Function: entry_0013bbf8
// Address: 0x13bbf8 - 0x13bc30
void entry_0013bbf8_0x13bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bbf8_0x13bbf8");
#endif

    switch (ctx->pc) {
        case 0x13bc00u: goto label_13bc00;
        case 0x13bc24u: goto label_13bc24;
        case 0x13bc2cu: goto label_13bc2c;
        default: break;
    }

    ctx->pc = 0x13bbf8u;

    // 0x13bbf8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13BBF8u;
    SET_GPR_U32(ctx, 31, 0x13BC00u);
    ctx->pc = 0x13BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBF8u;
    // 0x13bbfc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13BBF8u, 0x13BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC00u;
label_13bc00:
    // 0x13bc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc04: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BC04u;
    {
        const bool branch_taken_0x13bc04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC04u;
        // 0x13bc08: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc04) {
            ctx->pc = 0x13BC30u;
            return;
        }
    }
    ctx->pc = 0x13BC0Cu;
    // 0x13bc0c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13bc10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13bc14: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13bc18: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13bc1c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BC1Cu;
    SET_GPR_U32(ctx, 31, 0x13BC24u);
    ctx->pc = 0x13BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC1Cu;
    // 0x13bc20: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BC1Cu, 0x13BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC24u;
label_13bc24:
    // 0x13bc24: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BC24u;
    SET_GPR_U32(ctx, 31, 0x13BC2Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BC24u, 0x13BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC2Cu;
label_13bc2c:
    // 0x13bc2c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x13bc30u;
}
