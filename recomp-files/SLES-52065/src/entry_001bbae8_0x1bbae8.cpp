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

// Function: entry_001bbae8
// Address: 0x1bbae8 - 0x1bbb44
void entry_001bbae8_0x1bbae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbae8_0x1bbae8");
#endif

    switch (ctx->pc) {
        case 0x1bbb0cu: goto label_1bbb0c;
        default: break;
    }

    ctx->pc = 0x1bbae8u;

    // 0x1bbae8: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1bbaec: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1bbaf0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bbaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbaf4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bbaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbafc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1bbafcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbb00: 0xafb40098  sw          $s4, 0x98($sp)
    ctx->pc = 0x1bbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 20));
    // 0x1bbb04: 0xc06ef4c  jal         func_1BBD30
    ctx->pc = 0x1BBB04u;
    SET_GPR_U32(ctx, 31, 0x1BBB0Cu);
    ctx->pc = 0x1BBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB04u;
    // 0x1bbb08: 0xafb50088  sw          $s5, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD30u, 0x1BBB04u, 0x1BBB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB0Cu;
label_1bbb0c:
    // 0x1bbb0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbb10: 0x24540008  addiu       $s4, $v0, 0x8
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1bbb14: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBB14u;
    {
        const bool branch_taken_0x1bbb14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb14) {
            ctx->pc = 0x1BBB78u;
            return;
        }
    }
    ctx->pc = 0x1BBB1Cu;
    // 0x1bbb1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbb20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1bbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1bbb24: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbb28: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bbb2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBB2Cu;
    {
        const bool branch_taken_0x1bbb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB2Cu;
        // 0x1bbb30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb2c) {
            ctx->pc = 0x1BBB44u;
            return;
        }
    }
    ctx->pc = 0x1BBB34u;
    // 0x1bbb34: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1bbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1bbb38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbb3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BBB3Cu;
    {
        const bool branch_taken_0x1bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB3Cu;
        // 0x1bbb40: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb3c) {
            ctx->pc = 0x1BBB74u;
            return;
        }
    }
    ctx->pc = 0x1BBB44u;
}
