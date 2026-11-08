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

// Function: entry_00108be0
// Address: 0x108be0 - 0x108c48
void entry_00108be0_0x108be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108be0_0x108be0");
#endif

    switch (ctx->pc) {
        case 0x108bf4u: goto label_108bf4;
        case 0x108c08u: goto label_108c08;
        case 0x108c10u: goto label_108c10;
        case 0x108c30u: goto label_108c30;
        default: break;
    }

    ctx->pc = 0x108be0u;

    // 0x108be0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108be4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108be8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108bec: 0xc0564c8  jal         func_159320
    ctx->pc = 0x108BECu;
    SET_GPR_U32(ctx, 31, 0x108BF4u);
    ctx->pc = 0x108BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BECu;
    // 0x108bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x108BECu, 0x108BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BF4u;
label_108bf4:
    // 0x108bf4: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c00: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108C00u;
    SET_GPR_U32(ctx, 31, 0x108C08u);
    ctx->pc = 0x108C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C00u;
    // 0x108c04: 0x260702d0  addiu       $a3, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108C00u, 0x108C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C08u;
label_108c08:
    // 0x108c08: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108C08u;
    SET_GPR_U32(ctx, 31, 0x108C10u);
    ctx->pc = 0x108C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C08u;
    // 0x108c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108C08u, 0x108C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C10u;
label_108c10:
    // 0x108c10: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108c14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108c18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108c28: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108C28u;
    SET_GPR_U32(ctx, 31, 0x108C30u);
    ctx->pc = 0x108C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C28u;
    // 0x108c2c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108C28u, 0x108C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C30u;
label_108c30:
    // 0x108c30: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108C30u;
    {
        const bool branch_taken_0x108c30 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108c30) {
            ctx->pc = 0x108C48u;
            return;
        }
    }
    ctx->pc = 0x108C38u;
    // 0x108c38: 0x860301ec  lh          $v1, 0x1EC($s0)
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108c3c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x108C3Cu;
    {
        const bool branch_taken_0x108c3c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x108c3c) {
            ctx->pc = 0x108C48u;
            return;
        }
    }
    ctx->pc = 0x108C44u;
    // 0x108c44: 0xa60301ee  sh          $v1, 0x1EE($s0)
    ctx->pc = 0x108c44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x108c48u;
}
