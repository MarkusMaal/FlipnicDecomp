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

// Function: entry_00103cdc
// Address: 0x103cdc - 0x103d24
void entry_00103cdc_0x103cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103cdc_0x103cdc");
#endif

    switch (ctx->pc) {
        case 0x103ce4u: goto label_103ce4;
        case 0x103cf4u: goto label_103cf4;
        case 0x103d14u: goto label_103d14;
        default: break;
    }

    ctx->pc = 0x103cdcu;

    // 0x103cdc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103CDCu;
    SET_GPR_U32(ctx, 31, 0x103CE4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103CDCu, 0x103CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CE4u;
label_103ce4:
    // 0x103ce4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103CE4u;
    {
        const bool branch_taken_0x103ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CE4u;
        // 0x103ce8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ce4) {
            ctx->pc = 0x103D24u;
            return;
        }
    }
    ctx->pc = 0x103CECu;
    // 0x103cec: 0xc041860  jal         func_106180
    ctx->pc = 0x103CECu;
    SET_GPR_U32(ctx, 31, 0x103CF4u);
    ctx->pc = 0x103CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CECu;
    // 0x103cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103CECu, 0x103CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CF4u;
label_103cf4:
    // 0x103cf4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103cf8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103cfc: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103d00: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x103d04: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103d08: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x103d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x103d0c: 0xc041858  jal         func_106160
    ctx->pc = 0x103D0Cu;
    SET_GPR_U32(ctx, 31, 0x103D14u);
    ctx->pc = 0x103D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D0Cu;
    // 0x103d10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x103D0Cu, 0x103D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D14u;
label_103d14:
    // 0x103d14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103d18: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103d1c: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
    // 0x103d20: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103d24u;
}
