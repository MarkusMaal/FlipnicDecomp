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

// Function: entry_001ef87c
// Address: 0x1ef87c - 0x1ef8a8
void entry_001ef87c_0x1ef87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef87c_0x1ef87c");
#endif

    ctx->pc = 0x1ef87cu;

    // 0x1ef87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef880: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ef884: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ef884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ef888: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF888u;
    {
        const bool branch_taken_0x1ef888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF888u;
        // 0x1ef88c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef888) {
            ctx->pc = 0x1EF8D4u;
            return;
        }
    }
    ctx->pc = 0x1EF890u;
    // 0x1ef890: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1ef894: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1ef894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef898: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1ef89c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ef89cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1ef8a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ef8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ef8a4: 0x0  nop
    ctx->pc = 0x1ef8a4u;
    // NOP
    ctx->pc = 0x1ef8a8u;
}
