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

// Function: entry_00103b04
// Address: 0x103b04 - 0x103b50
void entry_00103b04_0x103b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103b04_0x103b04");
#endif

    switch (ctx->pc) {
        case 0x103b0cu: goto label_103b0c;
        case 0x103b1cu: goto label_103b1c;
        case 0x103b3cu: goto label_103b3c;
        default: break;
    }

    ctx->pc = 0x103b04u;

    // 0x103b04: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103B04u;
    SET_GPR_U32(ctx, 31, 0x103B0Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103B04u, 0x103B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B0Cu;
label_103b0c:
    // 0x103b0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x103B0Cu;
    {
        const bool branch_taken_0x103b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B0Cu;
        // 0x103b10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b0c) {
            ctx->pc = 0x103B50u;
            return;
        }
    }
    ctx->pc = 0x103B14u;
    // 0x103b14: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103B14u;
    SET_GPR_U32(ctx, 31, 0x103B1Cu);
    ctx->pc = 0x103B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B14u;
    // 0x103b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103B14u, 0x103B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B1Cu;
label_103b1c:
    // 0x103b1c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b24: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103b28: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103b2c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b30: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103b34: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103B34u;
    SET_GPR_U32(ctx, 31, 0x103B3Cu);
    ctx->pc = 0x103B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B34u;
    // 0x103b38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103B34u, 0x103B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B3Cu;
label_103b3c:
    // 0x103b3c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x103b44: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x103b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x103b48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b4c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x103b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->pc = 0x103b50u;
}
