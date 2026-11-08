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

// Function: entry_0015e4cc
// Address: 0x15e4cc - 0x15e4e8
void entry_0015e4cc_0x15e4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4cc_0x15e4cc");
#endif

    ctx->pc = 0x15e4ccu;

    // 0x15e4cc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15e4d0: 0x2e39021  addu        $s2, $s7, $v1
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x15e4d4: 0x86440228  lh          $a0, 0x228($s2)
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x15e4d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e4dc: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x15E4DCu;
    {
        const bool branch_taken_0x15e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4DCu;
        // 0x15e4e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4dc) {
            ctx->pc = 0x15E76Cu;
            return;
        }
    }
    ctx->pc = 0x15E4E4u;
    // 0x15e4e4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    ctx->pc = 0x15e4e8u;
}
