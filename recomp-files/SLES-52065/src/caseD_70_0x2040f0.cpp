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

// Function: caseD_70
// Address: 0x2040f0 - 0x204114
void caseD_70_0x2040f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_70_0x2040f0");
#endif

    ctx->pc = 0x2040f0u;

    // 0x2040f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2040f4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2040f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2040f8: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x2040fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204100: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x204100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x204104: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x204104u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x204108: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x20410c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x20410Cu;
    {
        const bool branch_taken_0x20410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20410Cu;
        // 0x204110: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20410c) {
            ctx->pc = 0x2041F8u;
            return;
        }
    }
    ctx->pc = 0x204114u;
}
