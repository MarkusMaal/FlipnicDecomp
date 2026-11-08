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

// Function: entry_001c744c
// Address: 0x1c744c - 0x1c7494
void entry_001c744c_0x1c744c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c744c_0x1c744c");
#endif

    ctx->pc = 0x1c744cu;

    // 0x1c744c: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7454: 0x146200cb  bne         $v1, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1C7454u;
    {
        const bool branch_taken_0x1c7454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7454u;
        // 0x1c7458: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7454) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C745Cu;
    // 0x1c745c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7460: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7464: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c7468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c746c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7470: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c7470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c7474: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7478: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c747c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c747cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c7480: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1C7480u;
    {
        const bool branch_taken_0x1c7480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7480) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7488u;
    // 0x1c7488: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c748c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1C748Cu;
    {
        const bool branch_taken_0x1c748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C748Cu;
        // 0x1c7490: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c748c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7494u;
}
