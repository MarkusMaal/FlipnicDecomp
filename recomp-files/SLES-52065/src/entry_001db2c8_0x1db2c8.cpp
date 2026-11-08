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

// Function: entry_001db2c8
// Address: 0x1db2c8 - 0x1db308
void entry_001db2c8_0x1db2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db2c8_0x1db2c8");
#endif

    switch (ctx->pc) {
        case 0x1db2d0u: goto label_1db2d0;
        default: break;
    }

    ctx->pc = 0x1db2c8u;

    // 0x1db2c8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DB2C8u;
    SET_GPR_U32(ctx, 31, 0x1DB2D0u);
    ctx->pc = 0x1DB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C8u;
    // 0x1db2cc: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DB2C8u, 0x1DB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2D0u;
label_1db2d0:
    // 0x1db2d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1db2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1db2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1db2d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1db2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1db2dc: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x1db2dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1db2e0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DB2E0u;
    {
        const bool branch_taken_0x1db2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E0u;
        // 0x1db2e4: 0x8c477320  lw          $a3, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2e0) {
            ctx->pc = 0x1DB35Cu;
            return;
        }
    }
    ctx->pc = 0x1DB2E8u;
    // 0x1db2e8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1db2ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db2f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db2f4: 0x24687330  addiu       $t0, $v1, 0x7330
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1db2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db2fc: 0x25090004  addiu       $t1, $t0, 0x4
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1db300: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db304: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x1db308u;
}
