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

// Function: entry_0010d018
// Address: 0x10d018 - 0x10d054
void entry_0010d018_0x10d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d018_0x10d018");
#endif

    switch (ctx->pc) {
        case 0x10d03cu: goto label_10d03c;
        default: break;
    }

    ctx->pc = 0x10d018u;

    // 0x10d018: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x10d018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10d01c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x10D01Cu;
    {
        const bool branch_taken_0x10d01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D01Cu;
        // 0x10d020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d01c) {
            ctx->pc = 0x10CFF0u;
            return;
        }
    }
    ctx->pc = 0x10D024u;
    // 0x10d024: 0xae2501d4  sw          $a1, 0x1D4($s1)
    ctx->pc = 0x10d024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 5));
    // 0x10d028: 0x922301d3  lbu         $v1, 0x1D3($s1)
    ctx->pc = 0x10d028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 467)));
    // 0x10d02c: 0x146001e8  bnez        $v1, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x10D02Cu;
    {
        const bool branch_taken_0x10d02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D02Cu;
        // 0x10d030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d02c) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
    ctx->pc = 0x10D034u;
    // 0x10d034: 0xc042118  jal         func_108460
    ctx->pc = 0x10D034u;
    SET_GPR_U32(ctx, 31, 0x10D03Cu);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10D034u, 0x10D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D03Cu;
label_10d03c:
    // 0x10d03c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x10d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10d040: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x10d040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x10d044: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D044u;
    {
        const bool branch_taken_0x10d044 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D044u;
        // 0x10d048: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d044) {
            ctx->pc = 0x10D054u;
            return;
        }
    }
    ctx->pc = 0x10D04Cu;
    // 0x10d04c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10D04Cu;
    {
        const bool branch_taken_0x10d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D04Cu;
        // 0x10d050: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d04c) {
            ctx->pc = 0x10D06Cu;
            return;
        }
    }
    ctx->pc = 0x10D054u;
}
