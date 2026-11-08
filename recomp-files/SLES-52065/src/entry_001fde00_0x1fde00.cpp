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

// Function: entry_001fde00
// Address: 0x1fde00 - 0x1fde40
void entry_001fde00_0x1fde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde00_0x1fde00");
#endif

    switch (ctx->pc) {
        case 0x1fde08u: goto label_1fde08;
        case 0x1fde28u: goto label_1fde28;
        default: break;
    }

    ctx->pc = 0x1fde00u;

label_1fde00:
    // 0x1fde00: 0xc07f4fc  jal         func_1FD3F0
label_1fde04:
    if (ctx->pc == 0x1FDE04u) {
        ctx->pc = 0x1FDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE00u;
        // 0x1fde04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE08u;
        goto label_1fde08;
    }
    ctx->pc = 0x1FDE00u;
    SET_GPR_U32(ctx, 31, 0x1FDE08u);
    ctx->pc = 0x1FDE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE00u;
    // 0x1fde04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FDE00u, 0x1FDE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE08u;
label_1fde08:
    // 0x1fde08: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fde08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1fde0c:
    // 0x1fde0c: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x1fde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_1fde10:
    // 0x1fde10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1fde14:
    if (ctx->pc == 0x1FDE14u) {
        ctx->pc = 0x1FDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE10u;
        // 0x1fde14: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE18u;
        goto label_1fde18;
    }
    ctx->pc = 0x1FDE10u;
    {
        const bool branch_taken_0x1fde10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde10) {
            ctx->pc = 0x1FDE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDE10u;
            // 0x1fde14: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE40u;
            return;
        }
    }
    ctx->pc = 0x1FDE18u;
label_1fde18:
    // 0x1fde18: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fde1c:
    // 0x1fde1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde20:
    // 0x1fde20: 0x2a0f809  jalr        $s5
label_1fde24:
    if (ctx->pc == 0x1FDE24u) {
        ctx->pc = 0x1FDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE20u;
        // 0x1fde24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE28u;
        goto label_1fde28;
    }
    ctx->pc = 0x1FDE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FDE28u);
        ctx->pc = 0x1FDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE20u;
        // 0x1fde24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE20u, 0x1FDE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDE28u;
label_1fde28:
    // 0x1fde28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fde28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fde2c:
    // 0x1fde2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fde30:
    // 0x1fde30: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
label_1fde34:
    if (ctx->pc == 0x1FDE34u) {
        ctx->pc = 0x1FDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE30u;
        // 0x1fde34: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE38u;
        goto label_1fde38;
    }
    ctx->pc = 0x1FDE30u;
    {
        const bool branch_taken_0x1fde30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fde30) {
            ctx->pc = 0x1FDE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDE30u;
            // 0x1fde34: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE40u;
            return;
        }
    }
    ctx->pc = 0x1FDE38u;
label_1fde38:
    // 0x1fde38: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_1fde3c:
    if (ctx->pc == 0x1FDE3Cu) {
        ctx->pc = 0x1FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE38u;
        // 0x1fde3c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE40u;
        goto label_fallthrough_0x1fde38;
    }
    ctx->pc = 0x1FDE38u;
    {
        const bool branch_taken_0x1fde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE38u;
        // 0x1fde3c: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde38) {
            ctx->pc = 0x1FE19Cu;
            return;
        }
    }
label_fallthrough_0x1fde38:
    ctx->pc = 0x1FDE40u;
}
