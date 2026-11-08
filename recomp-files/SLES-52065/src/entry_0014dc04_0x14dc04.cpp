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

// Function: entry_0014dc04
// Address: 0x14dc04 - 0x14dc38
void entry_0014dc04_0x14dc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc04_0x14dc04");
#endif

    switch (ctx->pc) {
        case 0x14dc10u: goto label_14dc10;
        case 0x14dc30u: goto label_14dc30;
        default: break;
    }

    ctx->pc = 0x14dc04u;

    // 0x14dc04: 0x0  nop
    ctx->pc = 0x14dc04u;
    // NOP
    // 0x14dc08: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14DC08u;
    SET_GPR_U32(ctx, 31, 0x14DC10u);
    ctx->pc = 0x14DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC08u;
    // 0x14dc0c: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14DC08u, 0x14DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC10u;
label_14dc10:
    // 0x14dc10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc14: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DC14u;
    {
        const bool branch_taken_0x14dc14 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC14u;
        // 0x14dc18: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc14) {
            ctx->pc = 0x14DC38u;
            return;
        }
    }
    ctx->pc = 0x14DC1Cu;
    // 0x14dc1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14dc20: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14dc24: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14dc28: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14DC28u;
    SET_GPR_U32(ctx, 31, 0x14DC30u);
    ctx->pc = 0x14DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC28u;
    // 0x14dc2c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14DC28u, 0x14DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC30u;
label_14dc30:
    // 0x14dc30: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14DC30u;
    SET_GPR_U32(ctx, 31, 0x14DC38u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14DC30u, 0x14DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC38u;
}
