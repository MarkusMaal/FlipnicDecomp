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

// Function: entry_00108e1c
// Address: 0x108e1c - 0x108e84
void entry_00108e1c_0x108e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e1c_0x108e1c");
#endif

    switch (ctx->pc) {
        case 0x108e30u: goto label_108e30;
        case 0x108e44u: goto label_108e44;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e6cu: goto label_108e6c;
        default: break;
    }

    ctx->pc = 0x108e1cu;

    // 0x108e1c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108e20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108e24: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108e28: 0xc0564c8  jal         func_159320
    ctx->pc = 0x108E28u;
    SET_GPR_U32(ctx, 31, 0x108E30u);
    ctx->pc = 0x108E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E28u;
    // 0x108e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x108E28u, 0x108E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E30u;
label_108e30:
    // 0x108e30: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e3c: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108E3Cu;
    SET_GPR_U32(ctx, 31, 0x108E44u);
    ctx->pc = 0x108E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E3Cu;
    // 0x108e40: 0x260702d0  addiu       $a3, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108E3Cu, 0x108E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108E44u;
    SET_GPR_U32(ctx, 31, 0x108E4Cu);
    ctx->pc = 0x108E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E44u;
    // 0x108e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108E44u, 0x108E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E4Cu;
label_108e4c:
    // 0x108e4c: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108e50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108e54: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108e64: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108E64u;
    SET_GPR_U32(ctx, 31, 0x108E6Cu);
    ctx->pc = 0x108E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E64u;
    // 0x108e68: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108E64u, 0x108E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E6Cu;
label_108e6c:
    // 0x108e6c: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108E6Cu;
    {
        const bool branch_taken_0x108e6c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108e6c) {
            ctx->pc = 0x108E84u;
            return;
        }
    }
    ctx->pc = 0x108E74u;
    // 0x108e74: 0x860201ec  lh          $v0, 0x1EC($s0)
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108e78: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108E78u;
    {
        const bool branch_taken_0x108e78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e78) {
            ctx->pc = 0x108E84u;
            return;
        }
    }
    ctx->pc = 0x108E80u;
    // 0x108e80: 0xa60201ee  sh          $v0, 0x1EE($s0)
    ctx->pc = 0x108e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x108e84u;
}
