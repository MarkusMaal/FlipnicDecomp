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

// Function: entry_001df4a8
// Address: 0x1df4a8 - 0x1df4f8
void entry_001df4a8_0x1df4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df4a8_0x1df4a8");
#endif

    switch (ctx->pc) {
        case 0x1df4ecu: goto label_1df4ec;
        default: break;
    }

    ctx->pc = 0x1df4a8u;

label_1df4a8:
    // 0x1df4a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1df4ac: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1df4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1df4b0: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1df4b4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1df4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df4bc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1df4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df4c0: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1df4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1df4c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1df4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1df4c8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1df4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1df4cc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DF4CCu;
    {
        const bool branch_taken_0x1df4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4CCu;
        // 0x1df4d0: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4cc) {
            ctx->pc = 0x1DF4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df4a8;
        }
    }
    ctx->pc = 0x1DF4D4u;
    // 0x1df4d4: 0x26a39f00  addiu       $v1, $s5, -0x6100
    ctx->pc = 0x1df4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df4d8: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x1df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1df4dc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF4DCu;
    {
        const bool branch_taken_0x1df4dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1DF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4DCu;
        // 0x1df4e0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4dc) {
            ctx->pc = 0x1DF4F8u;
            return;
        }
    }
    ctx->pc = 0x1DF4E4u;
    // 0x1df4e4: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DF4E4u;
    SET_GPR_U32(ctx, 31, 0x1DF4ECu);
    ctx->pc = 0x1DF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4E4u;
    // 0x1df4e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DF4E4u, 0x1DF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4ECu;
label_1df4ec:
    // 0x1df4ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF4ECu;
    {
        const bool branch_taken_0x1df4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4ec) {
            ctx->pc = 0x1DF514u;
            return;
        }
    }
    ctx->pc = 0x1DF4F4u;
    // 0x1df4f4: 0x0  nop
    ctx->pc = 0x1df4f4u;
    // NOP
    ctx->pc = 0x1df4f8u;
}
