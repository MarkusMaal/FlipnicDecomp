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

// Function: entry_0010baf4
// Address: 0x10baf4 - 0x10bb38
void entry_0010baf4_0x10baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010baf4_0x10baf4");
#endif

    switch (ctx->pc) {
        case 0x10bafcu: goto label_10bafc;
        default: break;
    }

    ctx->pc = 0x10baf4u;

    // 0x10baf4: 0xc042c10  jal         func_10B040
    ctx->pc = 0x10BAF4u;
    SET_GPR_U32(ctx, 31, 0x10BAFCu);
    ctx->pc = 0x10BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAF4u;
    // 0x10baf8: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B040u, 0x10BAF4u, 0x10BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAFCu;
label_10bafc:
    // 0x10bafc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10BAFCu;
    {
        const bool branch_taken_0x10bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bafc) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BB04u;
    // 0x10bb04: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10bb08: 0x8063002c  lb          $v1, 0x2C($v1)
    ctx->pc = 0x10bb08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x10bb0c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x10BB0Cu;
    {
        const bool branch_taken_0x10bb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb0c) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BB14u;
    // 0x10bb14: 0x8e04231c  lw          $a0, 0x231C($s0)
    ctx->pc = 0x10bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x10bb18: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10BB18u;
    {
        const bool branch_taken_0x10bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb18) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BB20u;
    // 0x10bb20: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x10bb24: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10BB24u;
    {
        const bool branch_taken_0x10bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB24u;
        // 0x10bb28: 0x24860370  addiu       $a2, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb24) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BB2Cu;
    // 0x10bb2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10bb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bb30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10BB30u;
    {
        const bool branch_taken_0x10bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB30u;
        // 0x10bb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb30) {
            ctx->pc = 0x10BB5Cu;
            return;
        }
    }
    ctx->pc = 0x10BB38u;
}
