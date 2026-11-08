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

// Function: entry_001eecf8
// Address: 0x1eecf8 - 0x1eed24
void entry_001eecf8_0x1eecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eecf8_0x1eecf8");
#endif

    switch (ctx->pc) {
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed1cu: goto label_1eed1c;
        default: break;
    }

    ctx->pc = 0x1eecf8u;

    // 0x1eecf8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EECF8u;
    SET_GPR_U32(ctx, 31, 0x1EED00u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EECF8u, 0x1EED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED00u;
label_1eed00:
    // 0x1eed00: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1eed04: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1eed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1eed08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EED08u;
    {
        const bool branch_taken_0x1eed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED08u;
        // 0x1eed0c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed08) {
            ctx->pc = 0x1EED24u;
            return;
        }
    }
    ctx->pc = 0x1EED10u;
    // 0x1eed10: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1eed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1eed14: 0xc07b84a  jal         func_1EE128
    ctx->pc = 0x1EED14u;
    SET_GPR_U32(ctx, 31, 0x1EED1Cu);
    ctx->pc = 0x1EED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED14u;
    // 0x1eed18: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE128u, 0x1EED14u, 0x1EED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED1Cu;
label_1eed1c:
    // 0x1eed1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED1Cu;
    {
        const bool branch_taken_0x1eed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED1Cu;
        // 0x1eed20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed1c) {
            ctx->pc = 0x1EED34u;
            return;
        }
    }
    ctx->pc = 0x1EED24u;
}
