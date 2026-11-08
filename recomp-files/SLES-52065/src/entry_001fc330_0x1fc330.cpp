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

// Function: entry_001fc330
// Address: 0x1fc330 - 0x1fc368
void entry_001fc330_0x1fc330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc330_0x1fc330");
#endif

    switch (ctx->pc) {
        case 0x1fc338u: goto label_1fc338;
        default: break;
    }

    ctx->pc = 0x1fc330u;

    // 0x1fc330: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC330u;
    SET_GPR_U32(ctx, 31, 0x1FC338u);
    ctx->pc = 0x1FC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC330u;
    // 0x1fc334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC330u, 0x1FC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC338u;
label_1fc338:
    // 0x1fc338: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC338u;
    {
        const bool branch_taken_0x1fc338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC338u;
        // 0x1fc33c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc338) {
            ctx->pc = 0x1FC370u;
            return;
        }
    }
    ctx->pc = 0x1FC340u;
    // 0x1fc340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc348: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc34c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fc350: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc354: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC354u;
    {
        const bool branch_taken_0x1fc354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC354u;
        // 0x1fc358: 0x24754ef8  addiu       $s5, $v1, 0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 20216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc354) {
            ctx->pc = 0x1FC368u;
            return;
        }
    }
    ctx->pc = 0x1FC35Cu;
    // 0x1fc35c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc360: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fc364: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fc364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1fc368u;
}
