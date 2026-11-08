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

// Function: entry_00137b1c
// Address: 0x137b1c - 0x137b58
void entry_00137b1c_0x137b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b1c_0x137b1c");
#endif

    switch (ctx->pc) {
        case 0x137b34u: goto label_137b34;
        case 0x137b4cu: goto label_137b4c;
        default: break;
    }

    ctx->pc = 0x137b1cu;

    // 0x137b1c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x137b20: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137B20u;
    {
        const bool branch_taken_0x137b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B20u;
        // 0x137b24: 0x2902821  addu        $a1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b20) {
            ctx->pc = 0x137C00u;
            return;
        }
    }
    ctx->pc = 0x137B28u;
    // 0x137b28: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x137b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x137b2c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137B2Cu;
    SET_GPR_U32(ctx, 31, 0x137B34u);
    ctx->pc = 0x137B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B2Cu;
    // 0x137b30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137B2Cu, 0x137B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B34u;
label_137b34:
    // 0x137b34: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x137b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x137b38: 0x26a40018  addiu       $a0, $s5, 0x18
    ctx->pc = 0x137b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x137b3c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x137b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x137b40: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x137b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x137b44: 0xc04eae0  jal         func_13AB80
    ctx->pc = 0x137B44u;
    SET_GPR_U32(ctx, 31, 0x137B4Cu);
    ctx->pc = 0x137B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B44u;
    // 0x137b48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB80u, 0x137B44u, 0x137B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B4Cu;
label_137b4c:
    // 0x137b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x137b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x137B50u;
    {
        const bool branch_taken_0x137b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b50) {
            ctx->pc = 0x137BF0u;
            return;
        }
    }
    ctx->pc = 0x137B58u;
}
