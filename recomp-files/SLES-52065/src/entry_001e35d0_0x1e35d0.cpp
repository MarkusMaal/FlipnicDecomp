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

// Function: entry_001e35d0
// Address: 0x1e35d0 - 0x1e35ec
void entry_001e35d0_0x1e35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e35d0_0x1e35d0");
#endif

    ctx->pc = 0x1e35d0u;

    // 0x1e35d0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E35D0u;
    {
        const bool branch_taken_0x1e35d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35D0u;
        // 0x1e35d4: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35d0) {
            ctx->pc = 0x1E35ECu;
            return;
        }
    }
    ctx->pc = 0x1E35D8u;
    // 0x1e35d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e35dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e35dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35e0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e35e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E35E4u;
    {
        const bool branch_taken_0x1e35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35E4u;
        // 0x1e35e8: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35e4) {
            ctx->pc = 0x1E3680u;
            return;
        }
    }
    ctx->pc = 0x1E35ECu;
}
