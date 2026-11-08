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

// Function: entry_00118c04
// Address: 0x118c04 - 0x118c58
void entry_00118c04_0x118c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118c04_0x118c04");
#endif

    switch (ctx->pc) {
        case 0x118c0cu: goto label_118c0c;
        case 0x118c14u: goto label_118c14;
        case 0x118c34u: goto label_118c34;
        case 0x118c4cu: goto label_118c4c;
        default: break;
    }

    ctx->pc = 0x118c04u;

    // 0x118c04: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118C04u;
    SET_GPR_U32(ctx, 31, 0x118C0Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118C04u, 0x118C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C0Cu;
label_118c0c:
    // 0x118c0c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x118C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C0Cu;
    // 0x118c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c18: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118C20u;
    // 0x118c20: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118c24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x118C24u;
    {
        const bool branch_taken_0x118c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C24u;
        // 0x118c28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c24) {
            ctx->pc = 0x118C58u;
            return;
        }
    }
    ctx->pc = 0x118C2Cu;
    // 0x118c2c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C2Cu;
    SET_GPR_U32(ctx, 31, 0x118C34u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C2Cu, 0x118C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C34u;
label_118c34:
    // 0x118c34: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x118c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x118c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c40: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x118c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x118c44: 0xc062a44  jal         func_18A910
    ctx->pc = 0x118C44u;
    SET_GPR_U32(ctx, 31, 0x118C4Cu);
    ctx->pc = 0x118C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C44u;
    // 0x118c48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x118C44u, 0x118C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C4Cu;
label_118c4c:
    // 0x118c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c50: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x118C50u;
    {
        const bool branch_taken_0x118c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C50u;
        // 0x118c54: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c50) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118C58u;
}
