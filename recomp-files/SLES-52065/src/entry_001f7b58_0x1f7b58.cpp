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

// Function: entry_001f7b58
// Address: 0x1f7b58 - 0x1f7b8c
void entry_001f7b58_0x1f7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7b58_0x1f7b58");
#endif

    switch (ctx->pc) {
        case 0x1f7b6cu: goto label_1f7b6c;
        default: break;
    }

    ctx->pc = 0x1f7b58u;

    // 0x1f7b58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b60: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x1f7b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x1f7b64: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F7B64u;
    SET_GPR_U32(ctx, 31, 0x1F7B6Cu);
    ctx->pc = 0x1F7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B64u;
    // 0x1f7b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F7B64u, 0x1F7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B6Cu;
label_1f7b6c:
    // 0x1f7b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b70: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7B70u;
    {
        const bool branch_taken_0x1f7b70 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f7b70) {
            ctx->pc = 0x1F7B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B70u;
            // 0x1f7b74: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7BBCu;
            return;
        }
    }
    ctx->pc = 0x1F7B78u;
    // 0x1f7b78: 0x8ee2bb10  lw          $v0, -0x44F0($s7)
    ctx->pc = 0x1f7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949648)));
    // 0x1f7b7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7B7Cu;
    {
        const bool branch_taken_0x1f7b7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B7Cu;
        // 0x1f7b80: 0x8ea6bb54  lw          $a2, -0x44AC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b7c) {
            ctx->pc = 0x1F7B8Cu;
            return;
        }
    }
    ctx->pc = 0x1F7B84u;
    // 0x1f7b84: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7B84u;
    SET_GPR_U32(ctx, 31, 0x1F7B8Cu);
    ctx->pc = 0x1F7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B84u;
    // 0x1f7b88: 0x26c44798  addiu       $a0, $s6, 0x4798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 18328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7B84u, 0x1F7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B8Cu;
}
