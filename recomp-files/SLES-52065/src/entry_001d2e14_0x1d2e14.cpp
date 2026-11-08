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

// Function: entry_001d2e14
// Address: 0x1d2e14 - 0x1d2e64
void entry_001d2e14_0x1d2e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2e14_0x1d2e14");
#endif

    ctx->pc = 0x1d2e14u;

    // 0x1d2e14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2e18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d2e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2e1c: 0x10460011  beq         $v0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2E1Cu;
    {
        const bool branch_taken_0x1d2e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E1Cu;
        // 0x1d2e20: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e1c) {
            ctx->pc = 0x1D2E64u;
            return;
        }
    }
    ctx->pc = 0x1D2E24u;
    // 0x1d2e24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2e2c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d2e30: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2E30u;
    {
        const bool branch_taken_0x1d2e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2e30) {
            ctx->pc = 0x1D2E64u;
            return;
        }
    }
    ctx->pc = 0x1D2E38u;
    // 0x1d2e38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e4c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1d2e50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2E5Cu;
    {
        const bool branch_taken_0x1d2e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E5Cu;
        // 0x1d2e60: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e5c) {
            ctx->pc = 0x1D2E78u;
            return;
        }
    }
    ctx->pc = 0x1D2E64u;
}
