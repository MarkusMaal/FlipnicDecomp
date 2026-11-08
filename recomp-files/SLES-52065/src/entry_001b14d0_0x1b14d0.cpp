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

// Function: entry_001b14d0
// Address: 0x1b14d0 - 0x1b1510
void entry_001b14d0_0x1b14d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b14d0_0x1b14d0");
#endif

    switch (ctx->pc) {
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b1500u: goto label_1b1500;
        default: break;
    }

    ctx->pc = 0x1b14d0u;

    // 0x1b14d0: 0xa28002f1  sb          $zero, 0x2F1($s4)
    ctx->pc = 0x1b14d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 753), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b14d4: 0x8e4728e8  lw          $a3, 0x28E8($s2)
    ctx->pc = 0x1b14d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10472)));
    // 0x1b14d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b14d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14dc: 0x34058500  ori         $a1, $zero, 0x8500
    ctx->pc = 0x1b14dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x1b14e0: 0x24067340  addiu       $a2, $zero, 0x7340
    ctx->pc = 0x1b14e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
    // 0x1b14e4: 0xc06bfc4  jal         func_1AFF10
    ctx->pc = 0x1B14E4u;
    SET_GPR_U32(ctx, 31, 0x1B14ECu);
    ctx->pc = 0x1B14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14E4u;
    // 0x1b14e8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF10u, 0x1B14E4u, 0x1B14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b14f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B14F0u;
    {
        const bool branch_taken_0x1b14f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b14f0) {
            ctx->pc = 0x1B1510u;
            return;
        }
    }
    ctx->pc = 0x1B14F8u;
    // 0x1b14f8: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x1B14F8u;
    SET_GPR_U32(ctx, 31, 0x1B1500u);
    ctx->pc = 0x1B14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14F8u;
    // 0x1b14fc: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B14F8u, 0x1B1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1500u;
label_1b1500:
    // 0x1b1500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1500u;
    {
        const bool branch_taken_0x1b1500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1500u;
        // 0x1b1504: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1500) {
            ctx->pc = 0x1B1514u;
            return;
        }
    }
    ctx->pc = 0x1B1508u;
    // 0x1b1508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1508u;
    {
        const bool branch_taken_0x1b1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1508u;
        // 0x1b150c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1508) {
            ctx->pc = 0x1B151Cu;
            return;
        }
    }
    ctx->pc = 0x1B1510u;
}
