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

// Function: entry_0018f64c
// Address: 0x18f64c - 0x18f66c
void entry_0018f64c_0x18f64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f64c_0x18f64c");
#endif

    ctx->pc = 0x18f64cu;

    // 0x18f64c: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x18f650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f654: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F654u;
    {
        const bool branch_taken_0x18f654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F654u;
        // 0x18f658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f654) {
            ctx->pc = 0x18F66Cu;
            return;
        }
    }
    ctx->pc = 0x18F65Cu;
    // 0x18f65c: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f660: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18F660u;
    {
        const bool branch_taken_0x18f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F660u;
        // 0x18f664: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f660) {
            ctx->pc = 0x18F6C4u;
            return;
        }
    }
    ctx->pc = 0x18F668u;
    // 0x18f668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18f66cu;
}
