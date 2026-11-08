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

// Function: entry_00104a14
// Address: 0x104a14 - 0x104a50
void entry_00104a14_0x104a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a14_0x104a14");
#endif

    switch (ctx->pc) {
        case 0x104a1cu: goto label_104a1c;
        case 0x104a2cu: goto label_104a2c;
        default: break;
    }

    ctx->pc = 0x104a14u;

    // 0x104a14: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104A14u;
    SET_GPR_U32(ctx, 31, 0x104A1Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104A14u, 0x104A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A1Cu;
label_104a1c:
    // 0x104a1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A1Cu;
        // 0x104a20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x104A50u;
            return;
        }
    }
    ctx->pc = 0x104A24u;
    // 0x104a24: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104A24u;
    SET_GPR_U32(ctx, 31, 0x104A2Cu);
    ctx->pc = 0x104A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A24u;
    // 0x104a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104A24u, 0x104A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A2Cu;
label_104a2c:
    // 0x104a2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a30: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104a34: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x104a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x104a38: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x104a3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104a40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104a44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a48: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x104a4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104a50u;
}
