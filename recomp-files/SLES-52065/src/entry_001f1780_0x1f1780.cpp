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

// Function: entry_001f1780
// Address: 0x1f1780 - 0x1f17a0
void entry_001f1780_0x1f1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1780_0x1f1780");
#endif

    ctx->pc = 0x1f1780u;

    // 0x1f1780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1784: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1788: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1788u;
    {
        const bool branch_taken_0x1f1788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1788u;
        // 0x1f178c: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1788) {
            ctx->pc = 0x1F17CCu;
            return;
        }
    }
    ctx->pc = 0x1F1790u;
    // 0x1f1790: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1794: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1798: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1798u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f179c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1f17a0u;
}
