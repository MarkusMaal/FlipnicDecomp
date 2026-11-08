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

// Function: entry_00194488
// Address: 0x194488 - 0x1944d0
void entry_00194488_0x194488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194488_0x194488");
#endif

    ctx->pc = 0x194488u;

    // 0x194488: 0x8e840324  lw          $a0, 0x324($s4)
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x19448c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194490: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194494: 0xae840324  sw          $a0, 0x324($s4)
    ctx->pc = 0x194494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 4));
    // 0x194498: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19449c: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x19449Cu;
    {
        const bool branch_taken_0x19449c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1944A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19449Cu;
        // 0x1944a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19449c) {
            ctx->pc = 0x1945F0u;
            return;
        }
    }
    ctx->pc = 0x1944A4u;
    // 0x1944a4: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1944A4u;
    {
        const bool branch_taken_0x1944a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1944a4) {
            ctx->pc = 0x1945E8u;
            return;
        }
    }
    ctx->pc = 0x1944ACu;
    // 0x1944ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1944b0: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1944B0u;
    {
        const bool branch_taken_0x1944b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1944B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B0u;
        // 0x1944b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944b0) {
            ctx->pc = 0x1945D8u;
            return;
        }
    }
    ctx->pc = 0x1944B8u;
    // 0x1944b8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1944B8u;
    {
        const bool branch_taken_0x1944b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1944b8) {
            ctx->pc = 0x194550u;
            return;
        }
    }
    ctx->pc = 0x1944C0u;
    // 0x1944c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1944C0u;
    {
        const bool branch_taken_0x1944c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944c0) {
            ctx->pc = 0x1944D0u;
            return;
        }
    }
    ctx->pc = 0x1944C8u;
    // 0x1944c8: 0x1000062a  b           . + 4 + (0x62A << 2)
    ctx->pc = 0x1944C8u;
    {
        const bool branch_taken_0x1944c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944c8) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1944D0u;
}
