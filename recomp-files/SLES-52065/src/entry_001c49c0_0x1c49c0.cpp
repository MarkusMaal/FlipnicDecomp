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

// Function: entry_001c49c0
// Address: 0x1c49c0 - 0x1c4a48
void entry_001c49c0_0x1c49c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c49c0_0x1c49c0");
#endif

    switch (ctx->pc) {
        case 0x1c49dcu: goto label_1c49dc;
        case 0x1c49ecu: goto label_1c49ec;
        case 0x1c4a08u: goto label_1c4a08;
        case 0x1c4a14u: goto label_1c4a14;
        case 0x1c4a2cu: goto label_1c4a2c;
        default: break;
    }

    ctx->pc = 0x1c49c0u;

    // 0x1c49c0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c49c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c49c4: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x1c49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x1c49c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c49cc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c49d0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c49d4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C49D4u;
    SET_GPR_U32(ctx, 31, 0x1C49DCu);
    ctx->pc = 0x1C49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49D4u;
    // 0x1c49d8: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C49D4u, 0x1C49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49DCu;
label_1c49dc:
    // 0x1c49dc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c49e0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1c49e4: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1C49E4u;
    SET_GPR_U32(ctx, 31, 0x1C49ECu);
    ctx->pc = 0x1C49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49E4u;
    // 0x1c49e8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1C49E4u, 0x1C49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49ECu;
label_1c49ec:
    // 0x1c49ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c49ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c49f0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1c49f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c49f4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C49F4u;
    {
        const bool branch_taken_0x1c49f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49F4u;
        // 0x1c49f8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f4) {
            ctx->pc = 0x1C4970u;
            return;
        }
    }
    ctx->pc = 0x1C49FCu;
    // 0x1c49fc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1c49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a00: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C4A00u;
    SET_GPR_U32(ctx, 31, 0x1C4A08u);
    ctx->pc = 0x1C4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A00u;
    // 0x1c4a04: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C4A00u, 0x1C4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A08u;
label_1c4a08:
    // 0x1c4a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a0c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C4A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A14u);
    ctx->pc = 0x1C4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A0Cu;
    // 0x1c4a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C4A0Cu, 0x1C4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A14u;
label_1c4a14:
    // 0x1c4a14: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a18: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c4a1c: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1c4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4a20: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a24: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C4A24u;
    SET_GPR_U32(ctx, 31, 0x1C4A2Cu);
    ctx->pc = 0x1C4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A24u;
    // 0x1c4a28: 0xa040000c  sb          $zero, 0xC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C4A24u, 0x1C4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A2Cu;
label_1c4a2c:
    // 0x1c4a2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4A2Cu;
    {
        const bool branch_taken_0x1c4a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A2Cu;
        // 0x1c4a30: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a2c) {
            ctx->pc = 0x1C4A48u;
            return;
        }
    }
    ctx->pc = 0x1C4A34u;
    // 0x1c4a34: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1c4a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1c4a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a3c: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1c4a40: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1C4A40u;
    SET_GPR_U32(ctx, 31, 0x1C4A48u);
    ctx->pc = 0x1C4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A40u;
    // 0x1c4a44: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1C4A40u, 0x1C4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A48u;
}
