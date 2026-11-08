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

// Function: entry_0019c8ac
// Address: 0x19c8ac - 0x19c8e4
void entry_0019c8ac_0x19c8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8ac_0x19c8ac");
#endif

    ctx->pc = 0x19c8acu;

    // 0x19c8ac: 0x8e440674  lw          $a0, 0x674($s2)
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
    // 0x19c8b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c8b4: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x19C8B4u;
    {
        const bool branch_taken_0x19c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B4u;
        // 0x19c8b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8b4) {
            ctx->pc = 0x19CB40u;
            return;
        }
    }
    ctx->pc = 0x19C8BCu;
    // 0x19c8bc: 0x10860096  beq         $a0, $a2, . + 4 + (0x96 << 2)
    ctx->pc = 0x19C8BCu;
    {
        const bool branch_taken_0x19c8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x19C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8BCu;
        // 0x19c8c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8bc) {
            ctx->pc = 0x19CB18u;
            return;
        }
    }
    ctx->pc = 0x19C8C4u;
    // 0x19c8c4: 0x1085007b  beq         $a0, $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x19C8C4u;
    {
        const bool branch_taken_0x19c8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x19C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8C4u;
        // 0x19c8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8c4) {
            ctx->pc = 0x19CAB4u;
            return;
        }
    }
    ctx->pc = 0x19C8CCu;
    // 0x19c8cc: 0x10860036  beq         $a0, $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x19C8CCu;
    {
        const bool branch_taken_0x19c8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x19c8cc) {
            ctx->pc = 0x19C9A8u;
            return;
        }
    }
    ctx->pc = 0x19C8D4u;
    // 0x19c8d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C8D4u;
    {
        const bool branch_taken_0x19c8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8d4) {
            ctx->pc = 0x19C8E4u;
            return;
        }
    }
    ctx->pc = 0x19C8DCu;
    // 0x19c8dc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x19C8DCu;
    {
        const bool branch_taken_0x19c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8DCu;
        // 0x19c8e0: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8dc) {
            ctx->pc = 0x19CB80u;
            return;
        }
    }
    ctx->pc = 0x19C8E4u;
}
