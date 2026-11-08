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

// Function: entry_00104d28
// Address: 0x104d28 - 0x104d8c
void entry_00104d28_0x104d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104d28_0x104d28");
#endif

    switch (ctx->pc) {
        case 0x104d30u: goto label_104d30;
        case 0x104d44u: goto label_104d44;
        case 0x104d7cu: goto label_104d7c;
        default: break;
    }

    ctx->pc = 0x104d28u;

    // 0x104d28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104D28u;
    SET_GPR_U32(ctx, 31, 0x104D30u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104D28u, 0x104D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D30u;
label_104d30:
    // 0x104d30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104D30u;
    {
        const bool branch_taken_0x104d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D30u;
        // 0x104d34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d30) {
            ctx->pc = 0x104D9Cu;
            return;
        }
    }
    ctx->pc = 0x104D38u;
    // 0x104d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d3c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104D3Cu;
    SET_GPR_U32(ctx, 31, 0x104D44u);
    ctx->pc = 0x104D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D3Cu;
    // 0x104d40: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104D3Cu, 0x104D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D44u;
label_104d44:
    // 0x104d44: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104d48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104d4c: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104d50: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104d54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104d58: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x104d5c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104d60: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104d64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104d68: 0x24637990  addiu       $v1, $v1, 0x7990
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31120));
    // 0x104d6c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104d70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d74: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104D74u;
    SET_GPR_U32(ctx, 31, 0x104D7Cu);
    ctx->pc = 0x104D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D74u;
    // 0x104d78: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104D74u, 0x104D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D7Cu;
label_104d7c:
    // 0x104d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104D7Cu;
    {
        const bool branch_taken_0x104d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104d7c) {
            ctx->pc = 0x104D8Cu;
            return;
        }
    }
    ctx->pc = 0x104D84u;
    // 0x104d84: 0xc04a864  jal         func_12A190
    ctx->pc = 0x104D84u;
    SET_GPR_U32(ctx, 31, 0x104D8Cu);
    ctx->pc = 0x104D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D84u;
    // 0x104d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A190u, 0x104D84u, 0x104D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D8Cu;
}
