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

// Function: entry_001da488
// Address: 0x1da488 - 0x1da4d0
void entry_001da488_0x1da488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da488_0x1da488");
#endif

    switch (ctx->pc) {
        case 0x1da4c4u: goto label_1da4c4;
        default: break;
    }

    ctx->pc = 0x1da488u;

label_1da488:
    // 0x1da488: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da48c: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1da48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1da490: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1da494: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1da494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da49c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1da49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da4a0: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1da4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1da4a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1da4a8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1da4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1da4ac: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DA4ACu;
    {
        const bool branch_taken_0x1da4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4ACu;
        // 0x1da4b0: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4ac) {
            ctx->pc = 0x1DA488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da488;
        }
    }
    ctx->pc = 0x1DA4B4u;
    // 0x1da4b4: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA4B4u;
    {
        const bool branch_taken_0x1da4b4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da4b4) {
            ctx->pc = 0x1DA4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4B4u;
            // 0x1da4b8: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA4D0u;
            return;
        }
    }
    ctx->pc = 0x1DA4BCu;
    // 0x1da4bc: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA4BCu;
    SET_GPR_U32(ctx, 31, 0x1DA4C4u);
    ctx->pc = 0x1DA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4BCu;
    // 0x1da4c0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA4BCu, 0x1DA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4C4u;
label_1da4c4:
    // 0x1da4c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA4C4u;
    {
        const bool branch_taken_0x1da4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4c4) {
            ctx->pc = 0x1DA4E8u;
            return;
        }
    }
    ctx->pc = 0x1DA4CCu;
    // 0x1da4cc: 0x0  nop
    ctx->pc = 0x1da4ccu;
    // NOP
    ctx->pc = 0x1da4d0u;
}
