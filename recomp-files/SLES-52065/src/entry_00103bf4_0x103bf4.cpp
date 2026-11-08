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

// Function: entry_00103bf4
// Address: 0x103bf4 - 0x103c30
void entry_00103bf4_0x103bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103bf4_0x103bf4");
#endif

    switch (ctx->pc) {
        case 0x103bfcu: goto label_103bfc;
        case 0x103c0cu: goto label_103c0c;
        default: break;
    }

    ctx->pc = 0x103bf4u;

    // 0x103bf4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103BF4u;
    SET_GPR_U32(ctx, 31, 0x103BFCu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103BF4u, 0x103BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BFCu;
label_103bfc:
    // 0x103bfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103BFCu;
    {
        const bool branch_taken_0x103bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BFCu;
        // 0x103c00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bfc) {
            ctx->pc = 0x103C30u;
            return;
        }
    }
    ctx->pc = 0x103C04u;
    // 0x103c04: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103C04u;
    SET_GPR_U32(ctx, 31, 0x103C0Cu);
    ctx->pc = 0x103C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C04u;
    // 0x103c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103C04u, 0x103C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C0Cu;
label_103c0c:
    // 0x103c0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c10: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103c14: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x103c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x103c18: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
    // 0x103c1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c24: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103c28: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x103c2c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103c30u;
}
